#include "allWorld.h"

World::World()
{
	_DeviceType = DEVICETYPE::DEVICE_MRI;
	_nNavigateMode = NAVIGATIONMODE::NAVIGATION_ONLINE_MRI;

}

World::~World()
{

}

World * World::getInstance()
{
	static World _instance;
	return &_instance;
}

operationType World::getOperationType()
{
	if (_operationType >= OPERATION_TYPE_NONE && _operationType <= OPERATION_TYPE_REVIEW)
	{
		return _operationType;
	}
	else
		return OPERATION_TYPE_NONE;
}

void World::setOperationType(operationType setValue)
{
	_operationType = setValue;
}

QString World::getQssString(QString key)
{
	QMapIterator<QString, QString> iter(qssStringList);
	while (iter.hasNext())
	{
		if (iter.next().key() == key)
			return iter.next().value();
	}
	return QString();
}

DEVICETYPE World::getDeviceType()
{
	return _DeviceType;
}

NAVIGATIONMODE World::getNaviMode()
{
	return _nNavigateMode;
}
