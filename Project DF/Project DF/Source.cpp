#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int g, p, a, b;
	cout << "������� g: ";
	cin >> g;
	cout << "\n";
	cout << "������� p: ";
	cin >> p;
	cout << "\n";
	cout << "������� a: ";
	cin >> a;
	cout << "\n";
	cout << "������� b: ";
	cin >> b;
	cout << "\n";
	int A = fmod(pow(g, a), p);
	int B = fmod(pow(g, b), p);
	int s_Alice = fmod(pow(B, a), p);
	int s_Bob = fmod(pow(A, b), p);
	if (s_Alice == s_Bob) {
		cout << "��������� ����: " << s_Alice << endl;
	}
	else {
		cout << "������:����� �� ���������" << endl;
	}
	return 0;
}