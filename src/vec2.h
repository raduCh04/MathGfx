#include <iostream>

using f32 = float;
struct Vec2
{
    f32 x, y;

    Vec2& operator-();
    Vec2 operator-() const;

    Vec2& operator*=(f32 s);
    Vec2 operator*(f32 s) const;

    Vec2& operator/=(f32 s);
    Vec2 operator/(f32 s) const;

    Vec2& operator+=(const Vec2 &v);
    Vec2 operator+(const Vec2 &other) const;

    Vec2& operator-=(const Vec2 &v);
    Vec2 operator-(const Vec2 &other) const;

    bool operator==(const Vec2 &v) const;
    bool operator!=(const Vec2 &v) const;
    bool operator<(const Vec2 &v) const;
    bool operator>(const Vec2 &v) const;

    f32 len() const;
    f32 lenSquared() const;
    void normalize();
    Vec2 normalizedV() const;
};

std::ostream& operator<<(std::ostream &os, const Vec2 &vec);