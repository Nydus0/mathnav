//
// Created by Nydus0 on 24/08/2026.
//

#include "straight_line.hpp"

namespace mathnav {

StraightLine::StraightLine(double x0, double y0, double z0,
                           double vx, double vy, double vz)
    : x0_(x0),
      y0_(y0),
      z0_(z0),
      vx_(vx),
      vy_(vy),
      vz_(vz) {}

double StraightLine::x(double t) const {
    return x0_ + vx_ * t;
}

double StraightLine::y(double t) const {
    return y0_ + vy_ * t;
}

double StraightLine::z(double t) const {
    return z0_ + vz_ * t;
}

}