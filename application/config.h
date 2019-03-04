#ifndef CONFIG_H
#define CONFIG_H
#include <QDebug>
#include <QDir>
#define BASHRC QDir::homePath() + "/.bashrc"
#define APP_NAME QString("MX Bashrc Config")
#define DEBUG_ACTIVE true
#define DEBUG if(DEBUG_ACTIVE) //put code in {} and change to false if you want debug off
#define DEBUG_MSG if(DEBUG_ACTIVE) qDebug()
#define VERSION "0.2"
#define THEME_DIR QDir::homePath() + "/.config/mx-bashrc-config/themes/"
#endif // CONFIG_H
