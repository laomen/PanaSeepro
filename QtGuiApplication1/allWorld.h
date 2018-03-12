#pragma once
#include "types.h"
#include "qsettings.h"
#include <qmap.h>

class World
{
private://˽�з���
	World();
	~World();

public://�ӿ�
	static World * getInstance();
	operationType getOperationType();
	void setOperationType(operationType setValue);
	QString getQssString(QString key);
	DEVICETYPE getDeviceType();
	NAVIGATIONMODE getNaviMode();
 
private://˽������

	QMap<QString, QString> qssStringList;
	operationType _operationType;
	bool _bInSurgery;
	DEVICETYPE  _DeviceType;
	NAVIGATIONMODE  _nNavigateMode;
	bool _bDebugNoCamera;
	bool _bEnableMRICtrl;
	bool _bHasCamera;
	bool _bShowBreathMonitor;
};