#ifndef __ModuleStage2_H__
#define __ModuleStage2_H__	//@AndrésSaladrigas

#include "Module.h"
#include "Animation.h"
#include "Globals.h"

#include "SDL_mixer/include/SDL_mixer.h"
#pragma comment(lib,"SDL_mixer/libx86/SDL2_mixer.lib")

struct SDL_Texture;

class ModuleStage2 : public Module
{
public:
	ModuleStage2();
	~ModuleStage2();

	bool Start();
	update_status Update();
	bool CleanUp();

public:
	//Textures
	SDL_Texture* background2Text = nullptr;
	SDL_Texture* map2Text = nullptr;
	//SDL_Texture* bluePlanetText = nullptr;

	//Rectangles
	SDL_Rect background2Rect;
	SDL_Rect map2Rect;
	//SDL_Rect bluePlanetRect;

	// Background movement (position) values
	float movementx = 0 ;
	float movementxBack = 0;
	float movementxPlanetsBack = 0;
	float movementy = -55;

	//Music
	Mix_Music * MusicLvl2 = nullptr;
};

#endif