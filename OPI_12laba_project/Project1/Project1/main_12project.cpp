#include<iostream>
#include"Header.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    while (true) {
        cout << "1 - ������ �����" << endl;
        cout << "2 - ������" << endl;
        cout << "3 - ���������� ������� �� �������� ����." << endl;
        cout << "4 - ������������� ����������� ����� � �������� ����������: ��������, ������������, ����������, �����������������." << endl;
        cout << "5 - ����� �� ���������." << endl;

        int choice;
        cin >> choice;

        switch (choice) {
        case 1:
            GuessTheNumber();
            cout << endl;
            break;
        case 2:
            Timer();
            cout << endl;
            break;
        case 3:
            tablelist();
            cout << endl;
            break;
        case 4:
            bit_calculator();
            cout << endl;
            break;
        case 5:
            cout << "����� �� ���������." << endl;
            return 0;
        default:
            cout << "��������� ����" << endl;
            break;
        }
    }

    return 0;
}
