#pragma once

#include "Graphics.h"
#include "Colors.h"

class Circ {
public:
	Circ(float centre_x, float centre_y, float radius, Color c) {
		c_x = centre_x; c_y = centre_y; r = radius; color = c;
	}
	void DrawDisk(Graphics& gfx) const;
	void DrawBound(Graphics& gfx) const;
private:
	float c_x, c_y;
	float r;
	Color color;
};