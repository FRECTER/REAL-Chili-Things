#include "Rect.h"
#include "Graphics.h"

void Rect::Draw(Graphics & gfx) const {
	const int int_x = (int)x;
	const int int_y = (int)y;
	const int int_w = (int)width;
	const int int_h = (int)height;
	for (int i = 0; i < int_w; i++) {
		for (int j = 0; j < int_h; j++)
			gfx.PutPixel(int_x + i, int_y + j, 255, redness, redness);
	}
}

void Rect::Check(Dude& dude) {
	const float duderight = dude.GetX() + dude.GetWidth();
	const float dudebottom = dude.GetY() + dude.GetHeight();
	const float rectright = x + width;
	const float rectbottom = y + height;

	if (duderight >= x &&
		dude.GetX() <= rectright &&
		dudebottom >= y &&
		dude.GetY() <= rectbottom)
	{
		reached = true;
	}
}

void Rect::Update(float newX, float newY) {
	x = newX;
	y = newY;
	reached = false;
}

bool Rect::IsReached() const {
	return reached;
}

void Rect::changeColor() {
	if (redness == 255) {
		lastcolor = redness;
		redness -= 5;
	}
	else if (redness == 0) {
		lastcolor = redness;
		redness += 5;
	}
	else {
		if (lastcolor < redness) {
			lastcolor = redness;
			redness += 5;
		}
		else {
			lastcolor = redness;
			redness -= 5;
		}
	}
}