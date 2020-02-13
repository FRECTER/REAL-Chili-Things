#include "Rect.h"
#include "Graphics.h"

void Rect::Init(int inX, int inY) {
	x = inX;
	y = inY;
}

void Rect::Draw(Graphics & gfx) const {
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++)
			gfx.PutPixel(x + i, y + j, 255, redness, redness);
	}
}

void Rect::Check(Dude& dude) {
	const int duderight = dude.GetX() + dude.GetWidth();
	const int dudebottom = dude.GetY() + dude.GetHeight();
	const int rectright = x + width;
	const int rectbottom = y + height;

	if (duderight >= x &&
		dude.GetX() <= rectright &&
		dudebottom >= y &&
		dude.GetY() <= rectbottom)
	{
		reached = true;
	}
}

void Rect::Update(int newX, int newY) {
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
		redness--;
	}
	else if (redness == 0) {
		lastcolor = redness;
		redness++;
	}
	else {
		if (lastcolor < redness) {
			lastcolor = redness;
			redness++;
		}
		else {
			lastcolor = redness;
			redness--;
		}
	}
}