#pragma once
#include "qfile.h"
#include "qstring.h"
#include "qobject.h"
#include "configTag.h"
#include "qmap.h"

class Config {

	public:

		static Config * getInstance()
		{
			static Config config;
			return &config;
		}

		static void getConfig(QString tagConfig,QString & returnValue);

	private:

		Config();
		~Config();
		void readConfig();

		QMap<QString,QString>  _configStruct;//保存配置文件的map
};