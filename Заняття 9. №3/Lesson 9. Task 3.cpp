#include <iostream>;
#include "mylibrary.h";

using namespace std;

int main() {
		
//	Vector vector1(0,0,4,4);
//	Vector vector2(0,0,-4,-4);

	Vector vector1(0,0,2,2);
	Vector vector2(0,-2,2,0);

	cout << "Vector1 coordinates: " << endl; 
	cout << "xStar  yStart  xEnd  yEnd" << endl;
	for (int i = 0;i < 4;i++) {
		cout << vector1.getAddress()[i] << "      ";
	}
	cout << "\nVector2 coordinates: " << endl; 
	cout << "xStar  yStart  xEnd  yEnd" << endl;
	for (int i = 0;i < 4;i++) {
		cout << vector2.getAddress()[i] << "      ";
	}

	cout << "\nVector1 and Vector2 are " << (checkIfVectorsCollinear(vector1,vector2) ? "collinear" : "Not collinear");
	cout << "\nVector1 and Vector2 are " << (checkIfVectorsPerpendicular(vector1, vector2) ? "perpendicular" : "Not perpendicular");


	return 0;
}