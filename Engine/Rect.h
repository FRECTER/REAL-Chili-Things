#pragma once

#include "Graphics.h"
#include "Dude.h"

class Rect {
public:
	void Init(int inX, int inY);
	void Draw(Graphics& gfx) const;
	void Update(int newX, int newY);
	void Check(Dude& dude);
	bool IsReached() const;
	void changeColor();
private:
	int x, y;
	static constexpr int width = 20;
	static constexpr int height = 20;
	int redness = 255;
	int lastcolor;
	bool reached = false;
};