#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

// Функція для перевірки попадання в область
bool isInArea(double x, double y, double R) {
    // Перевірка попадання в півколо (зліва)
    if (x <= 0 && y >= 0 && sqrt(x * x + y * y) <= R) {
        return true;
    }
    // Перевірка попадання в нижню чверть кола (праворуч)
    if (x >= 0 && y <= 0 && (x * x + y * y <= R * R)) {
        return true;
    }
    return false;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double R;
    cout << "Введіть значення радіусу R: ";
    cin >> R;

    // Перший спосіб: введення координат вручну
    cout << "\nПерший спосіб: Введіть 10 координат (x, y)\n";
    for (int i = 0; i < 10; ++i) {
        double x, y;
        cout << "Координати пострілу " << i + 1 << " (x y): ";
        cin >> x >> y;

        if (isInArea(x, y, R)) {
            cout << "Постріл " << i + 1 << ": Влучили в мішень!" << endl;
        }
        else {
            cout << "Постріл " << i + 1 << ": Не влучили." << endl;
        }
    }

    return 0;
}
