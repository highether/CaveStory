#pragma once

#ifdef GRAPHICS_H
#define GRAPHICS_H

struct SDL_Window;
struct SDL_Renderer;

class Graphics {
public:
	Graphics();
	~Graphics();
private:
	SDL_WIndow* _window;
	SDL_Renderer* _renderer;

};

#endif