#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	float a;//����� 1
	float b; // ����� 2
	float S; // ����� ������������ ����������
	cout << "������ �����= "; cin >> a;
	cout << "������ �����= "; cin >> b;
	S = 1./2 * a * b; // ���������� ����� ����������
	cout << "����� = " << S;
	return 0;
}