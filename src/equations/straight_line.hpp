//
// Created by Nydus0 on 24/08/2026.
//

#pragma once

#include "src/math/Vector3.hpp"

namespace mathnav {

/** equation y = ax + b **/

class StraightLine {
public:
    StraightLine(double a, double b);

private:
    double coef_a;
    double coef_b;
};


}
