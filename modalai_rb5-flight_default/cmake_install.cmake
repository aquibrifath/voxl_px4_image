# Install script for directory: /usr/local/workspace/px4-firmware

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/platforms/posix/src/px4/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/drivers/gps/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/drivers/px4io/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/drivers/qshell/posix/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/drivers/modalai/imu_server/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/drivers/modalai/mavlink_bridge/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/drivers/spektrum_rc/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/modules/commander/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/modules/dataman/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/modules/modalai_gps_timer/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/modules/flight_mode_manager/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/modules/logger/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/modules/mavlink/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/modules/msp_osd/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/modules/muorb/apps/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/modules/navigator/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/modules/rc_update/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/modules/simulator/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/systemcmds/led_control/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/systemcmds/mixer/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/systemcmds/motor_ramp/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/systemcmds/motor_test/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/systemcmds/param/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/systemcmds/perf/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/systemcmds/reboot/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/systemcmds/sd_bench/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/systemcmds/shutdown/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/systemcmds/topic_listener/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/systemcmds/tune_control/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/systemcmds/ver/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/src/systemcmds/work_queue/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/boards/modalai/rb5-flight/src/cmake_install.cmake")
  include("/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/platforms/posix/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
