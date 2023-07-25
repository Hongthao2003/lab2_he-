#include <iostream>
#include <cmath>
using namespace std;

void TichTong(int hang_chuc, int hang_dv) {
    int tich = 0, tong = 0;
    cout << "Nhap so nguyen co hai chu so: ";
    cin >> hang_chuc >> hang_dv;
    tich = hang_chuc * hang_dv;
    tong = 2 * (hang_chuc + hang_dv);
    cout << "Tich: " << tich << endl;
    cout << "Tong: " << tong << endl;
}

bool checkNT(int n) {
    if (n < 2) return false;
    int sq = sqrt(n);
    for (int i = 2; i <= sq; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

char* chuyenDoiNhiPhan(int n) {
    static char bit[50] = "00000000";
    int i = 7;
    while (n > 0) {
        bit[i] = (n % 2) + 48;
        i--;
        n = n / 2;
    }
    return bit;
}

void dao(int& hang_chuc, int& hang_dv) {
    int temp = hang_chuc;
    hang_chuc = hang_dv;
    hang_dv = temp;
}

int DemTong(int b) {
    int sum = 0, count = 0;
    while (b != 0) {
        sum += (b % 10);
        count++;
        b /= 10;
    }
    cout << "So luong cac chu so la: " << count << " Tong la: " << sum << endl;
    return 0;
}

double TienCuoc(double Start, double end) {
    double Tong = end - Start;
    double Tien;
    if (Start >= 7 && end <= 17) {
        if (Tong < 6) {
            Tien = Tong * 24000;
        } else {
            Tien = (Tong * 24000) * 0.1;
        }
    } else if (Start >= 17 && end <= 24) {
        if (Tong < 4) {
            Tien = Tong * 21000;
        } else {
            Tien = (Tong * 21000) * 0.12;
        }
    } else {
        if (Tong < 7) {
            Tien = Tong * 18000;
        } else {
            Tien = (Tong * 18000) * 0.12;
        }
    }

    return Tien;
}

double tienPhong(char phong, int ngay) {
    double tienPhong;
    if (phong == 'A') {
        tienPhong = ngay * 250000;
    } else if (phong == 'B') {
        if (ngay > 12)
            tienPhong = ngay * 200000 * 0.08;
        else
            tienPhong = ngay * 200000;
    } else if (phong == 'C') {
        if (ngay > 12)
            tienPhong = ngay * 150000 * 0.08;
        else
            tienPhong = ngay * 150000;
    }
    return tienPhong;
}

int TBC(int To, int Ly, int Hoa) {
    int TBC = (To + Ly + Hoa) / 3;
    switch (TBC) {
        case 10:
        case 9:
            cout << "Xuat sac." << endl;
            break;
        case 8:
            cout << "Gioi." << endl;
            break;
        case 7:
        case 6:
            cout << "Kha." << endl;
            break;
        case 5:
            cout << "Trung binh." << endl;
            break;
        case 4:
        case 3:
            cout << "Yeu." << endl;
            break;
        case 2:
        case 1:
        case 0:
            cout << "Kem." << endl;
            break;
    }

    return 0;
}

void NgayThang(int ngay, int Thang) {
    if (Thang == 1 || Thang == 3 || Thang == 5 || Thang == 7 || Thang == 8 || Thang == 10 || Thang == 12) {
        if (Thang != 3) {
            cout << "Thang " << Thang << " co 31 ngay" << endl;
            cout << "Thang tiep theo " << Thang + 1 << " co 30 ngay" << endl;
            cout << "Thang truoc " << Thang - 1 << " co 30 ngay" << endl;
        } else {
            cout << "Thang " << Thang << " co 31 ngay" << endl;
            cout << "Thang tiep theo " << Thang + 1 << " co 30 ngay" << endl;
            cout << "Thang truoc " << Thang - 1 << " co 28 ng?y" << endl;
        }
    } else if (Thang == 2) {
        cout << "Thang " << Thang << " co 28 ngay" << endl;
        cout << "Thang tiep theo " << Thang + 1 << " co 30 ngay" << endl;
        cout << "Thang truoc " << Thang - 1 << " c? 30 ngay" << endl;
    } else {
        cout << "Thang " << Thang << " c? 30 ngay" << endl;
        cout << "Thang tiep theo " << Thang + 1 << " co 31 ngay" << endl;
        cout << "Thang truoc " << Thang - 1 << " c? 31 ngay" << endl;
    }
}

int main() {
    int chon;
    do {
        cout << "========== MENU ==========" << endl;
        cout << "1. Tinh tich va Tong" << endl;
        cout << "2. Kiem tra so nguyen to" << endl;
        cout << "3. Chuyen doi nhi phan" << endl;
        cout << "4. Dao vi tri" << endl;
        cout << "5. Dem tong" << endl;
        cout << "6. Tinh tien cuoc" << endl;
        cout << "7. Tinh tien phong" << endl;
        cout << "8. Tinh trung binh cong" << endl;
        cout << "9. Tinh ngay thang" << endl;
        cout << "0. Thoat" << endl;
        cout << "==========================" << endl;
        cout << "Nhap lua chon cua ban (0-9): ";
        cin >> chon;

        switch (chon) {
            case 1:
                int hang_chuc, hang_dv;
                TichTong(hang_chuc, hang_dv);
                break;
            case 2:
                int n;
                cout << "Nhap so nguyen: ";
                cin >> n;
                if (checkNT(n))
                    cout << "La so nguyen to." << endl;
                else
                    cout << "Khong la so nguyen to." << endl;
                break;
            case 3:
                int x;
                cout << "Nhap so nguyen: ";
                cin >> x;
                cout << "Ket qua nhi phan: " << chuyenDoiNhiPhan(x) << endl;
                break;
            case 4:
                int a, b;
                cout << "Nhap so nguyen: ";
                cin >> a;
                cout << "Nhap so nguyen thu hai: ";
                cin >> b;
                dao(a, b);
                cout << "Ket qua sau khi dao: " << a << " " << b << endl;
                break;
            case 5:
                int inputB;
                cout << "Nhap so nguyen: ";
                cin >> inputB;
                DemTong(inputB);
                break;
            case 6:
                double Start, end;
                cout << "Nhap gio bat dau: ";
                cin >> Start;
                cout << "Nhap gio ket thuc: ";
                cin >> end;
                cout << "So tien tra la: " << TienCuoc(Start, end) << endl;
                break;
            case 7:
                char phong;
                int ngay;
                cout << "Nhap phong: ";
                cin >> phong;
                cout << "Nhap so ngay o: ";
                cin >> ngay;
                cout << "So tien tra la: " << tienPhong(phong, ngay) << endl;
                break;
            case 8:
                int inputNgay, Thang;
                do {
                    cout << "Nhap thang: ";
                    cin >> Thang;
                    if (Thang <= 0 || Thang > 12) {
                        cout << "Ngay khong hop le." << endl;
                    }
                } while (Thang <= 0 || Thang > 12);
                do {
                    cout << "Nhap ngay: ";
                    cin >> inputNgay;
                    if (inputNgay < 0 || inputNgay > 31 && Thang == 1 || Thang == 3 || Thang == 5 || Thang == 7 || Thang == 8 || Thang == 10 || Thang == 12) {
                        cout << "Ngay khong hop le." << endl;
                    }
                } while (inputNgay < 0 || inputNgay > 31 && Thang == 1 || Thang == 3 || Thang == 5 || Thang == 7 || Thang == 8 || Thang == 10 || Thang == 12);
                NgayThang(inputNgay, Thang);
                break;
            case 9:
                int Toan, Ly, Hoa;
                cout << "Nhap diem mon toan: ";
                cin >> Toan;
                cout << "Nhap diem mon ly: ";
                cin >> Ly;
                cout << "Nhap diem mon hoa: ";
                cin >> Hoa;
                cout << "Loai la: ";
                TBC(Toan, Ly, Hoa);
                break;
            case 0:
                cout << "Thoat chuong trinh. Tam biet!" << endl;
                break;
            default:
                cout << "Lua chon khong hop le. Moi nhap lai." << endl;
                break;
        }

        cout << endl;
    } while (chon != 0);

    return 0;
}
