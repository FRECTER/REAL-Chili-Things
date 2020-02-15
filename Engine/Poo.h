#pragma once

#include "Graphics.h"
#include "Dude.h"
#include "Vec2.h"

class Poo
{
public:
	void Init(const Vec2& in_pos, const Vec2& in_vel);
	void Update(float dt);
	void ProcessConsumption( Dude& dude );
	void Draw( Graphics& gfx ) const;
	bool IsEaten() const;
	void IncreaseSpeed();
	Vec2 GetPos() const;
private:
	Vec2 pos;
	Vec2 vel;
	static constexpr float speedModifier = 0.2f * 60.0f;
	static constexpr float width = 24.0f;
	static constexpr float height = 24.0f;
	bool isEaten = false;
};