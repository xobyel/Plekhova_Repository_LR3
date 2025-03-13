#include <iostream>
#include <cmath>

using namespace std;

// Прототипы функций
void inputX(double &x);
void inputY(double &y);
void inputZ(double &z);
void findFractionalPart(double x, double y, double z);
void roundSum(double x, double y, double z);

int main() {
    double x = 0.0, y = 0.0, z = 0.0;
    int choice;

    while (true) {
        cout << "Меню:" << endl;
        cout << "1. Ввести вещественное число x" << endl;
        cout << "2. Ввести вещественное число y" << endl;
        cout << "3. Ввести вещественное число z" << endl;
        cout << "4. Найти дробную часть суммы этих 3-х чисел" << endl;
        cout << "5. Округлить до ближайшего целого сумму этих 3-х чисел" << endl;
        cout << "6. Выход" << endl;
        cout << "Выберите пункт меню: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inputX(x);
                break;
            case 2:
                inputY(y);
                break;
            case 3:
                inputZ(z);
                break;
            case 4:
                findFractionalPart(x, y, z);
                break;
            case 5:
                roundSum(x, y, z);
                break;
            case 6:
                cout << "Выход из программы." << endl;
                return 0;
            default:
                cout << "Неверный выбор. Попробуйте снова." << endl;
        }
    }

    return 0;
}

// Функции, которые нужно будет реализовать
void inputX(double &x) {
    // Реализация ввода x
    cout << "Введите вещественное число x: ";
    cin >> x;
}

void inputY(double &y) {
    // Реализация ввода y
    cout << "Введите вещественное число y: ";
    cin >> y;
}

void inputZ(double &z) {
    // Реализация ввода z
    cout << "Введите вещественное число z: ";
    cin >> z;
}

void findFractionalPart(double x, double y, double z) {
    // Реализация нахождения дробной части суммы x, y, z
    double sum = x + y + z;
    double fractionalPart = sum - static_cast<int>(sum);
    cout << "Дробная часть суммы: " << fractionalPart << endl;
}

void roundSum(double x, double y, double z) {
    // Реализация округления суммы x, y, z до ближайшего целого
    double sum = x + y + z;
    int roundedSum = static_cast<int>(round(sum));
    cout << "Округленная сумма: " << roundedSum << endl;
}