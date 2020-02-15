#include "Rect.h"
#include "Graphics.h"

void Rect::Draw(Graphics & gfx) const {
	const int int_x = (int)pos.x;
	const int int_y = (int)pos.y;
	const int int_w = (int)width;
	const int int_h = (int)height;
	for (int i = 0; i < int_w; i++) {
		for (int j = 0; j < int_h; j++)
			gfx.PutPixel(int_x + i, int_y + j, 255, redness, redness);
	}
}

void Rect::Check(Dude& dude) {
	const float duderight = dude.GetPos().x + dude.GetWidth();
	const float dudebottom = dude.GetPos().y + dude.GetHeight();
	const float rectright = pos.x + width;
	const float rectbottom = pos.y + height;

	if (duderight >= pos.x &&
		dude.GetPos().x <= rectright &&
		dudebottom >= pos.y &&
		dude.GetPos().y <= rectbottom)
	{
		reached = true;
	}
}

void Rect::Update(const Vec2& new_pos) {
	pos = new_pos;
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