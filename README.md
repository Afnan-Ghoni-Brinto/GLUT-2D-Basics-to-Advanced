# GLUT / OpenGL 2D — Beginner to Advanced

A structured C++ learning repository for **2D computer graphics only** using classic OpenGL and GLUT/freeglut.

**No 3D content is included.** No 3D models, camera, perspective, depth-buffer scenes, lighting, or 3D transformations.

## Requirements
- C++ compiler (MinGW-w64/GCC or Visual Studio)
- OpenGL and GLU development libraries
- GLUT/freeglut development package

## Compile (MinGW-w64 example)
```bash
g++ 01_Basics/hello_window.cpp -o hello_window.exe -lfreeglut -lopengl32 -lglu32
```
Compile one `.cpp` file at a time. Each file has its own `main()`. Your IDE may need configured include and library paths.

## Learning path
1. Basics and window setup
2. 2D drawing primitives
3. Colors, fill styles, line and point styles
4. Coordinate systems and viewport
5. Text and reusable drawing functions
6. 2D transformations
7. Keyboard and mouse interaction
8. Animation and timer callbacks
9. 2D raster drawing algorithms
10. 2D scenes and mini-projects

## Important concepts
- `glutInit`: initializes GLUT.
- `glutInitDisplayMode`: chooses single/double buffering and color mode.
- `glutInitWindowSize`: sets window dimensions.
- `glutCreateWindow`: creates the window.
- `glClearColor`: sets the background color.
- `glClear`: clears the frame.
- `glutDisplayFunc`: registers the drawing callback.
- `glutKeyboardFunc`: registers normal keyboard input.
- `glutSpecialFunc`: registers special keys such as arrows.
- `glutMouseFunc`: registers mouse-button input.
- `glutTimerFunc`: schedules animation updates.
- `glutPostRedisplay`: requests a redraw.
- `glutSwapBuffers`: presents a double-buffered frame.
- `glutMainLoop`: starts GLUT's event loop.

## Coordinate systems
Many examples use `gluOrtho2D(-1, 1, -1, 1)`. The origin is at the center.
Other examples use pixel-like coordinates, such as `gluOrtho2D(0, 600, 0, 500)`.

## Feature checklist
See `FEATURE_CHECKLIST.md` for the complete topic inventory.
