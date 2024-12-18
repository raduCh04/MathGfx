#include "vec2.h"
#include <cmath>

Vec2 &Vec2::operator-()
{
    x = -x;
    y = -y;
    return (*this);
}

Vec2 Vec2::operator-() const
{
    return Vec2{-x, -y};
}

Vec2 &Vec2::operator*=(f32 s)
{
    x *= s;
    y *= s;
    return (*this);
}

Vec2 Vec2::operator*(f32 s) const
{
    return Vec2{x * s, y * s};
}

Vec2 &Vec2::operator/=(f32 s)
{
    x /= s;
    y /= s;
    return (*this);
}

Vec2 Vec2::operator/(f32 s) const
{
    return Vec2{x / s, y / s};
}

Vec2 &Vec2::operator+=(const Vec2 &v)
{
    x += v.x;
    y += v.y;
    return (*this);
}

Vec2 Vec2::operator+(const Vec2 &other) const
{
    return Vec2{x + other.x, y + other.y};
}

Vec2 &Vec2::operator-=(const Vec2 &v)
{
    x -= v.x;
    y -= v.y;
    return (*this);
}

Vec2 Vec2::operator-(const Vec2 &other) const
{
    return Vec2{x - other.x, y - other.y};
}

bool Vec2::operator==(const Vec2 &v) const
{
    return (x == v.x && y == v.y);
}

bool Vec2::operator!=(const Vec2 &v) const
{
    return !(x == v.x && y == v.y);
}

bool Vec2::operator<(const Vec2 &v) const
{
    return lenSquared() < v.lenSquared();
}

bool Vec2::operator>(const Vec2 &v) const
{
    return lenSquared() > v.lenSquared();
}

f32 Vec2::len() const
{
    return sqrtf(x * x + y * y);
}

f32 Vec2::lenSquared() const
{
    return x * x + y * y;
}

void Vec2::normalize()
{
    (*this) *= 1/len(); 
}

Vec2 Vec2::normalizedV() const
{
    return (*this) * 1 / len();
}

std::ostream &operator<<(std::ostream &os, const Vec2 &vec)
{
    os << '(' << vec.x << ',' << vec.y << ")";
    return os;
}
