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

// Hàm hiển thị menu
void showMenu() {
    cout << "\n=== MENU ===" << endl;
    cout << "1. Kiem tra so nguyen to" << endl;
    cout << "2. Thoat chuong trinh" << endl;
    cout << "Chon chuc nang (1-2): ";
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
        case 2:
            cout << "Tam biet!" << endl;
            break;
        default:
            cout << "Lua chon khong hop le! Vui long chon lai." << endl;
        }
    } while (choice != 2);

    return 0;
}