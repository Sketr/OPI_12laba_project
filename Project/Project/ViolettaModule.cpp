#include <iostream>

using namespace std;

inline int bit_calculator()
{
    setlocale(LC_ALL, "Rus");
    int number, buf;
    char tmp[33];
    cout << "������� �����\n";
    cin >> number;
    buf = number;

    cout << buf << " � ������������:   " << oct << number << '\n';
    cout << dec << buf << " � ����������: " << dec << number << '\n';
    cout << dec << buf << " � ���������������: " << hex << number << '\n';
    _itoa_s(number, tmp, 2);
    cout << dec << buf << " � ��������:  " << tmp << '\n';
    return 0;

}
