#pragma once
#include "types.h"
#include "qsettings.h"
#include <qmap.h>

class World
{
private://私有方法
	World();
	~World();

public://接口
	static World * getInstance();
	operationType getOperationType();
	void setOperationType(operationType setValue);
	QString getQssString(QString key);
	DEVICETYPE getDeviceType();
	NAVIGATIONMODE getNaviMode();
 
private://私有数据

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