#pragma once

#include <iostream>

using f32 = float;
using f64 = double;

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

    f32 len() const;
    f32 len(const Vec2 &v) const;
    Vec2 normalize(const Vec2 &v) const;
    void normalize();
};

std::ostream& operator<<(std::ostream &os, const Vec2 &vec);

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

    f32 len() const;
    f32 len(const Vec3 &v) const;
    Vec2 normalize(const Vec3 &v) const;
    void normalize();
};

std::ostream& operator<<(std::ostream &os, const Vec3 &vec);

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

    f32 len() const;
    f32 len(const Vec4 &v) const;
    Vec2 normalize(const Vec4 &v) const;
    void normalize();
};

std::ostream& operator<<(std::ostream &os, const Vec4 &vec);