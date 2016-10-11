#ifndef USERINFORMATION_H
#define USERINFORMATION_H
#include <unistd.h>
#include "common.h"
#include <QObject>
#include <QNetworkInterface>
#include <stdio.h>

#ifdef Q_OS_WIN
#include <winsock2.h>
#include <windows.h>
#include <Iphlpapi.h>
#include <Assert.h>
#endif

#ifdef Q_OS_LINUX
#include <ifaddrs.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <linux/if.h>
#include <netdb.h>
#define USRINFO_NO_ERROR 0
#endif

#define WORKING_BUFFER_SIZE 15000
#define MAX_TRIES 3

class InterfaceInfo : public QObject                //此类用于获取当前网卡信息
{
    Q_OBJECT
public:
    explicit InterfaceInfo(QString lowerInterface, QString upperInterface, QObject *parent = 0);
    QString getIp();
    QString getMac111();
    int getInterfaceInfo(QString lowerInterface, QString upperInterface);
signals:

public slots:

private:

    QString ipAddress, macAddress, lowerInterface, upperInterface;
};

#endif // USERINFORMATION_H
