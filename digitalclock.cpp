#include <iostream>
#include "Windows.h"

using namespace std;

int main() {
	int st = 0, dk = 0, sn = 0;

	while (true) {
		system("cls");
		cout << "*************" << endl;
		cout << " " << st << " : " << dk << " : " << sn << endl;
		cout << "*************" << endl;
		sn++;

		if (sn == 60) {
			dk++;
			sn = 0;

			if (dk == 60) {
				st++;
				dk = 0;

				if (st == 60) {
					st = 0;
					break;
				}
			}
		}
		Sleep(1000);
	}

	return 0;
}