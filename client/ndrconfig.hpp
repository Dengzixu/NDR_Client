#pragma once

#include <QGlobalStatic>
#if (QT_VERSION < QT_VERSION_CHECK(5, 12, 1))
//#error "Please use Qt version higher than 5.12.1 in Compiling environment"
#endif

/** r-plug server address*/
#define NDR_PLUG_SERVER "172.24.10.13"
/** r-plug server port*/
#define NDR_PLUG_PORT 30412

/** server address*/
#define NDR_SERVER "172.24.10.13"

/** NDR major version*/
#define NDR_MAJOR_VERSION 1

/** NDR minor version*/
#define NDR_MINOR_VERSION 00

/** NDR version */
#define NDR_VERSION (NDR_MAJOR_VERSION * 100 + NDR_MINOR_VERSION)

/** NDR local bind port set*/
#define LOCAL_SERVER_PORT 20412

/** 语言存放文件夹*/
#define LANGUAGE_DIR_NAME "lang"

#define autoStartRegRoot HKEY_CURRENT_USER
#define autoSatrtKeyWay "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run"
#define autoStartkeyName "NDR_AutoStart"

/** 确定操作系统类型
 * 对APP_OS_STR 赋值 windows/linux/macos
 */
#if defined(Q_OS_WIN)
#define APP_OS_STR "windows"
#elif defined(Q_OS_LINUX)
#define APP_OS_STR "linux"
#elif defined(Q_OS_MAC)
#define APP_OS_STR "macos"
#else
#error OS is not supported
#endif

/** 确定处理器架构
 * x86/amd64
 */
#if defined(__i386__)
#define APP_ARCH_STR "i386"
#elif defined(__x86_64__)
#define APP_ARCH_STR "amd64"
#else
#error Arch is not supported
#endif

/** 编译时间*/
#define COMPILE_DATA_TIME (__DATE__ " " __TIME__)

/** 网卡适配器名称*/
#define NDR_PHONEBOOK_NAME "NDR"

/** NDR用户反馈服务器地址*/
#define NDR_FEEDBACK_SERVER "172.24.10.13"

/** NDR更新服务器地址 */
#define NDR_UPDATE_SERVER NDR_SERVER

/** NDR导航页 */
#define NDR_GATE "http://go.neusoft.edu.cn"

/** NDR弹浏览器网页*/
#define NDR_NSS NDR_SERVER

/** NDR通知弹窗地址*/
#define NDR_POPUP_URL                                                          \
    QString("https://%1/messages/popUp.xml").arg(QString(NDR_SERVER))

/** NDR主页*/
#define NDR_HOMESITE "https://ndr.neusoft.edu.cn"

/** 开启更新*/
#define ENABLE_UPDATE true

#ifdef Q_OS_MAC
#define QML_PLATFROM_GET(text) "mac_dialog/" #text
#else
#define QML_PLATFROM_GET(text) "win_linux_dialog/" #text
#endif
