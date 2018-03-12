#pragma once
#include "calibrationModuleModel.h"
#include "communicationModuleModel.h"
#include "displayModuleModel.h"
#include "errorHandleModule.h"
#include "hardWarpModuleModel.h"
#include "initModuleModel.h"
#include "navigationModuleModel.h"
#include "patientManageModuleModel.h"
#include "allWorld.h"

class allModule
{
public:
	allModule();
	~allModule();

	void init();
	int enterSurgery();

private:
	calibrationModuleModel * _calibrationModule = nullptr;
	communicationModuleModel* _communicationModule = nullptr;
	displayModuleModel * _displayModule = nullptr;
	errorHandleModule * _errorHandleModule = nullptr;
	hardWarpModuleModel* _hardWarpModule = nullptr;

	initModuleModel * _initModule = nullptr;

	navigationModuleModel * _navigationModule = nullptr;
	patientManageModuleModel * _patientManageModule = nullptr;
};

