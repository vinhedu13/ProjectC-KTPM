#include <iostream>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

// Hàm kiểm tra năm nhuận
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Hàm hiển thị menu
void showMenu() {
    cout << "\n=== MENU ===" << endl;
    cout << "1. Kiem tra so nguyen to" << endl;
    cout << "2. Kiem tra nam nhuan" << endl;
    cout << "3. Thoat chuong trinh" << endl;
    cout << "Chon chuc nang (1-3): ";
}

int main() {
    int choice;
    do {
        showMenu();
        cin >> choice;

        switch (choice) {
        case 1: {
            int number;
            cout << "Nhap mot so nguyen duong: ";
            cin >> number;

            while (number <= 0) {
                cout << "Vui long nhap so nguyen duong: ";
                cin >> number;
            }

            if (isPrime(number)) {
                cout << number << " la so nguyen to!" << endl;
            }
            else {
                cout << number << " khong phai la so nguyen to!" << endl;
            }
            break;
        }
        case 2: {
            int year;
            cout << "Nhap mot nam: ";
            cin >> year;

            while (year <= 0) {
                cout << "Vui long nhap nam duong lich (lon hon 0): ";
                cin >> year;
            }

            if (isLeapYear(year)) {
                cout << year << " la nam nhuan!" << endl;
            }
            else {
                cout << year << " khong phai la nam nhuan!" << endl;
            }
            break;
        }
        case 3:
            cout << "Tam biet!" << endl;
            break;
        default:
            cout << "Lua chon khong hop le! Vui long chon lai." << endl;
        }
    } while (choice != 3);

    return 0;
}