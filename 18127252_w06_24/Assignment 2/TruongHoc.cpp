#include "TruongHoc.h"

TruongHoc::TruongHoc()
{
	m_ten = " ";
}
void TruongHoc::NhapDS()
{
	int n;
	int type;
	GiaoVien* p;
	cout << "Nhap so luong Giao vien: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap thong tin Giao Vien thu " << i+1 << endl;
		cout << "Loai Giao Vien (1: GV; 2: GVCN): ";
		cin >> type;

		p = NULL;

		if (type == 1) {
			p = new GiaoVien;
		}
		else if (type == 2) {
			p = new GVCN;
		}

		p->Nhap();
		a.push_back(p);
	}
}
void TruongHoc::XuatDS()
{
	cout << "Danh sach Giao Vien la: " << endl;
	for (int i = 0; i < a.size(); i++)
	{
		a[i]->Xuat();
		cout << endl;
	}
}
double TruongHoc::tongLuong()
{
	double s = 0;
	for (int i = 0; i < a.size(); i++)
	{
		s = s + a[i]->tinhLuong();
	}
	return s;
}
void TruongHoc::luongCaoNhat()
{
	GiaoVien* p=a[0];
	for (int i = 1; i < a.size(); i++)
	{
		if (a[i]->tinhLuong() > p->tinhLuong())
			p = a[i];
	}
	cout<<"Giao Vien co luong cao nhat la: "<<endl;
	p->Xuat();

}
void TruongHoc::phanLoaiGV()
{
	int gv = 0;
	int gvcn=0;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i]->getType() == "GV")
		{
			gv++;
		}
		else if (a[i]->getType() == "GVCN")
		{
			gvcn++;
		}
	}
	cout << "So Giao Vien khong chu nhiem: " << gv<<endl;
	cout << "So Giao Vien chu nhiem: " << gvcn<<endl;
}
double TruongHoc::tinhLuongTB()
{
	double s = 0;
	for (int i = 0; i < a.size(); i++)
	{
		s = s + a[i]->tinhLuong();
	}
	s = s / a.size();
	return s;
}
void TruongHoc::GV_luongIt()
{
	cout << "Giao Vien co luong it hon 10.000.000 la: "<<endl;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i]->tinhLuong() < 10000000)
		{
			a[i]->Xuat();
			cout << endl;
		}
	}
}
void TruongHoc::timGV_ma()
{
	int s;
	int d = 0;
	cout << "Nhap ma Giao Vien can tim: "; cin >> s;
	for (int i = 0; i < a.size(); i++)
	{
		if (s == a[i]->maGV())
		{
			a[i]->Xuat();
			cout << endl;
			d = 1;
			break;
		}
	}
	if (d == 0) cout << "Khong co GV can tim!";
}
void TruongHoc::timGV_ten()
{
	string s;
	int d = 0;
	cin.ignore();
	cout << "Nhap ten Giao Vien can tim: "; getline(cin,s);
	for (int i = 0; i < a.size(); i++)
	{
		if (s == a[i]->tenGV())
		{
			a[i]->Xuat();
			cout << endl;
			d = 1;
			break;
		}
	}
	if (d == 0) cout << "Khong co GV can tim!";
}
void TruongHoc::nghiNhieu()
{
	int d = 0;
	cout << "Giao Vien nghi qua 4 ngay la: " << endl;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i]->ngayNghi() > 4)
		{
			a[i]->Xuat();
			d = 1;
			cout << endl;
		}
	}
	if (d == 0)cout << "Khong co ai!";
}