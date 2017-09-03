cmake_minimum_required(VERSION 3.6)
project(PDSapp)

set(CMAKE_PREFIX_PATH "C:/Qt/Qt5.6.2/5.6/mingw49_32/lib/cmake" )
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

set(CMAKE_CXX_STANDARD 11)

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)

## qt5_add_resources(RES res/res.qrc)

set(SOURCE_FILES main.cpp

        Stat.cpp Stat.h SideWindow.cpp SideWindow.h MainWindow.cpp MainWindow.h EditSessionWindow.cpp EditSessionWindow.h ClickableLabel.cpp ClickableLabel.h QFrontaWidget.cpp QFrontaWidget.h FrontaStatu.cpp FrontaStatu.h)
qt5_add_resources(RES res/res.qrc)
add_executable(PDSapp ${SOURCE_FILES} ${RES})
qt5_use_modules(PDSapp Core SerialPort)
target_link_libraries(PDSapp Qt5::Widgets  Qt5::WinMain)

