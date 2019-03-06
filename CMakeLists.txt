cmake_minimum_required(VERSION 2.8 )
project(DJI_FLIGHT)

#./ 表示当前路径
include_directories(
./debugger/include
./upgrade/api
./upgrade/log
)
add_subdirectory(debugger)
add_subdirectory(upgrade)

add_executable(dji_flight dji_flight.c)

target_link_libraries (dji_flight f_debugger upgrade)

