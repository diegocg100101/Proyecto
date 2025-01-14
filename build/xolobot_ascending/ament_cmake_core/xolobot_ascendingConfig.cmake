# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_xolobot_ascending_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED xolobot_ascending_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(xolobot_ascending_FOUND FALSE)
  elseif(NOT xolobot_ascending_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(xolobot_ascending_FOUND FALSE)
  endif()
  return()
endif()
set(_xolobot_ascending_CONFIG_INCLUDED TRUE)

# output package information
if(NOT xolobot_ascending_FIND_QUIETLY)
  message(STATUS "Found xolobot_ascending: 1.0.0 (${xolobot_ascending_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'xolobot_ascending' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT xolobot_ascending_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(xolobot_ascending_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${xolobot_ascending_DIR}/${_extra}")
endforeach()
