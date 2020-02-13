#include "Dude.h"
#include "Graphics.h"
#include "Colors.h"
#include "Game.h"

void Dude::ClampToScreen()
{
	const float right = x + width;
	if( x < 0 )
	{
		x = 0;
	}
	else if( right >= (float)Graphics::ScreenWidth )
	{
		x = (Graphics::ScreenWidth - 1) - width;
	}

	const float bottom = y + height;
	if( y < 0 )
	{
		y = 0;
	}
	else if( bottom >= (float)Graphics::ScreenHeight )
	{
		y = (Graphics::ScreenHeight - 1) - height;
	}
}

void Dude::Draw( Graphics& gfx ) const
{
	const int int_x = (int)x;
	const int int_y = (int)y;
	gfx.PutPixel( 7 + int_x,0 + int_y,0,0,0 );
	gfx.PutPixel( 8 + int_x,0 + int_y,0,0,0 );
	gfx.PutPixel( 9 + int_x,0 + int_y,0,0,0 );
	gfx.PutPixel( 10 + int_x,0 + int_y,0,0,0 );
	gfx.PutPixel( 11 + int_x,0 + int_y,0,0,0 );
	gfx.PutPixel( 12 + int_x,0 + int_y,0,0,0 );
	gfx.PutPixel( 5 + int_x,1 + int_y,0,0,0 );
	gfx.PutPixel( 6 + int_x,1 + int_y,0,0,0 );
	gfx.PutPixel( 7 + int_x,1 + int_y,254,221,88 );
	gfx.PutPixel( 8 + int_x,1 + int_y,254,221,88 );
	gfx.PutPixel( 9 + int_x,1 + int_y,254,221,88 );
	gfx.PutPixel( 10 + int_x,1 + int_y,254,221,88 );
	gfx.PutPixel( 11 + int_x,1 + int_y,254,221,88 );
	gfx.PutPixel( 12 + int_x,1 + int_y,254,221,88 );
	gfx.PutPixel( 13 + int_x,1 + int_y,0,0,0 );
	gfx.PutPixel( 14 + int_x,1 + int_y,0,0,0 );
	gfx.PutPixel( 3 + int_x,2 + int_y,0,0,0 );
	gfx.PutPixel( 4 + int_x,2 + int_y,0,0,0 );
	gfx.PutPixel( 5 + int_x,2 + int_y,254,221,88 );
	gfx.PutPixel( 6 + int_x,2 + int_y,254,221,88 );
	gfx.PutPixel( 7 + int_x,2 + int_y,254,221,88 );
	gfx.PutPixel( 8 + int_x,2 + int_y,254,221,88 );
	gfx.PutPixel( 9 + int_x,2 + int_y,254,221,88 );
	gfx.PutPixel( 10 + int_x,2 + int_y,254,221,88 );
	gfx.PutPixel( 11 + int_x,2 + int_y,254,221,88 );
	gfx.PutPixel( 12 + int_x,2 + int_y,254,221,88 );
	gfx.PutPixel( 13 + int_x,2 + int_y,254,221,88 );
	gfx.PutPixel( 14 + int_x,2 + int_y,254,221,88 );
	gfx.PutPixel( 15 + int_x,2 + int_y,0,0,0 );
	gfx.PutPixel( 16 + int_x,2 + int_y,0,0,0 );
	gfx.PutPixel( 2 + int_x,3 + int_y,0,0,0 );
	gfx.PutPixel( 3 + int_x,3 + int_y,254,221,88 );
	gfx.PutPixel( 4 + int_x,3 + int_y,254,221,88 );
	gfx.PutPixel( 5 + int_x,3 + int_y,254,221,88 );
	gfx.PutPixel( 6 + int_x,3 + int_y,254,221,88 );
	gfx.PutPixel( 7 + int_x,3 + int_y,254,221,88 );
	gfx.PutPixel( 8 + int_x,3 + int_y,254,221,88 );
	gfx.PutPixel( 9 + int_x,3 + int_y,254,221,88 );
	gfx.PutPixel( 10 + int_x,3 + int_y,254,221,88 );
	gfx.PutPixel( 11 + int_x,3 + int_y,254,221,88 );
	gfx.PutPixel( 12 + int_x,3 + int_y,254,221,88 );
	gfx.PutPixel( 13 + int_x,3 + int_y,254,221,88 );
	gfx.PutPixel( 14 + int_x,3 + int_y,254,221,88 );
	gfx.PutPixel( 15 + int_x,3 + int_y,254,221,88 );
	gfx.PutPixel( 16 + int_x,3 + int_y,254,221,88 );
	gfx.PutPixel( 17 + int_x,3 + int_y,0,0,0 );
	gfx.PutPixel( 2 + int_x,4 + int_y,0,0,0 );
	gfx.PutPixel( 3 + int_x,4 + int_y,254,221,88 );
	gfx.PutPixel( 4 + int_x,4 + int_y,254,221,88 );
	gfx.PutPixel( 5 + int_x,4 + int_y,254,221,88 );
	gfx.PutPixel( 6 + int_x,4 + int_y,254,221,88 );
	gfx.PutPixel( 7 + int_x,4 + int_y,254,221,88 );
	gfx.PutPixel( 8 + int_x,4 + int_y,254,221,88 );
	gfx.PutPixel( 9 + int_x,4 + int_y,254,221,88 );
	gfx.PutPixel( 10 + int_x,4 + int_y,254,221,88 );
	gfx.PutPixel( 11 + int_x,4 + int_y,254,221,88 );
	gfx.PutPixel( 12 + int_x,4 + int_y,254,221,88 );
	gfx.PutPixel( 13 + int_x,4 + int_y,254,221,88 );
	gfx.PutPixel( 14 + int_x,4 + int_y,254,221,88 );
	gfx.PutPixel( 15 + int_x,4 + int_y,254,221,88 );
	gfx.PutPixel( 16 + int_x,4 + int_y,254,221,88 );
	gfx.PutPixel( 17 + int_x,4 + int_y,0,0,0 );
	gfx.PutPixel( 1 + int_x,5 + int_y,0,0,0 );
	gfx.PutPixel( 2 + int_x,5 + int_y,254,221,88 );
	gfx.PutPixel( 3 + int_x,5 + int_y,0,0,0 );
	gfx.PutPixel( 4 + int_x,5 + int_y,0,0,0 );
	gfx.PutPixel( 5 + int_x,5 + int_y,254,221,88 );
	gfx.PutPixel( 6 + int_x,5 + int_y,254,221,88 );
	gfx.PutPixel( 7 + int_x,5 + int_y,254,221,88 );
	gfx.PutPixel( 8 + int_x,5 + int_y,254,221,88 );
	gfx.PutPixel( 9 + int_x,5 + int_y,254,221,88 );
	gfx.PutPixel( 10 + int_x,5 + int_y,254,221,88 );
	gfx.PutPixel( 11 + int_x,5 + int_y,0,0,0 );
	gfx.PutPixel( 12 + int_x,5 + int_y,0,0,0 );
	gfx.PutPixel( 13 + int_x,5 + int_y,0,0,0 );
	gfx.PutPixel( 14 + int_x,5 + int_y,0,0,0 );
	gfx.PutPixel( 15 + int_x,5 + int_y,254,221,88 );
	gfx.PutPixel( 16 + int_x,5 + int_y,254,221,88 );
	gfx.PutPixel( 17 + int_x,5 + int_y,254,221,88 );
	gfx.PutPixel( 18 + int_x,5 + int_y,0,0,0 );
	gfx.PutPixel( 1 + int_x,6 + int_y,0,0,0 );
	gfx.PutPixel( 2 + int_x,6 + int_y,0,0,0 );
	gfx.PutPixel( 3 + int_x,6 + int_y,255,255,255 );
	gfx.PutPixel( 4 + int_x,6 + int_y,0,0,0 );
	gfx.PutPixel( 5 + int_x,6 + int_y,0,0,0 );
	gfx.PutPixel( 6 + int_x,6 + int_y,254,221,88 );
	gfx.PutPixel( 7 + int_x,6 + int_y,254,221,88 );
	gfx.PutPixel( 8 + int_x,6 + int_y,254,221,88 );
	gfx.PutPixel( 9 + int_x,6 + int_y,254,221,88 );
	gfx.PutPixel( 10 + int_x,6 + int_y,0,0,0 );
	gfx.PutPixel( 11 + int_x,6 + int_y,255,255,255 );
	gfx.PutPixel( 12 + int_x,6 + int_y,255,255,255 );
	gfx.PutPixel( 13 + int_x,6 + int_y,0,0,0 );
	gfx.PutPixel( 14 + int_x,6 + int_y,0,0,0 );
	gfx.PutPixel( 15 + int_x,6 + int_y,0,0,0 );
	gfx.PutPixel( 16 + int_x,6 + int_y,254,221,88 );
	gfx.PutPixel( 17 + int_x,6 + int_y,254,221,88 );
	gfx.PutPixel( 18 + int_x,6 + int_y,0,0,0 );
	gfx.PutPixel( 0 + int_x,7 + int_y,0,0,0 );
	gfx.PutPixel( 1 + int_x,7 + int_y,0,0,0 );
	gfx.PutPixel( 2 + int_x,7 + int_y,255,255,255 );
	gfx.PutPixel( 3 + int_x,7 + int_y,255,255,255 );
	gfx.PutPixel( 4 + int_x,7 + int_y,0,0,0 );
	gfx.PutPixel( 5 + int_x,7 + int_y,0,0,0 );
	gfx.PutPixel( 6 + int_x,7 + int_y,254,221,88 );
	gfx.PutPixel( 7 + int_x,7 + int_y,254,221,88 );
	gfx.PutPixel( 8 + int_x,7 + int_y,254,221,88 );
	gfx.PutPixel( 9 + int_x,7 + int_y,254,221,88 );
	gfx.PutPixel( 10 + int_x,7 + int_y,0,0,0 );
	gfx.PutPixel( 11 + int_x,7 + int_y,255,255,255 );
	gfx.PutPixel( 12 + int_x,7 + int_y,255,255,255 );
	gfx.PutPixel( 13 + int_x,7 + int_y,0,0,0 );
	gfx.PutPixel( 14 + int_x,7 + int_y,0,0,0 );
	gfx.PutPixel( 15 + int_x,7 + int_y,0,0,0 );
	gfx.PutPixel( 16 + int_x,7 + int_y,254,221,88 );
	gfx.PutPixel( 17 + int_x,7 + int_y,254,221,88 );
	gfx.PutPixel( 18 + int_x,7 + int_y,254,221,88 );
	gfx.PutPixel( 19 + int_x,7 + int_y,0,0,0 );
	gfx.PutPixel( 0 + int_x,8 + int_y,0,0,0 );
	gfx.PutPixel( 1 + int_x,8 + int_y,0,0,0 );
	gfx.PutPixel( 2 + int_x,8 + int_y,255,255,255 );
	gfx.PutPixel( 3 + int_x,8 + int_y,255,255,255 );
	gfx.PutPixel( 4 + int_x,8 + int_y,255,255,255 );
	gfx.PutPixel( 5 + int_x,8 + int_y,0,0,0 );
	gfx.PutPixel( 6 + int_x,8 + int_y,254,221,88 );
	gfx.PutPixel( 7 + int_x,8 + int_y,254,221,88 );
	gfx.PutPixel( 8 + int_x,8 + int_y,254,221,88 );
	gfx.PutPixel( 9 + int_x,8 + int_y,254,221,88 );
	gfx.PutPixel( 10 + int_x,8 + int_y,0,0,0 );
	gfx.PutPixel( 11 + int_x,8 + int_y,255,255,255 );
	gfx.PutPixel( 12 + int_x,8 + int_y,255,255,255 );
	gfx.PutPixel( 13 + int_x,8 + int_y,255,255,255 );
	gfx.PutPixel( 14 + int_x,8 + int_y,255,255,255 );
	gfx.PutPixel( 15 + int_x,8 + int_y,0,0,0 );
	gfx.PutPixel( 16 + int_x,8 + int_y,254,221,88 );
	gfx.PutPixel( 17 + int_x,8 + int_y,254,221,88 );
	gfx.PutPixel( 18 + int_x,8 + int_y,254,221,88 );
	gfx.PutPixel( 19 + int_x,8 + int_y,0,0,0 );
	gfx.PutPixel( 0 + int_x,9 + int_y,0,0,0 );
	gfx.PutPixel( 1 + int_x,9 + int_y,254,221,88 );
	gfx.PutPixel( 2 + int_x,9 + int_y,0,0,0 );
	gfx.PutPixel( 3 + int_x,9 + int_y,0,0,0 );
	gfx.PutPixel( 4 + int_x,9 + int_y,0,0,0 );
	gfx.PutPixel( 5 + int_x,9 + int_y,0,0,0 );
	gfx.PutPixel( 6 + int_x,9 + int_y,254,221,88 );
	gfx.PutPixel( 7 + int_x,9 + int_y,254,221,88 );
	gfx.PutPixel( 8 + int_x,9 + int_y,254,221,88 );
	gfx.PutPixel( 9 + int_x,9 + int_y,254,221,88 );
	gfx.PutPixel( 10 + int_x,9 + int_y,254,221,88 );
	gfx.PutPixel( 11 + int_x,9 + int_y,0,0,0 );
	gfx.PutPixel( 12 + int_x,9 + int_y,0,0,0 );
	gfx.PutPixel( 13 + int_x,9 + int_y,0,0,0 );
	gfx.PutPixel( 14 + int_x,9 + int_y,0,0,0 );
	gfx.PutPixel( 15 + int_x,9 + int_y,254,221,88 );
	gfx.PutPixel( 16 + int_x,9 + int_y,254,221,88 );
	gfx.PutPixel( 17 + int_x,9 + int_y,254,221,88 );
	gfx.PutPixel( 18 + int_x,9 + int_y,254,221,88 );
	gfx.PutPixel( 19 + int_x,9 + int_y,0,0,0 );
	gfx.PutPixel( 0 + int_x,10 + int_y,0,0,0 );
	gfx.PutPixel( 1 + int_x,10 + int_y,254,221,88 );
	gfx.PutPixel( 2 + int_x,10 + int_y,254,221,88 );
	gfx.PutPixel( 3 + int_x,10 + int_y,254,221,88 );
	gfx.PutPixel( 4 + int_x,10 + int_y,254,221,88 );
	gfx.PutPixel( 5 + int_x,10 + int_y,254,221,88 );
	gfx.PutPixel( 6 + int_x,10 + int_y,254,221,88 );
	gfx.PutPixel( 7 + int_x,10 + int_y,254,221,88 );
	gfx.PutPixel( 8 + int_x,10 + int_y,254,221,88 );
	gfx.PutPixel( 9 + int_x,10 + int_y,254,221,88 );
	gfx.PutPixel( 10 + int_x,10 + int_y,254,221,88 );
	gfx.PutPixel( 11 + int_x,10 + int_y,254,221,88 );
	gfx.PutPixel( 12 + int_x,10 + int_y,254,221,88 );
	gfx.PutPixel( 13 + int_x,10 + int_y,254,221,88 );
	gfx.PutPixel( 14 + int_x,10 + int_y,254,221,88 );
	gfx.PutPixel( 15 + int_x,10 + int_y,254,221,88 );
	gfx.PutPixel( 16 + int_x,10 + int_y,254,221,88 );
	gfx.PutPixel( 17 + int_x,10 + int_y,254,221,88 );
	gfx.PutPixel( 18 + int_x,10 + int_y,254,221,88 );
	gfx.PutPixel( 19 + int_x,10 + int_y,0,0,0 );
	gfx.PutPixel( 0 + int_x,11 + int_y,0,0,0 );
	gfx.PutPixel( 1 + int_x,11 + int_y,254,221,88 );
	gfx.PutPixel( 2 + int_x,11 + int_y,254,221,88 );
	gfx.PutPixel( 3 + int_x,11 + int_y,254,221,88 );
	gfx.PutPixel( 4 + int_x,11 + int_y,254,221,88 );
	gfx.PutPixel( 5 + int_x,11 + int_y,254,221,88 );
	gfx.PutPixel( 6 + int_x,11 + int_y,254,221,88 );
	gfx.PutPixel( 7 + int_x,11 + int_y,20,14,18 );
	gfx.PutPixel( 8 + int_x,11 + int_y,18,11,14 );
	gfx.PutPixel( 9 + int_x,11 + int_y,18,12,14 );
	gfx.PutPixel( 10 + int_x,11 + int_y,18,12,14 );
	gfx.PutPixel( 11 + int_x,11 + int_y,21,13,16 );
	gfx.PutPixel( 12 + int_x,11 + int_y,24,11,15 );
	gfx.PutPixel( 13 + int_x,11 + int_y,0,0,0 );
	gfx.PutPixel( 14 + int_x,11 + int_y,254,221,88 );
	gfx.PutPixel( 15 + int_x,11 + int_y,254,221,88 );
	gfx.PutPixel( 16 + int_x,11 + int_y,254,221,88 );
	gfx.PutPixel( 17 + int_x,11 + int_y,254,221,88 );
	gfx.PutPixel( 18 + int_x,11 + int_y,254,221,88 );
	gfx.PutPixel( 19 + int_x,11 + int_y,0,0,0 );
	gfx.PutPixel( 0 + int_x,12 + int_y,0,0,0 );
	gfx.PutPixel( 1 + int_x,12 + int_y,254,221,88 );
	gfx.PutPixel( 2 + int_x,12 + int_y,254,221,88 );
	gfx.PutPixel( 3 + int_x,12 + int_y,254,221,88 );
	gfx.PutPixel( 4 + int_x,12 + int_y,254,221,88 );
	gfx.PutPixel( 5 + int_x,12 + int_y,254,221,88 );
	gfx.PutPixel( 6 + int_x,12 + int_y,23,9,23 );
	gfx.PutPixel( 7 + int_x,12 + int_y,135,26,68 );
	gfx.PutPixel( 8 + int_x,12 + int_y,135,26,68 );
	gfx.PutPixel( 9 + int_x,12 + int_y,135,26,68 );
	gfx.PutPixel( 10 + int_x,12 + int_y,135,26,68 );
	gfx.PutPixel( 11 + int_x,12 + int_y,135,26,68 );
	gfx.PutPixel( 12 + int_x,12 + int_y,135,26,68 );
	gfx.PutPixel( 13 + int_x,12 + int_y,135,26,68 );
	gfx.PutPixel( 14 + int_x,12 + int_y,0,0,0 );
	gfx.PutPixel( 15 + int_x,12 + int_y,254,221,88 );
	gfx.PutPixel( 16 + int_x,12 + int_y,254,221,88 );
	gfx.PutPixel( 17 + int_x,12 + int_y,254,221,88 );
	gfx.PutPixel( 18 + int_x,12 + int_y,254,221,88 );
	gfx.PutPixel( 19 + int_x,12 + int_y,0,0,0 );
	gfx.PutPixel( 1 + int_x,13 + int_y,0,0,0 );
	gfx.PutPixel( 2 + int_x,13 + int_y,254,221,88 );
	gfx.PutPixel( 3 + int_x,13 + int_y,254,221,88 );
	gfx.PutPixel( 4 + int_x,13 + int_y,254,221,88 );
	gfx.PutPixel( 5 + int_x,13 + int_y,0,0,0 );
	gfx.PutPixel( 6 + int_x,13 + int_y,135,26,68 );
	gfx.PutPixel( 7 + int_x,13 + int_y,135,26,68 );
	gfx.PutPixel( 8 + int_x,13 + int_y,135,26,68 );
	gfx.PutPixel( 9 + int_x,13 + int_y,135,26,68 );
	gfx.PutPixel( 10 + int_x,13 + int_y,135,26,68 );
	gfx.PutPixel( 11 + int_x,13 + int_y,135,26,68 );
	gfx.PutPixel( 12 + int_x,13 + int_y,135,26,68 );
	gfx.PutPixel( 13 + int_x,13 + int_y,135,26,68 );
	gfx.PutPixel( 14 + int_x,13 + int_y,135,26,68 );
	gfx.PutPixel( 15 + int_x,13 + int_y,0,0,0 );
	gfx.PutPixel( 16 + int_x,13 + int_y,254,221,88 );
	gfx.PutPixel( 17 + int_x,13 + int_y,254,221,88 );
	gfx.PutPixel( 18 + int_x,13 + int_y,0,0,0 );
	gfx.PutPixel( 1 + int_x,14 + int_y,0,0,0 );
	gfx.PutPixel( 2 + int_x,14 + int_y,254,221,88 );
	gfx.PutPixel( 3 + int_x,14 + int_y,254,221,88 );
	gfx.PutPixel( 4 + int_x,14 + int_y,0,0,0 );
	gfx.PutPixel( 5 + int_x,14 + int_y,135,26,68 );
	gfx.PutPixel( 6 + int_x,14 + int_y,135,26,68 );
	gfx.PutPixel( 7 + int_x,14 + int_y,135,26,68 );
	gfx.PutPixel( 8 + int_x,14 + int_y,135,26,68 );
	gfx.PutPixel( 9 + int_x,14 + int_y,251,192,224 );
	gfx.PutPixel( 10 + int_x,14 + int_y,251,192,224 );
	gfx.PutPixel( 11 + int_x,14 + int_y,251,192,224 );
	gfx.PutPixel( 12 + int_x,14 + int_y,251,192,224 );
	gfx.PutPixel( 13 + int_x,14 + int_y,135,26,68 );
	gfx.PutPixel( 14 + int_x,14 + int_y,135,26,68 );
	gfx.PutPixel( 15 + int_x,14 + int_y,0,0,0 );
	gfx.PutPixel( 16 + int_x,14 + int_y,254,221,88 );
	gfx.PutPixel( 17 + int_x,14 + int_y,254,221,88 );
	gfx.PutPixel( 18 + int_x,14 + int_y,0,0,0 );
	gfx.PutPixel( 2 + int_x,15 + int_y,0,0,0 );
	gfx.PutPixel( 3 + int_x,15 + int_y,254,221,88 );
	gfx.PutPixel( 4 + int_x,15 + int_y,0,0,0 );
	gfx.PutPixel( 5 + int_x,15 + int_y,135,26,68 );
	gfx.PutPixel( 6 + int_x,15 + int_y,135,26,68 );
	gfx.PutPixel( 7 + int_x,15 + int_y,135,26,68 );
	gfx.PutPixel( 8 + int_x,15 + int_y,251,192,224 );
	gfx.PutPixel( 9 + int_x,15 + int_y,251,192,224 );
	gfx.PutPixel( 10 + int_x,15 + int_y,251,192,224 );
	gfx.PutPixel( 11 + int_x,15 + int_y,251,192,224 );
	gfx.PutPixel( 12 + int_x,15 + int_y,251,192,224 );
	gfx.PutPixel( 13 + int_x,15 + int_y,251,192,224 );
	gfx.PutPixel( 14 + int_x,15 + int_y,135,26,68 );
	gfx.PutPixel( 15 + int_x,15 + int_y,0,0,0 );
	gfx.PutPixel( 16 + int_x,15 + int_y,254,221,88 );
	gfx.PutPixel( 17 + int_x,15 + int_y,0,0,0 );
	gfx.PutPixel( 2 + int_x,16 + int_y,0,0,0 );
	gfx.PutPixel( 3 + int_x,16 + int_y,254,221,88 );
	gfx.PutPixel( 4 + int_x,16 + int_y,0,0,0 );
	gfx.PutPixel( 5 + int_x,16 + int_y,135,26,68 );
	gfx.PutPixel( 6 + int_x,16 + int_y,135,26,68 );
	gfx.PutPixel( 7 + int_x,16 + int_y,135,26,68 );
	gfx.PutPixel( 8 + int_x,16 + int_y,251,192,224 );
	gfx.PutPixel( 9 + int_x,16 + int_y,251,192,224 );
	gfx.PutPixel( 10 + int_x,16 + int_y,251,192,224 );
	gfx.PutPixel( 11 + int_x,16 + int_y,251,192,224 );
	gfx.PutPixel( 12 + int_x,16 + int_y,251,192,224 );
	gfx.PutPixel( 13 + int_x,16 + int_y,251,192,224 );
	gfx.PutPixel( 14 + int_x,16 + int_y,135,26,68 );
	gfx.PutPixel( 15 + int_x,16 + int_y,0,0,0 );
	gfx.PutPixel( 16 + int_x,16 + int_y,254,221,88 );
	gfx.PutPixel( 17 + int_x,16 + int_y,0,0,0 );
	gfx.PutPixel( 3 + int_x,17 + int_y,0,0,0 );
	gfx.PutPixel( 4 + int_x,17 + int_y,0,0,0 );
	gfx.PutPixel( 5 + int_x,17 + int_y,0,0,0 );
	gfx.PutPixel( 6 + int_x,17 + int_y,0,0,0 );
	gfx.PutPixel( 7 + int_x,17 + int_y,0,0,0 );
	gfx.PutPixel( 8 + int_x,17 + int_y,0,0,0 );
	gfx.PutPixel( 9 + int_x,17 + int_y,0,0,0 );
	gfx.PutPixel( 10 + int_x,17 + int_y,0,0,0 );
	gfx.PutPixel( 11 + int_x,17 + int_y,0,0,0 );
	gfx.PutPixel( 12 + int_x,17 + int_y,0,0,0 );
	gfx.PutPixel( 13 + int_x,17 + int_y,0,0,0 );
	gfx.PutPixel( 14 + int_x,17 + int_y,0,0,0 );
	gfx.PutPixel( 15 + int_x,17 + int_y,0,0,0 );
	gfx.PutPixel( 16 + int_x,17 + int_y,0,0,0 );
	gfx.PutPixel( 5 + int_x,18 + int_y,0,0,0 );
	gfx.PutPixel( 6 + int_x,18 + int_y,0,0,0 );
	gfx.PutPixel( 7 + int_x,18 + int_y,254,221,88 );
	gfx.PutPixel( 8 + int_x,18 + int_y,254,221,88 );
	gfx.PutPixel( 9 + int_x,18 + int_y,254,221,88 );
	gfx.PutPixel( 10 + int_x,18 + int_y,254,221,88 );
	gfx.PutPixel( 11 + int_x,18 + int_y,254,221,88 );
	gfx.PutPixel( 12 + int_x,18 + int_y,254,221,88 );
	gfx.PutPixel( 13 + int_x,18 + int_y,0,0,0 );
	gfx.PutPixel( 14 + int_x,18 + int_y,0,0,0 );
	gfx.PutPixel( 7 + int_x,19 + int_y,0,0,0 );
	gfx.PutPixel( 8 + int_x,19 + int_y,0,0,0 );
	gfx.PutPixel( 9 + int_x,19 + int_y,0,0,0 );
	gfx.PutPixel( 10 + int_x,19 + int_y,0,0,0 );
	gfx.PutPixel( 11 + int_x,19 + int_y,0,0,0 );
	gfx.PutPixel( 12 + int_x,19 + int_y,0,0,0 );
}

void Dude::DrawProgress(Graphics& gfx) const {
	for (int i = 10; i < 30; i++) {
		for (int j = 100; j < 700; j++)
			gfx.PutPixel(j, i, Colors::White);
	}
	for (int i = 100; i < 700; i++) {
		gfx.PutPixel(i, 10, Colors::Blue);
	}
	for (int i = 100; i < 700; i++) {
		gfx.PutPixel(i, 30, Colors::Blue);
	}
	for (int i = 10; i < 30; i++) {
		for (int j = 0; j <= Game::requiredProgress; j++) {
			gfx.PutPixel(100 + 600 * j / Game::requiredProgress, i, Colors::Blue);
		}
	}
	for (int i = 10; i < 30; i++) {
		for (int j = 0; j < 600 * progress / Game::requiredProgress; j++) {
			gfx.PutPixel(100 + j, i, Colors::Blue);
		}
	}
}

void Dude::Update( const Keyboard & kbd )
{
	if( kbd.KeyIsPressed( VK_RIGHT ) )
	{
		x += speed;
	}
	if( kbd.KeyIsPressed( VK_LEFT ) )
	{
		x -= speed;
	}
	if( kbd.KeyIsPressed( VK_DOWN ) )
	{
		y += speed;
	}
	if( kbd.KeyIsPressed( VK_UP ) )
	{
		y -= speed;
	}
}

float Dude::GetX() const
{
	return x;
}

float Dude::GetY() const
{
	return y;
}

float Dude::GetWidth() const
{
	return width;
}

float Dude::GetHeight() const
{
	return height;
}

void Dude::AddProgress() {
	progress++;
}

int Dude::GetProgress() const {
	return progress;
}