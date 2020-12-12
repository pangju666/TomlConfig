# Install script for directory: E:/项目/个人项目/C++/CppConfig/toml

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "E:/项目/个人项目/C++/CppConfig/out/install/x64-Debug (默认值)")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/toml" TYPE FILE FILES
    "E:/项目/个人项目/C++/CppConfig/toml/color.hpp"
    "E:/项目/个人项目/C++/CppConfig/toml/combinator.hpp"
    "E:/项目/个人项目/C++/CppConfig/toml/comments.hpp"
    "E:/项目/个人项目/C++/CppConfig/toml/datetime.hpp"
    "E:/项目/个人项目/C++/CppConfig/toml/exception.hpp"
    "E:/项目/个人项目/C++/CppConfig/toml/from.hpp"
    "E:/项目/个人项目/C++/CppConfig/toml/get.hpp"
    "E:/项目/个人项目/C++/CppConfig/toml/into.hpp"
    "E:/项目/个人项目/C++/CppConfig/toml/lexer.hpp"
    "E:/项目/个人项目/C++/CppConfig/toml/literal.hpp"
    "E:/项目/个人项目/C++/CppConfig/toml/parser.hpp"
    "E:/项目/个人项目/C++/CppConfig/toml/region.hpp"
    "E:/项目/个人项目/C++/CppConfig/toml/result.hpp"
    "E:/项目/个人项目/C++/CppConfig/toml/serializer.hpp"
    "E:/项目/个人项目/C++/CppConfig/toml/source_location.hpp"
    "E:/项目/个人项目/C++/CppConfig/toml/storage.hpp"
    "E:/项目/个人项目/C++/CppConfig/toml/string.hpp"
    "E:/项目/个人项目/C++/CppConfig/toml/traits.hpp"
    "E:/项目/个人项目/C++/CppConfig/toml/types.hpp"
    "E:/项目/个人项目/C++/CppConfig/toml/utility.hpp"
    "E:/项目/个人项目/C++/CppConfig/toml/value.hpp"
    )
endif()

