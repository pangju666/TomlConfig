file(GLOB headers *.h)
file(GLOB sources *.cpp)

add_library(AppConfig ${headers} ${sources})
target_link_libraries(AppConfig
        PRIVATE toml
        )

install(TARGETS AppConfig DESTINATION lib)
install(FILES ${headers} DESTINATION include)
