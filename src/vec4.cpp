#include "vec4.h"
#include <cmath>

Vec4 &Vec4::operator-()
{
    x = -x;
    y = -y;
    z = -z;
    w = -w;
    return (*this);
}

Vec4 Vec4::operator-() const
{
    return Vec4();
}

Vec4 &Vec4::operator*=(f32 s)
{
    x *= s;
    y *= s;
    z *= s;
    w *= s;
    return (*this);
}

Vec4 Vec4::operator*(f32 s) const
{
    return Vec4{x * s, y * s, z * s, w * s};
}

Vec4 &Vec4::operator/=(f32 s)
{
    x /= s;
    y /= s;
    z /= s;
    w /= s;
    return (*this);
}

Vec4 Vec4::operator/(f32 s) const
{
    return Vec4{x / s, y / s, z / s, w / s};
}

Vec4 &Vec4::operator+=(const Vec4 &v)
{
    x += v.x;
    y += v.y;
    z += v.z;
    w += v.w;
    return (*this);
}

Vec4 Vec4::operator+(const Vec4 &other) const
{
    return Vec4{x + other.x, y + other.y, z + other.z, w + other.w};
}

Vec4 &Vec4::operator-=(const Vec4 &v)
{
    x -= v.x;
    y -= v.y;
    z -= v.z;
    w -= v.w;
    return (*this);
}

Vec4 Vec4::operator-(const Vec4 &other) const
{
    return Vec4{x - other.x, y - other.y, z - other.z, w - other.w};
}

bool Vec4::operator==(const Vec4 &v) const
{
    return x == v.x && y == v.y && z == v.z && w == v.w;
}

bool Vec4::operator!=(const Vec4 &v) const
{
    return !(x == v.x && y == v.y && z == v.z && w == v.w);
}

bool Vec4::operator<(const Vec4 &v) const
{
    return lenSquared() < v.lenSquared();
}

bool Vec4::operator>(const Vec4 &v) const
{
    return lenSquared() > v.lenSquared();
}

f32 Vec4::len() const
{
    return sqrtf(x * x + y * y + z * z + w * w);
}

f32 Vec4::lenSquared() const
{
    return x * x + y * y + z * z + w * w;
}

Vec4 Vec4::normalizedV() const
{
    return (*this) * 1 / len();
}

void Vec4::normalize()
{
    (*this) *= 1 / len();
}

std::ostream &operator<<(std::ostream &os, const Vec4 &vec)
{
    os << '(' << vec.x << ',' << vec.y << ',' << vec.z <<  ',' << vec.w << ')';
    return os;
}