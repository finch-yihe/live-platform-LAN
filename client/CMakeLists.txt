cmake_minimum_required(VERSION 3.15)
set(PROJECT_NAME "test")
project(${PROJECT_NAME})
set(CMAKE_CXX_STANDARD 14)

include_directories(include)
link_libraries( -lopencv_imgcodecs -lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_videoio)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_PREFIX_PATH "/opt/Qt/5.13.2/gcc_64/lib/cmake")

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Quick REQUIRED)
find_package(Qt5Network REQUIRED)
find_package(OpenCV REQUIRED)

add_executable(${PROJECT_NAME}
               main.cpp
               resource/resource.qrc
               include/mainwindow.h
               src/mainwindow.ui
               src/mainwindow.cpp
               include/sign_in.h
               src/sign_in.cpp
               src/sign_in.ui
               include/register.h
               src/register.cpp
               src/register.ui
               include/changepasswd.h
               src/changepasswd.cpp
               src/changepasswd.ui
               include/messagepdu.h
               include/markdown_highlighter.h
               src/markdown_highlighter.cpp
               include/mylabel.h
               src/mylabel.cpp)

target_link_libraries(${PROJECT_NAME} Qt5::Core)
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
target_link_libraries(${PROJECT_NAME} Qt5::Quick)
target_link_libraries(${PROJECT_NAME} Qt5::Network)
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})
