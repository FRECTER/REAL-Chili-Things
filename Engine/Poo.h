#pragma once

#include "Graphics.h"
#include "Dude.h"

class Poo
{
public:
	void Init( float in_x,float in_y,float in_vx,float in_vy );
	void Update(float dt);
	void ProcessConsumption( Dude& dude );
	void Draw( Graphics& gfx ) const;
	bool IsEaten() const;
	void IncreaseSpeed();
private:
	float x;
	float y;
	float vx;
	float vy;
	static constexpr float speedModifier = 0.2f * 60.0f;
	static constexpr float width = 24.0f;
	static constexpr float height = 24.0f;
	bool isEaten = false;
};