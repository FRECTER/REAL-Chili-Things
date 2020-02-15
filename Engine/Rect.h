#pragma once

#include "Graphics.h"
#include "Dude.h"

class Rect {
public:
	Rect(const Vec2& in_pos) {
		pos = in_pos;
	}
	void Draw(Graphics& gfx) const;
	void Update(const Vec2& new_pos);
	void Check(Dude& dude);
	bool IsReached() const;
	void changeColor();
private:
	Vec2 pos;
	static constexpr float width = 20;
	static constexpr float height = 20;
	int redness = 255;
	int lastcolor;
	bool reached = false;
};