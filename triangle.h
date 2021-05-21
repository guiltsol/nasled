#pragma once
#include "figure.h"
#include <math.h>
class triangle :public figure {
protected:
	double a, b, c;
public:
	triangle(double _a, double _b, double _c, int _color) :figure(_color),a(_a),b(_b),c(_c) {}
	double per() {
		return (a + b + c);
	}
	double area() {
		double p = (per() / 2);
		return sqrt(p * (p - a) * (p - b) * (p - c));
	}
};
