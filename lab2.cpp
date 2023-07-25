#include <iostream>
#include<cmath>
using namespace std;

void TichTong(int hang_chuc, int hang_dv) {
    int tich = 0, tong = 0;
   for (int i = 10; i <= 99; i++) {
    	cout << "Nhap cac so nguyen co hai chu so: ";
        cin >> i;
        hang_chuc = i / 10;
        hang_dv = i % 10;
        tich = hang_chuc * hang_dv;
        tong = 2 * (hang_chuc + hang_dv);
        break;    
    }
}
bool checkNT(int n)
{
    if(n<2) return false;
    int sq = sqrt(n);
    for(int i=2;i <=sq ;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

char *chuyenDoiNhiPhan(int n){
   char bit[50] = "00000000";
    int i = 7;
    while(n > 0){
        bit[i] = (n%2)+48;
        i--;
        n = n/2;
    }
    return bit;
}

void dao(int& hang_chuc, int& hang_dv) {
    int temp = hang_chuc;
    hang_chuc = hang_dv;
    hang_dv = temp;
}
int DemTong(int b){
    int sum =0, coun =0;
    while(b != 0) {
        sum += (b%10);
        coun++;
        b /=10;
    }
    cout << "So luong cac chu so la: " << coun << "Tong la: " << sum;
    
    return 0;
}

int TienCuoc(double Start, double end) {
    double Tong = end - Start;
    double Tien;
    if(Start >= 7 && end <= 17){
        if(Tong < 6){
          Tien = Tong * 24000;   
        }
        else{
            Tien = (Tong * 24000)*0.1;
        }
    } else if (Start >= 17 && end <= 24){
        if(Tong < 4){
          Tien = Tong * 21000;   
        }
        else{
            Tien = (Tong * 21000)*0.12;
        }
    } else {
        if(Tong < 7){
          Tien = Tong * 18000;   
        }
        else{
            Tien = (Tong * 18000)*0.12;
        }
    }
    
    return Tien;
}

void tienPhong(char phong, int ngay){
	if (phong =='A'){
	}else if ( ngay> 12){
	tienPhong = ngay *250000*0.1;}
	else {
	tienPhong = ngay*250000
	}
	
	if(phong=='B'){
	else if(ngay>12)
	tienPhong = ngay*200,000*0.08;
	}else{
		tienPhong = ngay *200000
	}
	
	if (phong == 'C')
	else if (ngay >12)
	tienPhong = ngay*150000*0.08;
	else{
		tienPhong = ngay*150000
	}
	return tienPhong;
} 


int TBC (int To, int Ly, int Ho){
    int TBC = (To+Ly+Hoa)/3;
    switch(TBC){
        case 10:
        case 9:
            cout << "Xuat sac.";
            break;
        case 8:
            cout << "Gioi.";
            break;
        case 7:
        case 6:
            cout << "Kha.";
            break;
        case 5:
            cout << "Trung binh.";
            break;
        case 4:
        case 3:
            cout << "Yeu.";
            break;
         case 2:
        case 1:
        case 0:
            cout << "Kem.";
            break;
    }
    
    return 0;
    
}

int NgayThang(int Ngay, int Thang){
    if(Thang == 1 || Thang == 3 ||Thang == 5 ||Thang == 7 ||Thang == 8 ||Thang == 10 ||Thang == 12){
        if(Thang != 3){
            cout << "Thang " << Thang << " co 31 ngay" << endl; 
            cout << "Thang tiep theo " << Thang+1 << " co 30 ngay"<< endl;
            cout << "Thang truoc " << Thang-1 << " co 30 ngay"<< endl;
        }else {
            cout << "Thang " << Thang << " co 31 ngay"<< endl; 
            cout << "Thang tiep theo " << Thang+1 << " co 30 ngay"<< endl;
            cout << "Thang truoc " << Thang-1 << " co 28 ngày"<< endl;
        }
     }else if(Thang == 2){
        cout << "Thang " << Thang << " co 28 ngay"<< endl; 
        cout << "Thang tiep theo " << Thang+1 << " co 30 ngay"<< endl;
        cout << "Thang truoc " << Thang-1 << " có 30 ngay"<< endl;
    } else {
        cout << "Thang " << Thang << " có 30 ngay"<< endl; 
        cout << "Thang tiep theo " << Thang+1 << " co 31 ngay"<< endl;
        cout << "Thang truoc " << Thang-1 << " có 31 ngay"<< endl;
    }
    
    return 0;
}

int main (){
	int chon;
	cout << "Nhap so cau ban muon xem: "; cin >> chon;
	
	switch(chon) {
		case 1:
		    int n;
		    cout << "Nhap so nguyen: "; cin >> n;
			cout <<  TichTong(hang_chuc, hang_dv);<< endl;
			break;
		case 2:
		    int k;
		    cout << "Nhap so nguyen: "; cin >> k;
		    checkNT(i);
		    break;
		case 3:
		    xuatMa();
		    break;
		case 4:
		    int a;
		    cout << "Nhap so nguyen: "; cin >> a;
		    dao(a);
		    break;
		case 5:
		    int b;
		    cout << "Nhap so nguyen: "; cin >> b;
		    DemTong(b);
		    break;
		case 6:
		    int x, z;
		    cout << "Nhap gio bat dau: "; cin >> x;
		    cout << "Nhap gio ket thuc: "; cin >> z;
		    cout << "So tien tra la: " << TienCuoc(x,z);
		    break;
		case 7:
		    char phong;
		    int ngay;
		    cout << "Nhap phong: "; cin >> phong;
		    cout << "Nhap so ngay o: "; cin >> ngay;
		    cout << "So tien tra la: " << tienPhong(phong, ngay);
		    break;
		case 8:
		    int ngay, Thang;
		    do {
		        cout << "Nhap thang: "; cin >> Thang;
		        if(Thang <= 0 || Thang > 12){
		            cout << "Ngay khong hop le.";
		        }
		    } while(Thang <= 0 || Thang > 12);
		    do {
		        cout << "Nhap ngay: "; cin >> ngay;
		        if(ngay < 0 || ngay > 31 && Thang == 1 || Thang == 3 ||Thang == 5 ||Thang == 7 ||Thang == 8 ||Thang == 10 ||Thang == 12){
		            cout << "Ngay khong hop le.";
		        }
		    } while(ngay < 0 || ngay > 31 && Thang == 1 || Thang == 3 ||Thang == 5 ||Thang == 7 ||Thang == 8 ||Thang == 10 ||Thang == 12);
		    NgayThang(ngay,Thang);
		    break;
	    case 9:
	        int Toan, Ly, Hoa;
	        cout << "Nhap diem mon toan: "; cin >> Toan;
	        cout << "Nhap diem mon ly: "; cin >> Ly;
	        cout << "Nhap diem mon hoa: "; cin >> Hoa;
	        cout << "Loai la: " << TBC(Toan,Ly,Hoa);
	        break;
	}

    
