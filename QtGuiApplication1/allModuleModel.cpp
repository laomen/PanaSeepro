#include "allModuleModel.h"

allModule::allModule()
{
	_calibrationModule = new calibrationModuleModel();
	_communicationModule = new communicationModuleModel();
	_initModule = new initModuleModel((void*)this);
	_displayModule = new displayModuleModel();
	_errorHandleModule = new errorHandleModule();
	_patientManageModule = new patientManageModuleModel();
	_hardWarpModule = new hardWarpModuleModel();
	_navigationModule = new navigationModuleModel();
}

allModule::~allModule()
{
	if (_calibrationModule != nullptr)
		delete _calibrationModule;
	if (_communicationModule != nullptr)
		delete _communicationModule;
	if (_initModule != nullptr)
		delete _initModule;
	if (_displayModule != nullptr)
		delete _displayModule;
	if (_errorHandleModule != nullptr)
		delete _errorHandleModule;
	if (_patientManageModule != nullptr)
		delete _patientManageModule;
	if (_hardWarpModule != nullptr)
		delete _hardWarpModule;
	if (_navigationModule != nullptr)
		delete _navigationModule; 
}

void allModule::init()
{
	if (World::getInstance()->getOperationType() > operationType::OPERATION_TYPE_NONE &&
		World::getInstance()->getOperationType() < operationType::OPERATION_TYPE_TPS )
	{
		_initModule->init();
		enterSurgery();
	}
	else
	{
		enterSurgery();
	}
}

int allModule::enterSurgery()
{
	return 0;
}
