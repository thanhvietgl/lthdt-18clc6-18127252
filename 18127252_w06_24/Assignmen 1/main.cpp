#include "Header.h"
#include "CongTy.h"
#include "NhanVien.h"
#include "NVQuanLi.h"
#include "NVSanXuat.h"

void main()
{
	CongTy a;
	a.NhapDS();
	cout << setprecision(2) << fixed << "Tong tien luong cua cac nhan vien: " << a.TinhTongLuong() << endl;
	NhanVien* p = NULL;
	 p = a.LuongCaoNhat();
	 cout << "Nguoi co luong cao nhat la: " << endl;
	p->Xuat();
	cout << "\nSo nhan vien san xuat la: " << a.soLuongNVSX() << endl;
	cout << "\nSo nhan vien quan li la: " << a.soLuongNVQL() << endl;
	cout << setprecision(2) << fixed << "\nLuong trung binh cua cac nhan vien trong cong ty la: " << a.tinhLuongTrungBinh() << endl;
	cout << setprecision(2) << fixed << "\nCac nhan vien co luong it hon 3.000.000 la: " <<  endl;
	a.lietKeLuongIt();
	a.timNhanVien_maNV();
	a.timNhaVien_ten();
	
	_getch();
}