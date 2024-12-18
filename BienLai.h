#ifndef BIENLAI_H
#define BIENLAI_H
#include"HoGiaDinh.h"

class BienLai:public HoGiaDinh
{
protected:
	float SoDien;
	int Thang;
public:
	BienLai();
	BienLai(string ChuHo, string SoNha, string MaCongTo, float SoDien, int Thang);
	long long HoaDon();
	void SetSoDien(float SoDien);
	void SetThang(int Thang);
	float GetSoDien();
	int GetThang();
	void XuatTT();
};

#endif // !BIENLAI_H



