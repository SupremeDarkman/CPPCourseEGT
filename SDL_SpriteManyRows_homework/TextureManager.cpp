#include "TextureManager.h"

bool TextureManager::loadTexture(const char* fileName, std::string id, SDL_Renderer* ren)
{
	SDL_Surface* tempSurface = IMG_Load(fileName);
	if (tempSurface == 0)
		return false;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, tempSurface);
	SDL_FreeSurface(tempSurface);
	if (tex != 0)
	{
		textureMap[id] = tex;
		return true;
	}
	return false;
}
void TextureManager::drawOneFrameFromTexture(std::string id, int x, int y, int width, int heigth, int currentRow, int currentFrame, SDL_Renderer* ren, SDL_RendererFlip flip) 
{
	SDL_Rect srcRect;
	SDL_Rect destRect;
	srcRect.x = width * currentFrame;
	srcRect.y = heigth * (currentRow - 1);
	srcRect.w = destRect.w = width;
	srcRect.h = destRect.h = heigth;
	destRect.x = x;
	destRect.y = y;

	SDL_RenderCopyEx(ren, textureMap[id], &srcRect, &destRect, 0, 0, flip);
}

TextureManager* TextureManager::instance = 0;