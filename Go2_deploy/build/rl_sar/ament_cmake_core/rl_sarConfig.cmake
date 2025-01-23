# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rl_sar_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rl_sar_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rl_sar_FOUND FALSE)
  elseif(NOT rl_sar_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rl_sar_FOUND FALSE)
  endif()
  return()
endif()
set(_rl_sar_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rl_sar_FIND_QUIETLY)
  message(STATUS "Found rl_sar: 2.0.0 (${rl_sar_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rl_sar' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${rl_sar_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rl_sar_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${rl_sar_DIR}/${_extra}")
endforeach()
