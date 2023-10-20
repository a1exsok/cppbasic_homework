#pragma once
/*
9 | 3) Оголосити тип структури Vector для збереження координат
вектора на площині. Написати та протестувати функції для 
перевірки двох векторів на перпендикулярність та 
колінеарність..
*/

#include <iostream>

struct Vector {
private:
	float xStart, yStart, xEnd, yEnd;
	float * vectorPtr;

public:
	Vector(int _xStart, int _yStart, int _xEnd, int _yEnd) {
		xStart = _xStart;
		yStart = _yStart;
		xEnd = _xEnd;
		yEnd = _yEnd;
		vectorPtr = new float[4] {xStart, yStart, xEnd, yEnd};
	}

	float* getAddress() {
		return vectorPtr;
	}
};


bool checkIfVectorsCollinear(Vector v1, Vector v2) {
	// Formula: (x1-x2)(y3-y4) - (y1-y2)(x3-x4) == 0 ? "collinear" : "Not collinear"
	//			  firstPart    -   secondPart
	double firstPart = 0, secondPart = 0;
	firstPart = (v1.getAddress()[0] - v1.getAddress()[3]) * (v2.getAddress()[2] * v2.getAddress()[4]);
	secondPart = (v1.getAddress()[2] - v1.getAddress()[4]) * (v2.getAddress()[0] * v2.getAddress()[3]);
	return (firstPart - secondPart == 0) ? true : false;
}

bool checkIfVectorsPerpendicular(Vector v1, Vector v2) {
	int sum = 0;
	for (int i = 0;i < 4; i++) {
		sum += v1.getAddress()[i] * v2.getAddress()[i];
	}
	if (sum == 0) {
		return true;
	}
	return false;
}


