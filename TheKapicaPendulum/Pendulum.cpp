#include <cmath>
#include "RKMethod.h"

#pragma once

using namespace std;

class Pendulum : public RKMethod {
    double a, l, nu, m;
    double x, y;
    const double g = 9.81;

public:
    Pendulum(double m, double nu, double a, double l) : RKMethod(2) {
        this->a = a;
        this->l = l;
        this->m = m;
        this->nu =nu;

        std::vector<double> Y0(2);
        Y0[0] = 0;
        Y0[1] = 0;

        SetInit(0, Y0);
    }

    std::vector<double> F(double time, std::vector<double> &coordinates)
    {
        // Phi - Y[0], p - Y[1]
        // dPhi/dt - FY[0] , dp/dt - FY[1]

        FY[0] = Y[1];
        FY[1] = -(a*nu*nu*cos(nu*time)+g)*sin(Y[0])/l;

        return FY;
    }

    void Step()
    {
        NextStep(0.01);

        x =  l*sin(Y[0]);
        y = -l*cos(Y[0]) - a*cos(nu*t);
    }

    double get_x() {return x;}
    double get_y() {return y;}
};
