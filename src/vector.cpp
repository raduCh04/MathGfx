#include "vector.h"

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

f32 Vec2::len() const
{
    return sqrtf(x * x + y * y);
}

f32 Vec2::len(const Vec2 &v) const
{
    return sqrtf(v.x * v.x + v.y * v.y);
}

Vec2 Vec2::normalize(const Vec2 &v) const
{
    return v / len(v);
}

void Vec2::normalize()
{
    (*this) *= 1/len(); 
}

std::ostream &operator<<(std::ostream &os, const Vec2 &vec)
{
    os << '(' << vec.x << ',' << vec.y << ")";
    return os;
}

Vec3 &Vec3::operator-()
{
    // TODO: insert return statement here
}

Vec3 Vec3::operator-() const
{
    return Vec3();
}

Vec3 &Vec3::operator*=(f32 s)
{
    // TODO: insert return statement here
}

Vec3 Vec3::operator*(f32 s) const
{
    return Vec3();
}

Vec3 &Vec3::operator/=(f32 s)
{
    // TODO: insert return statement here
}

Vec3 Vec3::operator/(f32 s) const
{
    return Vec3();
}

Vec3 &Vec3::operator+=(const Vec3 &v)
{
    // TODO: insert return statement here
}

Vec3 Vec3::operator+(const Vec3 &other) const
{
    return Vec3();
}

Vec3 &Vec3::operator-=(const Vec3 &v)
{
    // TODO: insert return statement here
}

Vec3 Vec3::operator-(const Vec3 &other) const
{
    return Vec3();
}

f32 Vec3::len() const
{
    return f32();
}

f32 Vec3::len(const Vec3 &v) const
{
    return f32();
}

Vec2 Vec3::normalize(const Vec3 &v) const
{
    return Vec2();
}

void Vec3::normalize()
{
}

std::ostream &operator<<(std::ostream &os, const Vec3 &vec)
{
    // TODO: insert return statement here
}

Vec4 &Vec4::operator-()
{
    // TODO: insert return statement here
}

Vec4 Vec4::operator-() const
{
    return Vec4();
}

Vec4 &Vec4::operator*=(f32 s)
{
    // TODO: insert return statement here
}

Vec4 Vec4::operator*(f32 s) const
{
    return Vec4();
}

Vec4 &Vec4::operator/=(f32 s)
{
    // TODO: insert return statement here
}

Vec4 Vec4::operator/(f32 s) const
{
    return Vec4();
}

Vec4 &Vec4::operator+=(const Vec4 &v)
{
    // TODO: insert return statement here
}

Vec4 Vec4::operator+(const Vec4 &other) const
{
    return Vec4();
}

Vec4 &Vec4::operator-=(const Vec4 &v)
{
    // TODO: insert return statement here
}

Vec4 Vec4::operator-(const Vec4 &other) const
{
    return Vec4();
}

f32 Vec4::len() const
{
    return f32();
}

f32 Vec4::len(const Vec4 &v) const
{
    return f32();
}

Vec2 Vec4::normalize(const Vec4 &v) const
{
    return Vec2();
}

void Vec4::normalize()
{
}

std::ostream &operator<<(std::ostream &os, const Vec4 &vec)
{
    // TODO: insert return statement here
}
