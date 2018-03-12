#pragma once
#include <wizardDlgControl.h>
#include "types.h"
#include "allWorld.h"

class initModuleModel
{
public:
	initModuleModel(void * parent);
	~initModuleModel();
	void init();

private:
	//×´Ì¬»úÇÐ»»º¯Êý MRI && ONLINE
	WIZARD_STEP_RESULT stepCamConnect_MRI_ONLINE();
	WIZARD_STEP_RESULT stepMRIConnect_MRI_ONLINE();
	WIZARD_STEP_RESULT stepPatientManage_MRI_ONLINE();
	WIZARD_STEP_RESULT stepBase_MRI_ONLINE();
	WIZARD_STEP_RESULT stepCal_MRI_ONLINE();
	WIZARD_STEP_RESULT stepEnd_MRI_ONLINE();

private:
	wizardDlgControl * wizardControl = nullptr;
	WIZARD_STEP      nowRunStep;
	WIZARD_STEP      errorStep;
	void*  _parentModule;
};
