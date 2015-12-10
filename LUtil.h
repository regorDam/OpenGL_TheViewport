#ifndef LUTIL_H
#define LUTIL_H

#include "LOpenGL.h"
#include <stdio.h>

//Viewport mode
enum ViewPortMode
{
	VIEWPORT_MODE_FULL,
	VIEWPORT_MODE_HALF_CENTER,
	VIEWPORT_MODE_HALF_TOP,
	VIEWPORT_MODE_QUAD,
	VIEWPORT_MODE_RADAR
};

//Screen Constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int SCREEN_FPS = 60;


bool initGL();
/*
Pre Condition:
-A valid OpenGL context
Post Condition:
-Initializes matrices and clear color
-Reports to console if there was an OpenGL error
-Returns false if there was an error in initialization
Side Effects:
-Projection matrix is set to identity matrix
-Modelview matrix is set to identity matrix
-Matrix mode is set to modelview
-Clear color is set to black
*/

void update();
/*
Pre Condition:
-None
Post Condition:
-Does per frame logic
Side Effects:
-None
*/

void render();
/*
Pre Condition:
-A valid OpenGL context
-Active modelview matrix
Post Condition:
-Renders the scene
Side Effects:
-Clears the color buffer
-Swaps the front/back buffer
*/


void handleKeys(unsigned char key, int x, int y);
/*
Pre Condition:
-None
Post Condition:
-Toggles the color mode when the user presses q
-Cycles through different projection scales when the user presses e
Side Effects:
-If the user presses e, the matrix mode is set to projection
*/

#endif // !LUTIL_H
