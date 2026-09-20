#include <iostream>
using namespace std;
int main() {
	double roomWidth, roomLength, roomArea;
	double tileSquareFeet, numOfTiles;
	cout << "\n Please enter the room width in feet : ";
	cin >> roomWidth;
	cout << "\n Please enter the room length in feet: ";
	cin >> roomLength;
	roomArea = roomWidth * roomLength;
	cout << "\n The area of the room = " << roomArea << " square feet";
	tileSquareFeet = (6.0 / 12) * (6 / 12.0);
	numOfTiles = roomArea / tileSquareFeet;
	cout << "\n the number of 6-inch square tiles needed to tile the
		floor: "<< numOfTiles;
		return 0;
}
