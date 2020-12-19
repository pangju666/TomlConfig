file(GLOB headers *.hpp *.h)

add_library(toml INTERFACE)
target_include_directories(toml
        INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
        $<INSTALL_INTERFACE:include>
        )

install(FILES ${headers} DESTINATION include/toml)
