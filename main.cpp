#include "mainwindow.h"
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <QCoreApplication>
#include <QDebug>
#include <QTime>
#include <QRandomGenerator>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
/*
    int seat = 0;
    auto seat00isused = false;
    auto seat01isused = false;
    auto seat02isused = false;
    auto seat03isused = false;
    auto seat04isused = false;
    auto seat05isused = false;
    auto seat06isused = false;
    auto seat07isused = false;
    auto seat08isused = false;
    auto seat09isused = false;
    auto seat10isused = false;
    auto seat11isused = false;
    auto seat12isused = false;
    auto seat13isused = false;
    auto seat14isused = false;
    auto seat15isused = false;
    auto seat16isused = false;
    auto seat17isused = false;
    auto seat18isused = false;
    auto seat19isused = false;
    auto seat20isused = false;
    auto seat21isused = false;
    auto seat22isused = false;
    auto seat23isused = false;
    auto seat24isused = false;
    auto seat25isused = false;
    auto seat26isused = false;
    auto seat27isused = false;
    auto seat28isused = false;
    auto seat29isused = false;
    auto seat30isused = false;
    auto seat31isused = false;
    auto seat32isused = false;
    auto seat33isused = false;
    auto seat34isused = false;
    auto seat35isused = false;
    auto seat36isused = false;
    auto seat37isused = false;
    auto seat38isused = false;
    auto seat39isused = false;
    auto seat40isused = false;
    auto seat41isused = false;
    auto seat42isused = false;

    regen:

    seat= QRandomGenerator::global()->bounded(42);

    switch(seat){
    case '00' :
        seat00isused = true ;

    default: goto regen;
    }

    //goto regen;

*/

    MainWindow w;

    w.show();
    return a.exec();
}
