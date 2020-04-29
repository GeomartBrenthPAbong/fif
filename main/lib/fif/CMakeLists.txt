cmake_minimum_required(VERSION 3.0)

set(VERSION 1.0)
set(PROJECT fif)
set(SRC_DIR ${CMAKE_CURRENT_LIST_DIR}/src)
set(INC_DIR ${CMAKE_CURRENT_LIST_DIR}/include)
set(LIB_DIR ${CMAKE_CURRENT_LIST_DIR}/lib)

project(${PROJECT})

add_library(${PROJECT} STATIC "")

set_target_properties(${PROJECT} PROPERTIES SOURCE_DIR ${SRC_DIR} VERSION ${VERSION})

# NOTE: This helper function assumes no generator expressions are used
#       for the source files
function(target_sources_local target)
  if(POLICY CMP0076)
    # New behavior is available, so just forward to it by ensuring
    # that we have the policy set to request the new behavior, but
    # don't change the policy setting for the calling scope
    cmake_policy(PUSH)
    cmake_policy(SET CMP0076 NEW)
    target_sources(${target} ${ARGN})
    cmake_policy(POP)
    return()
  endif()

  # Must be using CMake 3.12 or earlier, so simulate the new behavior
  unset(_srcList)
  get_target_property(_targetSourceDir ${target} SOURCE_DIR)

  foreach(src ${ARGN})
    if(NOT src STREQUAL "PRIVATE" AND
       NOT src STREQUAL "PUBLIC" AND
       NOT src STREQUAL "INTERFACE" AND
       NOT IS_ABSOLUTE "${src}")
      # Relative path to source, prepend relative to where target was defined
      file(RELATIVE_PATH src "${_targetSourceDir}" "${CMAKE_CURRENT_LIST_DIR}/${src}")
    endif()
    list(APPEND _srcList ${src})
  endforeach()
  target_sources(${target} ${_srcList})
endfunction()

target_sources_local(${PROJECT}
    PRIVATE
        ${SRC_DIR}/fif.cpp
    PUBLIC
        ${INC_DIR}/fif.h
)

target_link_libraries(${PROJECT} png)
target_include_directories(${PROJECT} PUBLIC ${INC_DIR})

install(TARGETS ${PROJECT}
   ARCHIVE DESTINATION ${CMAKE_CURRENT_LIST_DIR}
   PUBLIC_HEADER DESTINATION ${INC_DIR})