# 2D GLUT Feature Checklist

## Basics and setup
- GLUT initialization, window creation, window size and position
- Display callback, main loop, clearing and background color
- Single and double buffering
- Orthographic 2D coordinates and reshape callback

## Drawing
- Points, multiple points, point size
- Lines, line strips, line loops, line width and stipple
- Triangles, triangle strips and triangle fans
- Rectangles, squares, quads
- Circles and filled circles
- Ellipses and filled ellipses
- Polygons and polygon fill/outline
- Connected lines and reusable shape functions
- Text with GLUT bitmap fonts

## Appearance
- RGB colors, changing colors per vertex
- Background colors
- Line width, point size
- Filled and outline shapes

## 2D transformations
- Translation
- Rotation around the origin
- Rotation around an object position using translate/rotate/translate-back
- Scaling
- Matrix push/pop and transformation order

## Interaction
- Normal keyboard input
- Special keys (arrow keys)
- Mouse click and mouse position conversion
- Redraw requests

## Animation
- Timer callback
- Moving object
- Bouncing object
- Rotating object
- Double-buffered animation

## Algorithms
- DDA line drawing
- Bresenham line drawing
- Midpoint circle drawing
- Eight-way circle symmetry

## 2D mini-projects
- Simple house and landscape
- Traffic light
- 2D car
- Keyboard-controlled object

This is a broad introductory-to-intermediate/advanced learning set, not a claim to include every extension ever made to GLUT or every possible OpenGL API.
