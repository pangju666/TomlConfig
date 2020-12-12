file(GLOB headers *.h)
file(GLOB sources *.cpp)

add_library(Config ${headers} ${sources})
target_link_libraries(Config
        PRIVATE toml
        )

install(TARGETS Config DESTINATION lib)
install(FILES ${headers} DESTINATION include)
