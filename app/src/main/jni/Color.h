#pragma once

#define _USE_MATH_DEFINES
#include <math.h>
#include <cstring>

struct Color
{
    union
    {
        struct
        {
            float r;
            float g;
            float b;
            float a;
        };
        float data[4];
    };

    inline Color();
    inline Color(float r, float g, float b, float a);

    static inline Color red();
    static inline Color green();
    static inline Color blue();
    static inline Color white();
    static inline Color black();
    static inline Color purpleSense();
    static inline Color yellow();
    static inline Color magenta();
    static inline Color gray();
    static inline Color grey();
    static inline Color clear();
};

Color::Color() : r(0), g(0), b(0), a(0) {}
Color::Color(float rr, float gg, float bb, float aa) : r(rr), g(gg), b(bb), a(aa) {}

Color Color::red() { return Color(1,0,0,1); }
Color Color::green() { return Color(0,1,0,1); }
Color Color::blue() { return Color(0,0,1,1); }
Color Color::white() { return Color(1,1,1,1); }
Color Color::black() { return Color(0,0,0,1); }
Color Color::purpleSense() { return Color(0.6039215, 0.0705882, 0.7019607, 1); }
Color Color::yellow() { return Color(1,0.921569,0.0156863,1); }
Color Color::magenta() { return Color(1,0,1,1); }
Color Color::gray() { return Color(0.5,0.5,0.5,1); }
Color Color::grey() { return Color(0.5,0.5,0.5,1); }
Color Color::clear() { return Color(0,0,0,0.5); }
