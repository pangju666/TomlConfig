#include "Config.h"
#include <fstream>

using namespace std;
using namespace toml;
using namespace config;

Config::Config(const char *configFileName) : configFileName(configFileName)
{
    // 从文件中读取配置文档
    this->config = parse(configFileName);
}

ConfigValue Config::get(const char *key) const
{
    return find(this->config, key);
}

ConfigValue Config::get(const char *table, const char *key) const
{
    return get(table).as_table().at(key);
}

ConfigValue Config::operator[](const char *key) const
{
    return this->getConfig(key);
}

void Config::writeToFile()
{
    ofstream stream(configFileName, ios::trunc);
    stream << this->config.as_string();
    stream.close();
}