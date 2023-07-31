@echo off

uic.exe ^
    .\ui\mainwindow.ui ^
    -o ^
    .\ui\ui_mainwindow.h

uic.exe ^
    .\ui\aboutwindow.ui ^
    -o ^
    .\ui\ui_aboutwindow.h

uic.exe ^
    .\ui\homewindow.ui ^
    -o ^
    .\ui\ui_homewindow.h

uic.exe ^
    .\ui\monitorwindow.ui ^
    -o ^
    .\ui\ui_monitorwindow.h

uic.exe ^
    .\ui\settingwindow.ui ^
    -o ^
    .\ui\ui_settingwindow.h