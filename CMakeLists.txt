cmake_minimum_required(VERSION 3.20)

# Build SDL, SDL_Image and Hm
add_subdirectory("${PROJECT_SOURCE_DIR}/Deps/Hm")

# Hm
link_libraries("${PROJECT_SOURCE_DIR}/Build/Deps/Hm/Hm.lib")
include_directories("${PROJECT_SOURCE_DIR}/Deps/Hm/Include/Game.hpp")

# SDL2
link_libraries("${PROJECT_SOURCE_DIR}/Build/Deps/Hm/Deps/SDL/SDL2d.lib")
link_libraries("${PROJECT_SOURCE_DIR}/Build/Deps/Hm/Deps/SDL/SDL2maind.lib")
include_directories("${PROJECT_SOURCE_DIR}/Deps/Hm/Deps/SDL/include/SDL.h")

# SDL2 Image
link_libraries("${PROJECT_SOURCE_DIR}/Build/Deps/Hm/Deps/SDL_image/SDL2_imaged.lib")
include_directories("${PROJECT_SOURCE_DIR}/Deps/Hm/Deps/SDL_image/SDL_image.h")

# Build pong 
add_subdirectory("${PROJECT_SOURCE_DIR}/Pong")