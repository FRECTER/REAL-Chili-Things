#include "Vec2.h"
#include <cmath>

bool Vec2::operator==(const Vec2& check) {
	return x == check.x && y == check.y;
}

Vec2 Vec2::operator+(const Vec2& add) const {
	return Vec2(x + add.x, y + add.y);
}

Vec2& Vec2::operator+=(const Vec2& inc) {
	return *this = *this + inc;
}

Vec2 Vec2::operator*(float scalar) const {
	return Vec2(x * scalar, y * scalar);
}

Vec2& Vec2::operator*=(float scalar) {
	return *this = *this * scalar;
}

Vec2 Vec2::operator-(const Vec2& subtract) const {
	return Vec2(x + subtract.x * (-1.0f), y + subtract.y * (-1.0f));
}

Vec2& Vec2::operator-=(const Vec2& dec) {
	return *this = *this - dec;
}

float Vec2::NormSq() const {
	return x * x + y * y;
}

float Vec2::Norm() const {
	return std::sqrt(NormSq());
}

Vec2 Vec2::GetNormalized() const {
	return *this * (1.0f / Norm());
}

Vec2& Vec2::Normalize() {
	return *this = GetNormalized();
}

float Vec2::InnerProduct(const Vec2& v1, const Vec2& v2) const {
	return v1.x * v2.x + v1.y * v2.y;
}