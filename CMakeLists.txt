cmake_minimum_required(VERSION 3.0)

project(libmooltipass)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
find_package(libusb REQUIRED)

add_custom_target(generate_commands
${CMAKE_CURRENT_SOURCE_DIR}/src/tools/generator/commands_generator.sh
COMMENT
    "Regenerate command list"
SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/tools/generator/commands_generator.sh
	${CMAKE_CURRENT_SOURCE_DIR}/src/tools/generator/requirements.txt
	${CMAKE_CURRENT_SOURCE_DIR}/src/tools/generator/command_definition.h
	${CMAKE_CURRENT_SOURCE_DIR}/src/tools/generator/command_info.c
	${CMAKE_CURRENT_SOURCE_DIR}/include/libuma/command/raw.inc

)

include(style)
include(cppcheck)

include_directories(include ${LIBUSB_INCLUDE_DIR})

add_library(uma SHARED
	include/libuma/retcode.h
	include/libuma/usb/device_info.h
	include/libuma/usb/message.h

	src/usb/message.c

	# Actions
	include/libuma/action/device.h
	include/libuma/action/credential.h

	# Commands
	include/libuma/command/type.h
	include/libuma/command/original.h
	include/libuma/command/utils.h

	src/command/utils.c
	src/command/original.c

	# base system
	src/retcode.c

	include/libuma/init.h
	src/init.c

	# Device
	include/libuma/device/internal.h
	include/libuma/device/handler.h
	src/device/handler.c
	include/libuma/device/transfer.h
	src/device/transfer.c

	# USB
	include/libuma/usb/sync.h
	src/usb/sync.c
)

target_link_libraries(uma ${LIBUSB_LIBRARIES})
validate_style(uma)
validate_cppcheck(uma)


add_executable(mooltipass_list
	tools/list/main.c
)

target_link_libraries(mooltipass_list uma)
validate_style(mooltipass_list)
validate_cppcheck(mooltipass_list)

add_executable(mooltipass_cmd
	tools/cmd/main.c
)

target_link_libraries(mooltipass_cmd uma)
validate_style(mooltipass_cmd)
validate_cppcheck(mooltipass_cmd)
