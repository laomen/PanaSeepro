#include "wizardDlgControl.h"

wizardDlgControl::wizardDlgControl()
{
	wizardDlg.setControlor(this);
	wizardDlg.hide();
}

wizardDlgControl::~wizardDlgControl()
{
}

void wizardDlgControl::init()
{
	wizardDlg.show();
}
