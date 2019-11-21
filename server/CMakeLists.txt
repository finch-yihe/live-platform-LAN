cmake_minimum_required(VERSION 3.15)
set(PROJECT_NAME "test")
project(${PROJECT_NAME})
set(CMAKE_CXX_STANDARD 14)

include_directories(include)
link_libraries(-lcrypto)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_PREFIX_PATH "/opt/Qt/5.13.2/gcc_64/lib/cmake")

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Quick REQUIRED)
find_package(Qt5Network REQUIRED)
find_package(Qt5Sql REQUIRED)

add_executable(${PROJECT_NAME}
               main.cpp
               include/datahandler.h
               src/datahandler.cpp
               include/database.h
               src/database.cpp
               include/messagepdu.h
               include/csocket.h
               src/csocket.cpp
               include/mytcpsocket.h
               src/mytcpsocket.cpp
               include/server.h
               src/server.cpp
               include/mytcpserver.h
               src/mytcpserver.cpp)

target_link_libraries(${PROJECT_NAME} Qt5::Core)
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
target_link_libraries(${PROJECT_NAME} Qt5::Quick)
target_link_libraries(${PROJECT_NAME} Qt5::Network)
target_link_libraries(${PROJECT_NAME} Qt5::Sql)
