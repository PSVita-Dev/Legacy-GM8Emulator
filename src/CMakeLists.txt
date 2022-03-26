# it uses globs, remake on pull. it's not that hard.
file(GLOB_RECURSE Source "*.cpp" "*.cxx" "*.c")
file(GLOB_RECURSE Headers "*.hxx" "*.hpp" "*.h")

add_executable(GM8Emulator ${Source} ${Headers})
source_group("Headers" FILES ${Headers})
source_group("Source" FILES ${Source})
#include_directories("../deps/glfw/include")
include_directories("../deps/rectpack2D/src")
include_directories("../deps/zlib")
#include_directories("../deps/glad/include/")
include_directories(.)
#target_link_libraries(GM8Emulator glfw)
#target_link_libraries(GM8Emulator zlibstatic)

#find_package(OpenGL REQUIRED)
#if(OPENGL_FOUND)
 #   target_include_directories(GM8Emulator PUBLIC ${OPENGL_INCLUDE_DIR})
  #  target_link_libraries(GM8Emulator ${OPENGL_gl_LIBRARY})
#else()
 #   message(FATAL_ERROR "Could not find OpenGL!")
#endif()

target_link_libraries(${PROJECT_NAME}
  PUBLIC jpeg
  PUBLIC png
  PUBLIC stdc++
 # PUBLIC glib2d
  PUBLIC m
  PUBLIC z
  PUBLIC c
  PUBLIC pspgu
  PUBLIC GL
  PUBLIC glut
  PUBLIC GLU
  PUBLIC ${PSP_LIBRARIES})

create_pbp_file(TARGET ${PROJECT_NAME} TITLE "${CMAKE_PROJECT_NAME}"
  #ICON_PATH
  #BACKGROUND_PATH
  #PREVIEW_PATH
  )
