#pragma once

struct Vec2 {
	float x, y;
	Vec2() = default;
	Vec2(float in_x, float in_y) {
		x = in_x; y = in_y;
	}
	bool operator==(const Vec2& check);
	Vec2 operator+(const Vec2& add) const;
	Vec2& operator+=(const Vec2& inc);
	Vec2 operator*(float scalar) const;
	Vec2& operator*=(float scalar);
	Vec2 operator-(const Vec2& subtract) const;
	Vec2& operator-=(const Vec2& dec);
	float NormSq() const;
	float Norm() const;
	Vec2 GetNormalized() const;
	Vec2& Normalize();
	float InnerProduct(const Vec2& v1, const Vec2& v2) const;
};