cmake_minimum_required(VERSION 3.7)
project(VisualDemo)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_INCLUDE_CURRENT_DIR  ON)
#打开Qt的MOC功能和UI文件处理功能
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)


## Find the QtWidgets library
##find_package( Qt5Core REQUIRED )
#find_package( Qt5Widgets )
##find_package( Qt5Gui REQUIRED )
#
#FILE(GLOB MOCS "include/widget.h")
#QT5_WRAP_CPP(HEADERS_MOC ${MOCS})
#
##FILE(GLOB RES "qrc/*.qrc")
##QT5_ADD_RESOURCES(RES_RCC ${RES})
#
#FILE(GLOB FORMS "ui/*.ui")
#QT5_WRAP_UI(FORMS_UIC ${FORMS})
#
#
include_directories(
        include
)
##add_executable(Demo1 Demo1.cpp ${FORMS_UIC} ${HEADERS_MOC} )
#target_link_libraries(Demo1 Qt5::Widgets)



############################
set(CMAKE_INCLUDE_CURRENT_DIR  ON)
#打开Qt的MOC功能和UI文件处理功能
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
#查找Qt的库
find_package(Qt5Widgets)

add_executable(Demo1 Demo1.cpp include/Widget.cpp include/Widget.h )
target_link_libraries(Demo1 Qt5::Widgets)