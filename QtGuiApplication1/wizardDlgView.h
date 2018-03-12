#pragma once
#include <qdialog.h>
#include <qobject.h>
#include <qwidget.h>
#include <qpushbutton.h>
#include <qtextcodec.h>

class wizardDlgView : public QDialog
{
	Q_OBJECT
public:
	wizardDlgView(QWidget* parent = nullptr);
	~wizardDlgView();
	void setControlor(void * controler);
//
private:
	void * controler;
	QPushButton* exitButton;
};