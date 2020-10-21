#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	float a;//катет 1
	float b; // катет 2
	float S; // площа прямокутного трикутника
	cout << "перший катет= "; cin >> a;
	cout << "Другий катет= "; cin >> b;
	S = 1./2 * a * b; // обчислення площі трикутника
	cout << "Площа = " << S;
	return 0;
}