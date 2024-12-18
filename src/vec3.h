#pragma once

#include <iostream>

using f32 = float;
struct Vec3
{
    f32 x, y, z;

    Vec3& operator-();
    Vec3 operator-() const;

    Vec3& operator*=(f32 s);
    Vec3 operator*(f32 s) const;

    Vec3& operator/=(f32 s);
    Vec3 operator/(f32 s) const;

    Vec3& operator+=(const Vec3 &v);
    Vec3 operator+(const Vec3 &other) const;

    Vec3& operator-=(const Vec3 &v);
    Vec3 operator-(const Vec3 &other) const;

    bool operator==(const Vec3 &v) const;
    bool operator!=(const Vec3 &v) const;
    bool operator<(const Vec3 &v) const;
    bool operator>(const Vec3 &v) const;

    f32 len() const;
    f32 lenSquared() const;
    Vec3 normalizedV() const;
    void normalize();
};

std::ostream& operator<<(std::ostream &os, const Vec3 &vec);