@echo off

uic.exe ^
    .\ui\mainwindow.ui ^
    -o ^
    .\ui\ui_mainwindow.h

uic.exe ^
    .\ui\permissionwindow.ui ^
    -o ^
    .\ui\ui_permissionwindow.h

uic.exe ^
    .\ui\settingswindow.ui ^
    -o ^
    .\ui\ui_settingswindow.h

uic.exe ^
    .\ui\userwindow.ui ^
    -o ^
    .\ui\ui_userwindow.h