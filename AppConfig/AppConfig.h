#pragma once
#include "pch.h"

#include "toml/toml.h"
#include <string>

namespace config {
	/// 文档配置项，用于获取配置项使用
	using ConfigValue = const toml::value&;

	/**
	 * @brief 程序配置类，读取toml文件中的配置
	 *
	 * @author nullptr
	 * @version 1.0 2020-7-9
	 * @version 1.1 2020-8-15 修改底层实现为toml格式文档
	 * @since 1.0 2020-7-9
	 */
	class AppConfig
	{
	public:
		/**
		 * @brief 构造函数
		 *
		 * @param configFileName 配置文件名称
		 */
		AppConfig(const char* configFileName = "config.toml");

		/**
		 * @brief 获取文档副本
		 *
		 * @since 1.0
		 * @deprecated
		 */
		inline toml::value getConfig() const { return this->config; }
		
		/**
		 * @brief 应用对文档的更改
		 *
		 * @param config 新文档
		 * @since 1.0
		 * @deprecated
		 */
		void applyChange(const ConfigValue config);
		
		/**
		 * @brief 重置整个文档为默认值
		 *
		 * @return 重置后的文档副本
		 * @since 1.0
		 * @deprecated
		 */
		ConfigValue resumeDefault();
		
		/**
		 * @brief 根据键名来获取配置项
		 *
		 * @param key 配置项键名
		 * @return 配置项键名对应的值，调用其as_xxx()可以获取到具体的值，xxx为类型名称，如as_string()
		 * @since 1.0
		 * 
		 */
		ConfigValue getConfig (const char* key) const;
		
		/**
		 * @brief 根据表名和键名来获取配置项
		 *
		 * @param table 配置项表名
		 * @param key 配置项键名
		 * @return 配置项键名对应的值，调用其as_xxx()可以获取到具体的值，xxx为类型名称，如as_string()
		 * @since 1.0
		 * 
		 */
		ConfigValue getConfig(const char* table, const char* key) const;
		
		/**
		 * @brief 下标运算符重载，用于获取文档中的对象值
		 *
		 * @param key 配置项键名
		 * @return 配置项对应的值，调用其as_xxx()可以获取到具体的值，xxx为类型名称，如as_string()
		 * @since 1.0
		 * 
		 */
		ConfigValue operator[](const char*  key) const;

	private:
		/**
		 * @brief 将文档写入文件之中
		 *
		 * @since 1.0
		 * @deprecated
		 */
		void writeToFile();

	private:
		/// 文档对象
		toml::value config;
		/// 配置文件名
		std::string configFileName;
	};
}