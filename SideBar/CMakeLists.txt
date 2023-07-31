# 配置CMake编译的最小版本
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

# 配置CMake策略
if (POLICY CMP0026)
    cmake_policy(SET CMP0026 NEW)
endif ()

if (POLICY CMP0042)
    cmake_policy(SET CMP0042 NEW)  # CMake 3.0+ (2.8.12): MacOS "@rpath" in target's install name
endif ()

if (POLICY CMP0046)
    cmake_policy(SET CMP0046 NEW)  # warn about non-existed dependencies
endif ()

if (POLICY CMP0051)
    cmake_policy(SET CMP0051 NEW)
endif ()

if (POLICY CMP0054)  # CMake 3.1: Only interpret if() arguments as variables or keywords when unquoted.
    cmake_policy(SET CMP0054 NEW)
endif ()

if (POLICY CMP0056)
    cmake_policy(SET CMP0056 NEW)  # try_compile(): link flags
endif ()

if (POLICY CMP0066)
    cmake_policy(SET CMP0066 NEW)  # CMake 3.7: try_compile(): use per-config flags, like CMAKE_CXX_FLAGS_RELEASE
endif ()

if (POLICY CMP0067)
    cmake_policy(SET CMP0067 NEW)  # CMake 3.8: try_compile(): honor language standard variables (like C++11)
endif ()

if (POLICY CMP0068)
    cmake_policy(SET CMP0068 NEW)  # CMake 3.9+: `RPATH` settings on macOS do not affect `install_name`.
endif ()

if (POLICY CMP0074)
    cmake_policy(SET CMP0074 NEW)  # CMake 3.12+: uses <PackageName>_ROOT variables
endif ()

if (POLICY CMP0075)
    cmake_policy(SET CMP0075 NEW)  # CMake 3.12+: Include file check macros honor `CMAKE_REQUIRED_LIBRARIES`
endif ()

if (POLICY CMP0077)
    cmake_policy(SET CMP0077 NEW)  # CMake 3.13+: option() honors normal variables.
endif ()

# 定义当前项目名、版本号、编程语言
project(SideBar VERSION 0.1 LANGUAGES CXX)

# 自动添加 CMAKE_CURRENT_BINARY_DIR 和 CMAKE_CURRENT_SOURCE_DIR 到当前目录
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# 设置C++标准为C++14，并要求编译器支持此标准。
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# 只有两种生成模式，Debug 和 Release
set(CMAKE_BUILD_TYPE Debug)
# 设置QT目录
set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} ${QT_SDK_DIR})
# 设置编译文件的安装目录
set(CMAKE_INSTALL_PREFIX "output")

# 查找所有cmake文件
find_package(QT NAMES Qt6 Qt5 COMPONENTS Core Gui Widgets Network REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core Gui Widgets Network REQUIRED)

include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

file(GLOB_RECURSE INCLUDE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h")
file(GLOB_RECURSE SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cc")
file(GLOB_RECURSE UI_FILES "${CMAKE_CURRENT_SOURCE_DIR}/ui/*.ui")
file(GLOB_RECURSE QRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/resources/qrc/*.qrc")
source_group(
        TREE ${CMAKE_CURRENT_SOURCE_DIR}/include
        PREFIX INCLUDE
        FILES ${INCLUDE_FILES}
)
source_group(
        TREE ${CMAKE_CURRENT_SOURCE_DIR}/src
        PREFIX SOURCE
        FILES ${SOURCE_FILES}
)
source_group(
        TREE ${CMAKE_CURRENT_SOURCE_DIR}/ui
        PREFIX UI
        FILES ${UI_FILES}
)
source_group(
        TREE ${CMAKE_CURRENT_SOURCE_DIR}/resources/qrc
        PREFIX QRC
        FILES ${QRC_FILES}
)

# 生成二进制文件
add_executable(${PROJECT_NAME} WIN32
        ${INCLUDE_FILES}
        ${SOURCE_FILES}
        ${UI_FILES}
        ${QRC_FILES}
)
# 将二进制文件链接库
target_link_libraries(${PROJECT_NAME}
        PUBLIC
        Qt${QT_VERSION_MAJOR}::Core
        Qt${QT_VERSION_MAJOR}::Gui
        Qt${QT_VERSION_MAJOR}::Widgets
        Qt${QT_VERSION_MAJOR}::Network
)
