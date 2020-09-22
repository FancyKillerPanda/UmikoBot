#pragma once
#include <QtCore/QTimer>
#include <QtCore/QString>
#include <QtCore/QTime>

QString StringifyMilliseconds(int milliseconds)
{
	QTime conv { 0, 0, 0 };
	conv = conv.addMSecs(milliseconds);
	QString time = QString::number(conv.hour()) + "hrs, " + QString::number(conv.minute()) + "mins, " + QString::number(conv.second()) + "secs";

	return time;
}
