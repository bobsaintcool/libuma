cmake_minimum_required(VERSION 3.0)

project(libmooltipass)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
find_package(libusb REQUIRED)

include_directories(include ${LIBUSB_INCLUDE_DIR})

