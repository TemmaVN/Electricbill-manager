#include "BienLai.h"

BienLai::BienLai()
{
	this->SoDien = 0;
	this->Thang = 0;
}

BienLai::BienLai(string ChuHo, string SoNha, string MaCongTo, float SoDien, int Thang) :HoGiaDinh(ChuHo, SoNha, MaCongTo)
{
	this->SoDien = SoDien;
	this->Thang = Thang;
}

void BienLai::SetSoDien(float SoDien)
{
	this->SoDien = SoDien;
}

void BienLai::SetThang(int Thang)
{
	this->Thang = Thang;
}

float BienLai::GetSoDien()
{
	return this->SoDien;
}

int BienLai::GetThang()
{
	return Thang;
}

long long BienLai::HoaDon()
{
	return long long(SoDien * 50000);
}

void BienLai::XuatTT()
{
	cout << "Cac thong tin cua Bien lai la : " << endl;
	cout << "Bien lai thang " << Thang << endl;
	XuatTTHGD();
	cout << "So dien trong thang la : " << this->SoDien << endl;
	cout << "Ban phai tra " << HoaDon() << endl;
}
