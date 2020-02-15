#pragma once

#include "Graphics.h"
#include "Keyboard.h"
#include "Mouse.h"
#include "Vec2.h"

class Dude {
public:
	void ClampToScreen();
	void Draw( Graphics& gfx ) const;
	void DrawProgress(Graphics& gfx) const;
	void Update(const Keyboard& kbd, float dt);
	void UpdateMouse(const Mouse& mouse, float dt);
	Vec2 GetPos() const;
	float GetWidth() const;
	float GetHeight() const;
	void AddProgress();
	int GetProgress() const;
private:
	Vec2 pos = Vec2(400.0f, 300.0f);
	int progress = 0;
	static constexpr float speed = 2.0f * 60.0f;
	static constexpr float width = 20.0f;
	static constexpr float height = 20.0f;
};