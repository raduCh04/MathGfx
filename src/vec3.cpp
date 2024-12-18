#include "vec3.h"
#include <cmath>

Vec3 &Vec3::operator-()
{
    x = -x;
    y = -y;
    z = -z;
    return (*this);
}

Vec3 Vec3::operator-() const
{
    return Vec3{-x, -y, -z};
}

Vec3 &Vec3::operator*=(f32 s)
{
    x *= s;
    y *= s;
    z *= s;
    return (*this);
}

Vec3 Vec3::operator*(f32 s) const
{
    return Vec3{x * s, y * s, z * s};
}

Vec3 &Vec3::operator/=(f32 s)
{
    x /= s;
    y /= s;
    z /= s;
    return (*this);
}

Vec3 Vec3::operator/(f32 s) const
{
    return Vec3{x / s, y / s, z / s};
}

Vec3 &Vec3::operator+=(const Vec3 &v)
{
    x *= v.x;
    y *= v.y;
    return (*this);
}

Vec3 Vec3::operator+(const Vec3 &other) const
{
    return Vec3{x + other.x, y + other.y, z + other.z};
}

Vec3 &Vec3::operator-=(const Vec3 &v)
{
    x -= v.x;
    y -= v.y;
    z -= v.z;
}

Vec3 Vec3::operator-(const Vec3 &other) const
{
    return Vec3{x - other.x, y - other.y, z - other.z};
}

bool Vec3::operator==(const Vec3 &v) const
{
    return x == v.x && y == v.y && z == v.z;
}

bool Vec3::operator!=(const Vec3 &v) const
{
    return !(x == v.x && y == v.y && z == v.z);
}

bool Vec3::operator<(const Vec3 &v) const
{
    return lenSquared() < v.lenSquared();
}

bool Vec3::operator>(const Vec3 &v) const
{
    return lenSquared() > v.lenSquared();
}

f32 Vec3::len() const
{
    return sqrtf(x * x + y * y + z * z);
}

f32 Vec3::lenSquared() const
{
    return x * x + y * y + z * z;
}

Vec3 Vec3::normalizedV() const
{
    return (*this) * 1 / len();
}

void Vec3::normalize()
{
    (*this) *= 1 / len();
}

std::ostream &operator<<(std::ostream &os, const Vec3 &vec)
{
    os << '(' << vec.x << ',' << vec.y << ',' << vec.z << ')';
    return os;
}