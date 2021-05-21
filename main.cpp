#include "figure.h"
#include <iostream>
#include "rect.h"
#include "ravnb triangle.h"
#include "square.h"
#include "triangle.h"
void main() {
	const int size =3;
	figure* mas[size];
	mas[0] = new triangle(6, 8, 10, 0);
	mas[1] = new rect(5, 10, 0);
	mas[2] = new square(3, 0);
	mas[3] = new ravnbT(3, 0);
	for (int i = 0;i <= size;i++) {
		if (i == 0) {
			cout << "Triangle" << endl;
			cout << "S = " << mas[i]->area() << "\n";
			cout << "P = " << mas[i]->per() << "\n";
		}
		if (i == 1) {
			cout << "Rect" << endl;
			cout << "S = " << mas[i]->area() << "\n";
			cout << "P = " << mas[i]->per() << "\n";
		}
		if (i == 2) {
			cout << "Square" << endl;
			cout << "S = " << mas[i]->area() << "\n";
			cout << "P = " << mas[i]->per() << "\n";
		}
		if (i == 3) {
			cout << "Ravnb Triangle" << endl;
			cout << "S = " << mas[i]->area() << "\n";
			cout << "P = " << mas[i]->per() << "\n";
		}
	}
	for (int i = 0;i <= size;i++) {
		delete[] mas[i];
	}
	delete[] mas;

}
