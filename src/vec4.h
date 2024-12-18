#pragma once

#include <iostream>

using f32 = float;
struct Vec4
{
    f32 x, y, z, w;

    Vec4& operator-();
    Vec4 operator-() const;

    Vec4& operator*=(f32 s);
    Vec4 operator*(f32 s) const;

    Vec4& operator/=(f32 s);
    Vec4 operator/(f32 s) const;

    Vec4& operator+=(const Vec4 &v);
    Vec4 operator+(const Vec4 &other) const;

    Vec4& operator-=(const Vec4 &v);
    Vec4 operator-(const Vec4 &other) const;

    bool operator==(const Vec4 &v) const;
    bool operator!=(const Vec4 &v) const;
    bool operator<(const Vec4 &v) const;
    bool operator>(const Vec4 &v) const;

    f32 len() const;
    f32 lenSquared() const;
    Vec4 normalizedV() const;
    void normalize();
};

std::ostream& operator<<(std::ostream &os, const Vec4 &vec);