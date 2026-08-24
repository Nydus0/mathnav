//
// Created by loicp on 24/08/2026.
//

#pragma once

class Vector3 {
public:
    Vector3() : x_(0.0), y_(0.0), z_(0.0) {
    }

    Vector3(double x, double y, double z) : x_(x), y_(y), z_(z) {
    }

    [[nodiscard]] double x() const { return x_; }
    [[nodiscard]] double y() const { return y_; };
    [[nodiscard]] double z() const { return z_; };

    Vector3 operator+(const Vector3 &other) const {
        return {
            x_ + other.x_,
            y_ + other.y_,
            z_ + other.z_
        };
    }

    Vector3 operator-(const Vector3 &other) const {
        return {
            x_ - other.x_,
            y_ - other.y_,
            z_ - other.z_
        };
    }

    Vector3 operator*(double scalar) const {
        return {
            x_ * scalar,
            y_ * scalar,
            z_ * scalar
        };
    }

private:
    double x_;
    double y_;
    double z_;
};
