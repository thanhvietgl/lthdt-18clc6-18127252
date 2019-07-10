#pragma once
#include "GiaoVien.h"
#include "GVCN.h"

class TruongHoc
{
private:
	string m_ten;
	vector<GiaoVien*> a;
public:
	TruongHoc();
	void NhapDS();
	void XuatDS();
	double tongLuong();
	void luongCaoNhat();
	void phanLoaiGV();
	double tinhLuongTB();
	void GV_luongIt();
	void timGV_ma();
	void timGV_ten();
	void nghiNhieu();

};
