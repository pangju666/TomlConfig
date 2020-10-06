#include "pch.h"
#include "AppConfig.h"
#include <fstream>

using namespace std;
using namespace toml;
using namespace config;

// 实例化单例对象
shared_ptr<AppConfig> AppConfig::appConfig;

AppConfig::AppConfig(const char* configFileName) : configFileName(configFileName)
{
	// 从文件中读取配置文档
	this->config = parse(configFileName);

	// 判断是否为空文档
	if (this->config.size() == 0) {
		// 重置为默认配置
		resumeDefault();
	}
}

void AppConfig::applyChange(const ConfigValue config)
{
	this->config = config;
}

ConfigValue config::AppConfig::resumeDefault()
{
	///TODO: 使用流来 编写构建器函数来 定义toml配置文件
	return NULL;
}

ConfigValue AppConfig::getConfig(const char * key) const
{
	return find(this->config, key);
}

ConfigValue AppConfig::getConfig(const char * table, const char * key) const
{
	return getConfig(table).as_table().at(key);
}

ConfigValue AppConfig::operator[](const char * key) const
{
	return this->getConfig(key);
}

void AppConfig::writeToFile()
{
	ofstream stream(configFileName, ios::trunc);
	stream << this->config.as_string();
	stream.close();
}

shared_ptr<AppConfig> AppConfig::getInstance(const char* configFileName)
{
	if (!appConfig)
	{
		appConfig = make_shared<AppConfig>(configFileName);
	}
	return appConfig;
}