#pragma once
#include "figure.h"
class rect :public figure {
protected:
	double a;
	double b;
public:
	rect(double _a, double _b, int _c) :figure(_c), a(_a), b(_b) {}
	double& geta() {
		return a;
	}
	double area() {
		return a * b;
	}
	double per() {
		return (a + b) * 2;
	}
};
