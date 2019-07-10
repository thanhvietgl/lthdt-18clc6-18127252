#pragma once
#include "NVQuanLi.h"
#include"NVSanXuat.h"
#include "NVVanPhong.h"

class CongTy {
private:
	string name;
	vector<NhanVien*> a;
public:
	CongTy();
	void NhapDS();
	void XuatDS();
	double TinhTongLuong();
	NhanVien* LuongCaoNhat();
	int soLuongNVSX();
	int soLuongNVQL();
	double tinhLuongTrungBinh();
	void lietKeLuongIt();
	void timNhanVien_maNV();
	void timNhaVien_ten();

};
