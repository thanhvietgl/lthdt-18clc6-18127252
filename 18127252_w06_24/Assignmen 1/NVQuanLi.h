#pragma once
#include "NhanVien.h"

class NVQuanLi : public NhanVien {
private:
	// 3 + 2 thuộc tính
	double heSo;
public:
	NVQuanLi();
	void Nhap();
	void Xuat();
	double TinhLuong();
	string getType();
	string ten();

};
