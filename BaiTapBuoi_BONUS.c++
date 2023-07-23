#include <iostream>
#include <string>
using namespace std;

// Bài tập 1: Xuất thông tin sinh viên
void printStudentInfo() {
    string fullName, studentID, className, phoneNumber, gender;
    cout << "Ho ten: ";
    getline(cin, fullName);
    cout << "Ma so sinh vien: ";
    getline(cin, studentID);
    cout << "Lop: ";
    getline(cin, className);
    cout << "So dien thoai: ";
    getline(cin, phoneNumber);
    cout << "Gioi tinh: ";
    getline(cin, gender);

    cout << "Ho ten: " << fullName << endl;
    cout << "Ma so sinh vien: " << studentID << endl;
    cout << "Lop: " << className << endl;
    cout << "So dien thoai: " << phoneNumber << endl;
    cout << "Gioi tinh: " << gender << endl;
}

// Bài tập 2: Xuất thông tin sinh viên và điểm
void printStudentScore() {
    string studentID, fullName, className, major;
    int year;
    cout << "Nhap ma so sinh vien: ";
    getline(cin, studentID);
    cout << "Nhap ho va ten: ";
    getline(cin, fullName);
    cout << "Nhap lop: ";
    getline(cin, className);
    cout << "Nhap khoa: ";
    getline(cin, major);
    cout << "Nhap nam hoc: ";
    cin >> year;

    cout << "***BAI TAP THUC HANH MON LAP TRINH C***" << endl;
    cout << "*****TUAN 1*****" << endl;
    cout << "MSSV: " << studentID << endl;
    cout << "Ho va ten: " << fullName << endl;
    cout << "Lop: " << className << endl;
    cout << "Khoa: " << major << endl;
    cout << "Nam hoc: " << year << " - " << year + 1 << endl;
    cout << "***BANG DIEM ***" << endl;

    int sumScore = 0;
    int score;
    for (int i = 1; i <= 5; i++) {
        cout << "Mon " << i << ": ";
        cin >> score;
        sumScore += score;
    }

    float avgScore = static_cast<float>(sumScore) / 5;
    cout << "Diem TB: " << avgScore << endl;
}

// Bài tập 3: Chia lấy phần nguyên và phần dư
void divideAndModulo() {
    int a, b;
    cout << "Nhap hai so nguyen duong a va b: ";
    cin >> a >> b;

    int quotient = a / b;
    int remainder = a % b;

    cout << "Ket qua chia lay phan nguyen: " << quotient << endl;
    cout << "Ket qua chia lay phan du: " << remainder << endl;
}

// Bài tập 4: Tính tổng các chữ số của số N
void sumOfDigits() {
    int N;
    cout << "Nhap mot so nguyen duong co 2 chu so: ";
    cin >> N;

    int tensDigit = N / 10;
    int onesDigit = N % 10;

    int sum = tensDigit + onesDigit;

    cout << "Tong cac chu so cua " << N << " la: " << tensDigit << " + " << onesDigit << " = " << sum << endl;
}

int main() {
    int choice;
    do {
        cout << "======================================" << endl;
        cout << "Menu: " << endl;
        cout << "1. Bai tap 1: Xuat thong tin sinh vien." << endl;
        cout << "2. Bai tap 2: Xuat thong tin sinh vien va diem." << endl;
        cout << "3. Bai tap 3: Chia lay phan nguyen va phan du." << endl;
        cout << "4. Bai tap 4: Tinh tong cac chu so cua so nguyen duong." << endl;
        cout << "0. Thoat chuong trinh." << endl;
        cout << "======================================" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;
        cin.ignore(); // Loai bo ky tu newline trong buffer

        switch (choice) {
            case 1:
                printStudentInfo();
                break;
            case 2:
                printStudentScore();
                break;
            case 3:
                divideAndModulo();
                break;
            case 4:
                sumOfDigits();
                break;
            case 0:
                cout << "Ket thuc chuong trinh." << endl;
                break;
            default:
                cout << "Lua chon khong hop le. Vui long chon lai." << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}
