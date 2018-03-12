#pragma once
#include "wizardDlgView.h"
#include "allWorld.h"
#include "types.h"

class wizardDlgControl
{
	public:
		wizardDlgControl();
		~wizardDlgControl();
		void init();

	private:
		wizardDlgView  wizardDlg;
};