//
// Created by Nydus0 on 24/08/2026.
//

#pragma once

namespace mathnav {

class StraightLine {
public:
    StraightLine(double x0, double y0, double z0,
                 double vx, double vy, double vz);

    double x(double t) const;
    double y(double t) const;
    double z(double t) const;

private:
    double x0_;
    double y0_;
    double z0_;

    double vx_;
    double vy_;
    double vz_;
};


}