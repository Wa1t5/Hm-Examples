cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 23)

# Build SDL, SDL_Image and Hm
add_subdirectory("${PROJECT_SOURCE_DIR}/Deps/Hm")

# Link libraries (RELEASE)
if (CMAKE_BUILD_TYPE EQUAL MinSizeRel OR CMAKE_BUILD_TYPE EQUAL Release)
# Hm
link_libraries("${PROJECT_SOURCE_DIR}/Build/Deps/Hm/Hm.lib")
include_directories("${PROJECT_SOURCE_DIR}/Deps/Hm/Include/Game.hpp")

# SDL2
link_libraries("${PROJECT_SOURCE_DIR}/Build/Deps/Hm/Deps/SDL/SDL2.lib")
link_libraries("${PROJECT_SOURCE_DIR}/Build/Deps/Hm/Deps/SDL/SDL2main.lib")
include_directories("${PROJECT_SOURCE_DIR}/Deps/Hm/Deps/SDL/include/SDL.h")

# SDL2 Image
link_libraries("${PROJECT_SOURCE_DIR}/Build/Deps/Hm/Deps/SDL_image/SDL2_image.lib")
include_directories("${PROJECT_SOURCE_DIR}/Deps/Hm/Deps/SDL_image/SDL_image.h")
endif()

# Link libraries (DEBUG)
if (CMAKE_BUILD_TYPE EQUAL MinSizeRel OR CMAKE_BUILD_TYPE EQUAL Release)
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
endif()

# Build pong 
add_subdirectory("${PROJECT_SOURCE_DIR}/Pong")