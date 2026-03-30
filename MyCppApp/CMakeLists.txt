cmake_minimum_required(VERSION 3.16)
project(MyCppApp VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. Load Qt
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)
qt_policy(SET QTP0002 NEW)

# 2. Create the target FIRST
qt_add_executable(MyCppApp main.cpp)

# 3. Now you can set properties on it
set_target_properties(MyCppApp PROPERTIES
    QT_ANDROID_PACKAGE_NAME "com.yotam.mycppapp"
    QT_ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android"
    OUTPUT_NAME "MyCppApp_arm64-v8a"
)

target_link_libraries(MyCppApp PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets)

