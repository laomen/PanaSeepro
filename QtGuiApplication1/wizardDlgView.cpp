#include "wizardDlgView.h"

wizardDlgView::wizardDlgView(QWidget* parent) : QDialog(parent)
{
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

	this->setWindowFlags(Qt::FramelessWindowHint);
	this->showFullScreen();

	this->setStyleSheet("QDialog{border-image:url(:/res/Wizard/DlgWizardSkinSB.PNG)  0 1024 0 0;}");

	exitButton = new QPushButton(this);

	QRect rc(250,1000,50,50);
	exitButton->setGeometry(rc);
	exitButton->setText("Exit");
	exitButton->show();

	connect(exitButton, SIGNAL(clicked()), this, SLOT(close()));
}

wizardDlgView::~wizardDlgView()
{
	
}

void wizardDlgView::setControlor(void * controler)
{
	this->controler = controler;
}
