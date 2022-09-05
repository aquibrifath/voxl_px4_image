# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


set(CPACK_BINARY_7Z "")
set(CPACK_BINARY_BUNDLE "")
set(CPACK_BINARY_CYGWIN "")
set(CPACK_BINARY_DEB "")
set(CPACK_BINARY_DRAGNDROP "")
set(CPACK_BINARY_FREEBSD "")
set(CPACK_BINARY_IFW "")
set(CPACK_BINARY_NSIS "")
set(CPACK_BINARY_NUGET "")
set(CPACK_BINARY_OSXX11 "")
set(CPACK_BINARY_PACKAGEMAKER "")
set(CPACK_BINARY_PRODUCTBUILD "")
set(CPACK_BINARY_RPM "")
set(CPACK_BINARY_STGZ "")
set(CPACK_BINARY_TBZ2 "")
set(CPACK_BINARY_TGZ "")
set(CPACK_BINARY_TXZ "")
set(CPACK_BINARY_TZ "")
set(CPACK_BINARY_WIX "")
set(CPACK_BINARY_ZIP "")
set(CPACK_BUILD_SOURCE_DIRS "/usr/local/workspace/px4-firmware;/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default")
set(CPACK_CMAKE_GENERATOR "Ninja")
set(CPACK_COMPONENTS_ALL "")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_DEBIAN_PACKAGE_DESCRIPTION "The PX4 Pro autopilot.")
set(CPACK_DEBIAN_PACKAGE_PRIORITY "optional")
set(CPACK_DEBIAN_PACKAGE_SECTION "devel")
set(CPACK_DEBIAN_PACKAGE_SHLIBDEPS "OFF")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_FILE "/usr/share/cmake-3.16/Templates/CPack.GenericDescription.txt")
set(CPACK_GENERATOR "TBZ2;DEB")
set(CPACK_INSTALL_CMAKE_PROJECTS "/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default;px4;ALL;/")
set(CPACK_INSTALL_PREFIX "/usr/local")
set(CPACK_MODULE_PATH "/usr/local/workspace/px4-firmware/cmake;/usr/local/workspace/px4-firmware/boards/modalai/cmake_hexagon;/usr/local/workspace/px4-firmware/boards/modalai/cmake_hexagon/toolchain;/usr/local/workspace/px4-firmware/platforms/posix/cmake;/usr/local/workspace/px4-firmware/cmake/gtest/")
set(CPACK_NSIS_DISPLAY_NAME "px4-modalai_rb5-flight_default v1.4.24-modalai-rb5-flight-beta")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
set(CPACK_NSIS_PACKAGE_NAME "px4-modalai_rb5-flight_default v1.4.24-modalai-rb5-flight-beta")
set(CPACK_OUTPUT_CONFIG_FILE "/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/CPackConfig.cmake")
set(CPACK_PACKAGE_CONTACT "px4users@googlegroups.com")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION_FILE "/usr/share/cmake-3.16/Templates/CPack.GenericDescription.txt")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "px4 built using CMake")
set(CPACK_PACKAGE_FILE_NAME "px4-modalai_rb5-flight_default-v1.4.24-modalai-rb5-flight-beta")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "px4-modalai_rb5-flight_default v1.4.24-modalai-rb5-flight-beta")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "px4-modalai_rb5-flight_default v1.4.24-modalai-rb5-flight-beta")
set(CPACK_PACKAGE_NAME "px4-modalai_rb5-flight_default")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "Humanity")
set(CPACK_PACKAGE_VERSION "v1.4.24-modalai-rb5-flight-beta")
set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "1")
set(CPACK_PACKAGE_VERSION_PATCH "1")
set(CPACK_PACKAGING_INSTALL_PREFIX "")
set(CPACK_RESOURCE_FILE_LICENSE "/usr/share/cmake-3.16/Templates/CPack.GenericLicense.txt")
set(CPACK_RESOURCE_FILE_README "/usr/share/cmake-3.16/Templates/CPack.GenericDescription.txt")
set(CPACK_RESOURCE_FILE_WELCOME "/usr/share/cmake-3.16/Templates/CPack.GenericWelcome.txt")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_7Z "")
set(CPACK_SOURCE_CYGWIN "")
set(CPACK_SOURCE_GENERATOR "ZIP;TBZ2")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/CPackSourceConfig.cmake")
set(CPACK_SOURCE_PACKAGE_FILE_NAME "px4-v1.4.24-modalai-rb5-flight-beta")
set(CPACK_SOURCE_RPM "")
set(CPACK_SOURCE_TBZ2 "")
set(CPACK_SOURCE_TGZ "")
set(CPACK_SOURCE_TXZ "")
set(CPACK_SOURCE_TZ "")
set(CPACK_SOURCE_ZIP "")
set(CPACK_SYSTEM_NAME "Linux")
set(CPACK_TOPLEVEL_TAG "Linux")
set(CPACK_WIX_SIZEOF_VOID_P "")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/usr/local/workspace/px4-firmware/build/modalai_rb5-flight_default/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
