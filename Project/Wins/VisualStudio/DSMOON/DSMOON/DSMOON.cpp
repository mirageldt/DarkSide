// DSMOON.cpp : Defines the entry point for the console application.
//

#include <SDL2\SDL.h>
#undef main
//#include

bool init(){ return true;


} 


int main()
{
	SDL_Window * mWindow;
SDL_Renderer *mRender = 0;

	SDL_Init(SDL_INIT_VIDEO);
	mWindow =SDL_CreateWindow("Darkside",SDL_WINDOWPOS_CENTERED, 
		SDL_WINDOWPOS_CENTERED,800,600,SDL_WINDOW_BORDERLESS); 
	if (mWindow !=0){
		
		mRender =SDL_CreateRenderer(mWindow,-1,SDL_RENDERER_ACCELERATED);
		
		if (!mRender){SDL_Quit();}
	
	}
	SDL_RenderPresent(mRender);
	SDL_Delay(10000);
	SDL_Quit();
	return 0;
}

