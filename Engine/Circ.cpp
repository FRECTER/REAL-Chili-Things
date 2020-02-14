#include "Circ.h"

void Circ::DrawDisk(Graphics & gfx) const {
	for (int i = 0; i < Graphics::ScreenWidth; i++) {
		for (int j = 0; j < Graphics::ScreenHeight; j++) {
			if ((c_x - (float)i) * (c_x - (float)i) + (c_y - (float)j)* (c_y - (float)j) <= r * r)
				gfx.PutPixel(i, j, color);
		}
	}
}

void Circ::DrawBound(Graphics & gfx) const {
	for (int i = 0; i < Graphics::ScreenWidth; i++) {
		for (int j = 0; j < Graphics::ScreenHeight; j++) {
			if ((c_x - (float)i) * (c_x - (float)i) + (c_y - (float)j)* (c_y - (float)j) == r * r)
				gfx.PutPixel(i, j, color);
		}
	}
}
