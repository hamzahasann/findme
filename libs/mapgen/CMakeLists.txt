file(GLOB_RECURSE HEADERS "include/*.h")
file(GLOB_RECURSE SOURCES "src/*.cpp")

add_library(mapgen_lib ${HEADERS} ${SOURCES})

target_include_directories(mapgen_lib PUBLIC include)