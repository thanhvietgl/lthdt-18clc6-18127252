#include "TruongHoc.h"

void main()
{
	TruongHoc a;
	a.NhapDS();
	a.XuatDS();

	cout <<setprecision(2)<<fixed<< "Tong luong cua cac Giao Vien la: " << a.tongLuong() << endl;
	cout << endl;
	a.luongCaoNhat(); 
	cout << endl;

	a.phanLoaiGV();
	cout << endl;
	cout << setprecision(2) << fixed << "Luong trung binh cua cac Giao Vien la: " << a.tinhLuongTB() << endl;
	cout << endl;
	a.GV_luongIt();
	cout << endl;
	a.timGV_ma();
	a.timGV_ten();
	a.nghiNhieu();
	_getch();

}