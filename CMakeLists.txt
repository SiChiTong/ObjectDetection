cmake_minimum_required(VERSION 2.8)
project( APCObjectDetection )
SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
include_directories(APCObjectDetection include)
file( GLOB SRC_LIST "src/*.cpp" "include/*.h")
find_package( OpenCV REQUIRED )
add_executable( APCObjectDetection ${SRC_LIST} )
target_link_libraries( APCObjectDetection ${OpenCV_LIBS} )
