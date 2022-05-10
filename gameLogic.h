#ifndef GAME_LOGIC_H
#define GAME_LOGIC_H

#include "game.h"
#include "player.h"
#include "box.h"
#include "bomb.h"
#include <stdbool.h>
#include <SDL.h>
#include <math.h>
//#include <SDL2/SDL.h>

typedef struct PlayerSettings* Player;
typedef struct GameSettings* Game;
typedef struct BombSettings* Bomb;
typedef struct BoxInit* Boxes;
typedef struct NetworkData* Network;
typedef struct udpData* udpData;
typedef struct PowerUPS* PowerUPS;

bool collisionMap(Player p1);
void move(Player p1, int* lastMove, int* newMove, char key, Bomb bombs[], int *frames, Network net, udpData packetData, PowerUPS power);
bool collisionBoxes(Player p1);
bool checkCollision(Player p1, Bomb bombs[]);
bool collisionBomb(Player p1, Bomb bombs[]);
void handlePlayerExplosionCollision(Game game, Network net, udpData packetData);
//void pickUpPowerUps(Player player, Network net, udpData packetData, PowerUPS power);
void PlayerPickUpPower(Player player, PowerUPS power, udpData packetData);
void whatBoxes(PowerUPS power, udpData packetData,Network net);
void powerUpRemoved(int powerRow, int powerCol, PowerUPS power);

//void powerUpRemoved(int row, int col); 
// void removeBox(Player p1, Boxes boxes);

#endif /* GAME_LOGIC_H */