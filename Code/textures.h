#ifndef __TEXTURES_H__
#define __TEXTURES_H__

#include "image.h"
#include <GL/glut.h>

#define STARS_FILENAME "Teksture/stars.bmp"
#define COMET_FILENAME "Teksture/comet.bmp"
#define GAMEOVER_FILENAME "Teksture/game_over.bmp"
#define START_FILENAME "Teksture/start.bmp"
#define COMET2_FILENAME "Teksture/comet2.bmp"

#define STARS_TEXTURE 0
#define COMET_TEXTURE 1
#define GAMEOVER_TEXTURE 2
#define START_TEXTURE 3
#define COMET2_TEXTURE 4

GLuint names[5];

void initialize_textures();

#endif
