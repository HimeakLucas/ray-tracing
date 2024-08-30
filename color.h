#pragma once

#include "vec3.h"
#include <iostream>

using color = vec3;

void write_color(std::ostream& out, const color& pixel_color) {

// The `pixel_color` components are values in the range of 0 to 1,
// which are converted to the range of 0 to 255.

    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();

    int rbyte = int(255.999 * r);
    int gbyte = int(255.999 * g);
    int bbyte = int(255.999 * b);

    out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}