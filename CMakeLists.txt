cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 23)

# Build SDL, SDL_Image and Hm
#add_subdirectory("${PROJECT_SOURCE_DIR}/Deps/Hm")

# Link libraries
# Hm
link_libraries("${PROJECT_SOURCE_DIR}/Deps/Hm/Hm.lib")
include_directories("${PROJECT_SOURCE_DIR}/Deps/Hm/include/Game.hpp")

# SDL2
link_libraries("${PROJECT_SOURCE_DIR}/Deps/SDL/SDL2.lib")
link_libraries("${PROJECT_SOURCE_DIR}/Deps/SDL/SDL2main.lib")
include_directories("${PROJECT_SOURCE_DIR}/Deps/SDL/include/SDL.h")

# SDL2 Image
link_libraries("${PROJECT_SOURCE_DIR}/Deps/SDL_image/SDL2_image.lib")
include_directories("${PROJECT_SOURCE_DIR}/Deps/SDL_image/include/SDL_image.h")

# Build pong 
add_subdirectory("${PROJECT_SOURCE_DIR}/Pong")