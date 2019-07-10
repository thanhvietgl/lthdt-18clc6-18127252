#include "CongTy.h"

CongTy::CongTy()
{
	name = " ";
}
void CongTy::NhapDS() {
	int n;
	int type;
	NhanVien* p;
	cout << "Nhap so luong nhan vien: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap thong tin nhan vien thu " << i+1 << endl;
		cout << "Loai nhan vien (1: NVSX; 2: NVQL; 3:NVVP): ";
		cin >> type;

		p = NULL;

		if (type == 1) {
			p = new NVSanXuat;
		}
		else if (type == 2) {
			p = new NVQuanLi;
		}
		else if (type == 3) {
			p = new NVVanPhong;
		}

		p->Nhap(); 
		a.push_back(p);
	}
}
void CongTy::XuatDS()
{
	for (int i = 0; i < a.size(); i++)
	{
		a[i]->Xuat();
	}
}
double CongTy::TinhTongLuong() {
	double sum = 0;
	for (int i = 0; i < a.size(); i++) {
		sum =sum+ a[i]->TinhLuong();
	}
	return sum;
}	

int CongTy::soLuongNVSX()
{
	int d = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i]->getType() == "San Xuat")
			d++;
	}
	return d;
}
int CongTy::soLuongNVQL()
{
	int d = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i]->getType() == "Quan Li")
			d++;
	}
	return d;
}
NhanVien* CongTy::LuongCaoNhat()
{
	auto p = a[0];
	for (int i = 1; i < a.size(); i++) {
		if (a[i]->TinhLuong() > p->TinhLuong())
			p = a[i];
			
	}
	return p;
}

double CongTy::tinhLuongTrungBinh()
{
	double s = 0;
	for (int i = 0; i < a.size(); i++)
	{
		s = s + a[i]->TinhLuong();
	}
	s = s / a.size();
	return s;
}
void CongTy::lietKeLuongIt()
{
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i]->TinhLuong() < 3000000)
		{
			a[i]->Xuat();
			cout << endl;
		}
	}
}

void CongTy::timNhanVien_maNV()
{
	int s;
	int kt = 0;
	do
	{
		cout << "Nhap ma nhan vien can tim: "; cin >> s;
		for (int i = 0; i < a.size(); i++)
		{
			if (s == a[i]->maNhanVien())
			{
				a[i]->Xuat();
				kt = 1;
			}
			
		}
	} while (kt == 0);
}

void CongTy::timNhaVien_ten()
{
	string s;
	int kt = 0;
	do
	{
		cin.ignore();
		cout << "Nhap ten nhan vien can tim: "; getline(cin,s);
		for (int i = 0; i < a.size(); i++)
		{
			if (s==a[i]->ten())
			{
				a[i]->Xuat();
				 kt = 1;
			}
			
		}
	} while (kt == 0);
}

