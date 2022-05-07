#pragma once

template<typename T>
class Vector2 {
public:
	T x, y;

	Vector2(T x, T y) {
		this->x = x;
		this->y = y;
	}
#pragma region Math_For_Vector2
	Vector2 Add(const Vector2 a, const Vector2 b) {
		Vector2 c;
		c.x = a.x + b.x;
		c.y = a.y + b.y;
		return c;
	}
	Vector2 Sub(const Vector2 a, const Vector2 b) {
		Vector2 c;
		c.x = a.x - b.x;
		c.y = a.y - b.y;
		return c;
	}
	Vector2 Div(const Vector2 a, const Vector2 b) {
		Vector2 c;
		c.x = a.x / b.x;
		c.y = a.y / b.y;
		return c;
	}
	Vector2 Mul(const Vector2 a, const Vector2 b) {
		Vector2 c;
		c.x = a.x * b.x;
		c.y = a.y * b.y;
		return c;
	}
#pragma endregion
};

template<typename T>
class Vector3 {
public:
	T x, y, z;

	Vector3(T x, T y, T z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
	Vector3() {
		x = y = z = 0;
	}

#pragma region Math_For_Vector3
	Vector3 Add(const Vector3 a, const Vector3 b) {
		Vector3 c;
		c.x = a.x + b.x;
		c.y = a.y + b.y;
		c.z = a.z + b.z;
		return c;
	}
	Vector3 Sub(const Vector3 a, const Vector3 b) {
		Vector3 c;
		c.x = a.x - b.x;
		c.y = a.y - b.y;
		c.z = a.z - b.z;
		return c;
	}
	Vector3 Div(const Vector3 a, const Vector3 b) {
		Vector3 c;
		c.x = a.x / b.x;
		c.y = a.y / b.y;
		c.z = a.z / b.z;
		return c;
	}
	Vector3 Mul(const Vector3 a, const Vector3 b) {
		Vector3 c;
		c.x = a.x * b.x;
		c.y = a.y * b.y;
		c.z = a.z * b.z;
		return c;
	}
#pragma endregion
};

class Rect {
public:
	float x, y, w, h;

	Rect(const Vector2<float> rect1, const Vector2<float> rect2) {
		this->x = rect1.x;
		this->y = rect1.y;
		this->w = rect2.x;
		this->h = rect2.y;
	}
	Rect() {
		x = y = w = h = 0;
	}

	float getHeight() {
		return h;
	}
	float getWidth() {
		return w;
	}
	float getPosX() {
		return this->x;
	}
	float getPosY() {
		return this->y;
	}
};