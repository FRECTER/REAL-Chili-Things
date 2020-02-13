#pragma once

#include "Graphics.h"
#include "Dude.h"

class Rect {
public:
	Rect(float in_x, float in_y)
		:
		x(in_x),
		y(in_y) {

	}
	void Draw(Graphics& gfx) const;
	void Update(float newX, float newY);
	void Check(Dude& dude);
	bool IsReached() const;
	void changeColor();
private:
	float x, y;
	static constexpr float width = 20;
	static constexpr float height = 20;
	int redness = 255;
	int lastcolor;
	bool reached = false;
};