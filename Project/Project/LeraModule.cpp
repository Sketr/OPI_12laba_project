#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    double num = 100, k = 1;
    srand(time(0));
    int my = rand() % 100 + 1;

    cout << "������������! �� ������� � ���� ������� �����. ����� �� 0 �� 100\n";
    cout << "�������� ����� - ������� �����\n";

    while (num != my && num != 0) {// ������ �����, ������� �����������, ���� num �� ����� ����������� ����� � �� ����� 0
        cin >> num;

        if (num == my) {
            cout << "�� ��������!\n�� �������� ����� �� " << k << " �������\n";
        }
        else {
            if (num > my)
                cout << "���� ����� ������ �����������\n";
            if (num < my)
                cout << "���� ����� ������ �����������\n";
            k++;
        }

        if (num == 0)
            cout << "�� ��������\n";
    }

    system("pause");
    return 0;
}