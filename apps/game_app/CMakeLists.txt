# Specify the executable
add_executable(game_app src/main.cpp)

# Link SFML libraries
target_link_libraries(game_app PRIVATE sfml-graphics sfml-window sfml-system mapgen_lib)
