/* Zajednicke promenljive */
#ifndef __COMMON_H__
#define __COMMON_H__

#include "textures.h"
#include "bitmaps.h"
#include <time.h>

const static float pi = 3.141592653589793;

#define TIMER_PLAYER_ID 0
#define TIMER_PLAYER_INTERVAL 3

#define TIMER_COMET_ID 1
#define TIMER_COMET_INTERVAL 2

#define COMET_NUMBER 10

int brojac;
int animation_ongoing_r,animation_ongoing_l, game_over, game_start;
float player_x, player_y, x_goal;
float rotation_angle, animation_parametar, speed_parametar;
int player_score; 
char ispis[64];

typedef struct comet_struct{
    int x1;
    int x2;
    float z_pos;
    int first;
    int second;
} comet_line;

comet_line comet_array[COMET_NUMBER];

#endif 
