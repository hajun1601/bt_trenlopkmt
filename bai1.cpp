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
    string getTenNhanKhau() {
        return tenNhanKhau;
    }

    string getGioiTinhNhanKhau() {
        return gioiTinhNhanKhau;
    }

    int getNamSinhNhanKhau() {
        return namSinhNhanKhau;
    }

    string getMoiQuanHe() {
        return moiQuanHe;
    }
};
int main() {

    vector<NHANKHAU> ds;

    int n;

    cout << "Nhap so luong nhan khau: ";
    cin >> n;

    // =======================
    // 1. NHAP DANH SACH
    // =======================

    for (int i = 0; i < n; i++) {

        cout << "\n========== NHAN KHAU " << i + 1
             << " ==========\n";

        NHANKHAU nk;

        nk.nhapNhanKhau();

        ds.push_back(nk);
    }


    // =======================
    // IN DANH SACH
    // =======================

    cout << "\n\n===== DANH SACH NHAN KHAU =====\n";

    for (int i = 0; i < ds.size(); i++) {
        ds[i].xuatNhanKhau();
    }


    // =======================
    // 2. CHU HO CO NHAN KHAU LA SINH VIEN
    // =======================

    cout << "\n\n===== CHU HO CO NHAN KHAU LA SINH VIEN =====\n";

    for (int i = 0; i < ds.size(); i++) {

        if (ds[i].getNgheNghiep() == "Sinh vien") {

            cout << "Ma chu ho: "
                 << ds[i].getMaChuHo() << endl;

            cout << "Ten chu ho: "
                 << ds[i].getTenChuHo() << endl;

            cout << "Nhan khau: "
                 << ds[i].getTenNhanKhau() << endl;

            cout << "-------------------------\n";
        }
    }


    // =======================
    // 3. TONG SO NHAN KHAU
    //    O PHUONG PHAN DINH PHUNG
    // =======================

    int tong = 0;

    for (int i = 0; i < ds.size(); i++) {

        if (ds[i].getDiaChi() == "Phan Dinh Phung") {
            tong++;
        }
    }

    cout << "\n===== THONG KE =====\n";

    cout << "Tong so nhan khau o phuong "
         << "Phan Dinh Phung: "
         << tong << endl;


    // =======================
    // 4. CHU HO NAM > 60 TUOI
    // =======================

    int namHienTai = 2026;

    cout << "\n===== CHU HO NAM TREN 60 TUOI =====\n";

    for (int i = 0; i < ds.size(); i++) {

        int tuoi = namHienTai - ds[i].getNamSinh();

        if (ds[i].getGioiTinh() == "Nam"
            && tuoi > 60) {

            cout << "Ma chu ho: "
                 << ds[i].getMaChuHo() << endl;

            cout << "Ten chu ho: "
                 << ds[i].getTenChuHo() << endl;

            cout << "Tuoi: "
                 << tuoi << endl;

            cout << "-------------------------\n";
        }
    }


    // =======================
    // 5. TIM CHU HO LON TUOI NHAT
    // =======================

    int viTriLonNhat = 0;

    for (int i = 1; i < ds.size(); i++) {

        if (ds[i].getNamSinh()
            < ds[viTriLonNhat].getNamSinh()) {

            viTriLonNhat = i;
        }
    }

    cout << "\n===== CHU HO LON TUOI NHAT =====\n";

    cout << "Ma chu ho: "
         << ds[viTriLonNhat].getMaChuHo() << endl;

    cout << "Ten chu ho: "
         << ds[viTriLonNhat].getTenChuHo() << endl;

    cout << "Nam sinh: "
         << ds[viTriLonNhat].getNamSinh() << endl;

    cout << "Tuoi: "
         << namHienTai
            - ds[viTriLonNhat].getNamSinh()
         << endl;

    return 0;
}