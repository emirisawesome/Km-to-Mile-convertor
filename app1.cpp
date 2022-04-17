#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	system("chcp 1251>nul");
	
	const int ftInMile = 5280;
	const double kmInMile = 1.609344;

	int dMile, dFt, dKm, dM;

	cout << "Расстояние в милях и футах:" << endl;
	cout << "Мили: ";
	cin >> dMile;
	cout << "Футы: ";
	cin >> dFt;

	double distMile = dMile + (double)dFt / ftInMile;
	double distKm = distMile * kmInMile;

	dKm = (int)distKm;
	dM = (int)((distKm - dKm) * 1000);

	cout << "расстояние в километрах и метрах. " << endl;

	cout << "километры: " << dKm << endl;
	cout << "метры: " << dM << endl;

	system("pause>nul");
	return 0;
}