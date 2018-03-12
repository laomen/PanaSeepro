#include "initModuleModel.h"
#include "allModuleModel.h"

initModuleModel::initModuleModel(void * parent)
{
	wizardControl = new wizardDlgControl();
	_parentModule = parent;
}

initModuleModel::~initModuleModel()
{
	if (wizardControl != nullptr)
		delete wizardControl;
}

void initModuleModel::init()
{
	if (World::getInstance()->getDeviceType() == DEVICE_MRI &&
		World::getInstance()->getNaviMode() == NAVIGATION_ONLINE_MRI)
	{

		if (stepCamConnect_MRI_ONLINE() == WIZARD_STEP_RESULT::WSRET_OK)
			((allModule*)(_parentModule))->enterSurgery();
		else
			;//todo: errorHandle

	}

	else if (World::getInstance()->getNaviMode() == NAVIGATION_OFFLINE)
	{

	}

	else if (World::getInstance()->getNaviMode() == NAVIGATION_OFFLINE_MRI &&
		World::getInstance()->getDeviceType() == DEVICETYPE::DEVICE_MRI)
	{

	}
	else
	{

	}
}

WIZARD_STEP_RESULT initModuleModel::stepCamConnect_MRI_ONLINE()
{
	nowRunStep = WSTEP_CAM;
	return stepMRIConnect_MRI_ONLINE();
}

WIZARD_STEP_RESULT initModuleModel::stepMRIConnect_MRI_ONLINE()
{
	nowRunStep = WSTEP_MRI;
	return stepPatientManage_MRI_ONLINE();
}

WIZARD_STEP_RESULT initModuleModel::stepPatientManage_MRI_ONLINE()
{
	nowRunStep = WSTEP_PAT;
	return stepBase_MRI_ONLINE();
}

WIZARD_STEP_RESULT initModuleModel::stepBase_MRI_ONLINE()
{
	nowRunStep = WSTEP_BAS;
	return stepCal_MRI_ONLINE();
}

WIZARD_STEP_RESULT initModuleModel::stepCal_MRI_ONLINE()
{
	nowRunStep = WSTEP_CAL;
	return stepEnd_MRI_ONLINE();
}

WIZARD_STEP_RESULT initModuleModel::stepEnd_MRI_ONLINE()
{
	nowRunStep = WSTEP_END;
	return WIZARD_STEP_RESULT::WSRET_OK;
}