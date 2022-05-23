#ifndef BOX_H
#define BOX_H

#define ROW_SIZE 11
#define COLUMN_SIZE 15
#define W 3

#include "game.h"
#include <SDL.h>
//#include <SDL2/SDL.h>
int activeBox[ROW_SIZE][COLUMN_SIZE];
int resetBoxPos[ROW_SIZE][COLUMN_SIZE];

typedef struct GameSettings* Game;

typedef struct BoxInit {
	int activeBox[ROW_SIZE][COLUMN_SIZE];
	SDL_Texture* box;                   

} *Boxes;

void renderBoxes(Game game);
Boxes createBoxes(Game game);


#endif /* BOX_H */