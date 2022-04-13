#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	system("chcp 1251>nul");
	
	const double kmInMile = 1.609344;

	double distKm,distMile;

	cout << "Укажите расстояние в милях: ";

	cin >> distMile;

	distKm = distMile * kmInMile;
	
	cout << "Расстояние в км: " << distKm << endl;

	system("pause>nul");
	return 0;
}