#include <iostream>
#include <string>
#include <vector>

using namespace std;

class CHUHO {
protected:
    string machuho, tenchuho, gioitinh, diachia, nghenghiep;
    int namsinh;

public:
    void nhapchuho(){
        cout << "Nhap ten ma chu ho: " << endl;
        cin >> machuho;
        cout << "Nhap ten chu ho: " << endl;
        cin >> tenchuho;
        cout << "Nhap gioi tinh: " << endl;
        cin >> gioitinh;
        cout << "Nhap dia chi: " << endl;
        cin >> diachia;
        cout << "Nhap nghe nghiep: " << endl;
        cin >> nghenghiep;
        cout << "Nhap nam sinh: " << endl;
        cin >> namsinh;
    }
    void xuatchuho(){
        cout << "Ma chu ho: " << machuho << endl;
        cout << "Ten chu ho: " << tenchuho << endl;
        cout << "Gioi tinh: " << gioitinh << endl;
        cout << "Dia chi: " << diachia << endl;
        cout << "Nghe nghiep: " << nghenghiep << endl;
        cout << "Nam sinh: " << namsinh << endl;
    }

}