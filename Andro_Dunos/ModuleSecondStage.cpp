#include "Globals.h"
#include "Application.h"
#include "ModuleTextures.h"
#include "ModuleRender.h"
#include "ModuleSecondStage.h"

ModuleSecondStage::ModuleSecondStage()	//@AndresSala
{
	//ANDRO DUNOS RECTS
	// Background1Rect  
	background2Rect.x = 0;
	background2Rect.y = 0;
	background2Rect.w = 410; 
	background2Rect.h = 224;

	//map1Rect	
	map2Rect.x = 0;
	map2Rect.y = 60; // 60
	map2Rect.w = 9305;
	map2Rect.h = 505;

	// bluePlanetRect
	/*bluePlanetRect.x = 0;
	bluePlanetRect.y = 0;
	bluePlanetRect.w = 165;
	bluePlanetRect.h = 152;*/
}

ModuleSecondStage::~ModuleSecondStage()
{}

// Load assets
bool ModuleSecondStage::Start()
{
	LOG("Loading background assets");	// Temporal, must decide if we load a full image,
	bool ret = true;					// a single enormous tileset, maybe a tile array for the background
	map2Text = App->textures->Load("Sprites/Levels/STAGE 2/Tileset/Background_lvl_2.png");
	background2Text = App->textures->Load("Sprites/Levels/STAGE 1/Tileset/Background/1_Background1.png");
	/*bluePlanetText = App->textures->Load("Sprites/Levels/STAGE 1/Tileset/Background/Moon.png");*/
	return ret;
}

// Update: draw background
update_status ModuleSecondStage::Update()
{


	// Draw everything -------------------------------------- Andro Dunos
	App->render->Blit(background2Text, movementxBack, 27, &background2Rect); // level background

	//App->render->Blit(map2Text, movementx, 0, &map2Rect); // level map

	//App->render->Blit(bluePlanetText, 500 + movementxPlanetsBack, -10, &bluePlanetRect); // Moon

	//movementx -= 0.83f; // for movement in x direction
	//LOG("%0.3f", movementx);
	//movementxBack -= 0.38f;
	//movementxPlanetsBack -= 0.2f;

	//if (movementx >-2925.0) //2925
	//movementx -= 0.83f; // for movement in x direction
	////if (movementx == -2925.0 && movementy > -280.0) 
	////{
	////movementy -= 0.83f; 
	////}
	////if (movementx == -2925 && movementy == -280)
	////{
	////	movementx -= 0.83f;
	////}
	////if (movementx < -2925 && movementy >= -280)
	//{
	//	movementx -= 0.83f;
	//}//@andressala


	return UPDATE_CONTINUE;
}