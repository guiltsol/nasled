#pragma once
#include <iostream> 
using namespace std;
class figure {
	int color;
public:
	virtual double area() = 0;
	virtual double per() = 0;
	figure(int _c = 0) { color = _c; }
	
};
