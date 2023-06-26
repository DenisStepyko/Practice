#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int g, p, a, b;
	cout << "Введите g: ";
	cin >> g;
	cout << "\n";
	cout << "Введите p: ";
	cin >> p;
	cout << "\n";
	cout << "Введите a: ";
	cin >> a;
	cout << "\n";
	cout << "Введите b: ";
	cin >> b;
	cout << "\n";
	int A = fmod(pow(g, a), p);
	int B = fmod(pow(g, b), p);
	int s_Alice = fmod(pow(B, a), p);
	int s_Bob = fmod(pow(A, b), p);
	if (s_Alice == s_Bob) {
		cout << "Секретный ключ: " << s_Alice << endl;
	}
	else {
		cout << "Ошибка:ключи не совпадают" << endl;
	}
	return 0;
}