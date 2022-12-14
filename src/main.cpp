#define GL_GLEXT_PROTOTYPES 1
#define GL3_PROTOTYPES 1

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <hypergon.hpp>

// macosx
#ifdef __APPLE__
#include <OpenGL/gl.h>
#else
// windows-specific
#ifdef _WIN32
#include <windows.h>
#endif
// both linux and windows
#include <GL/gl.h>
#include <GL/glu.h>
#include <GLFW/glfw3.h>
#endif

int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv)
{
  // Initialize the library
  core::init();

  // Start the engine
  core::start();

  return EXIT_SUCCESS;
}