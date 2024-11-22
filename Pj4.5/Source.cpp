#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

// ������� ��� �������� ��������� � �������
bool isInArea(double x, double y, double R) {
    // �������� ��������� � ������ (����)
    if (x <= 0 && y >= 0 && sqrt(x * x + y * y) <= R) {
        return true;
    }
    // �������� ��������� � ����� ������ ���� (��������)
    if (x >= 0 && y <= 0 && (x * x + y * y <= R * R)) {
        return true;
    }
    return false;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double R;
    cout << "������ �������� ������ R: ";
    cin >> R;

    // ������ �����: �������� ��������� ������
    cout << "\n������ �����: ������ 10 ��������� (x, y)\n";
    for (int i = 0; i < 10; ++i) {
        double x, y;
        cout << "���������� ������� " << i + 1 << " (x y): ";
        cin >> x >> y;

        if (isInArea(x, y, R)) {
            cout << "������ " << i + 1 << ": ������� � �����!" << endl;
        }
        else {
            cout << "������ " << i + 1 << ": �� �������." << endl;
        }
    }

    return 0;
}
