#include "HoGiaDinh.h"

HoGiaDinh::HoGiaDinh()
{
	this->ChuHo = "";
	this->MaCongTo = "";
	this->SoNha = "";
}

HoGiaDinh::HoGiaDinh(string ChuHo, string SoNha, string MaCongTo)
{
	this->ChuHo = ChuHo;
	this->SoNha = SoNha;
	this->MaCongTo = MaCongTo;
}

void HoGiaDinh::SetChuHo(string ChuHo)
{
	this->ChuHo = ChuHo;
}

void HoGiaDinh::SetSoNha(string SoNha)
{
	this->SoNha = SoNha;
}

void HoGiaDinh::SetMaCongTo(string MaCongTo)
{
	this->MaCongTo = MaCongTo;
}

string HoGiaDinh::GetChuHo()
{
	return this->ChuHo;
}

string HoGiaDinh::GetSoNha()
{
	return SoNha;
}

string HoGiaDinh::GetMaCongTo()
{
	return MaCongTo;
}

void HoGiaDinh::XuatTTHGD()
{
	cout << "Cac thong tin cua ho gia dinh la : " << endl;
	cout << "Chu ho la : " << this->ChuHo << endl;
	cout << "So nha la : " << SoNha << endl;
	cout << "Ma cong to la : " << MaCongTo << endl;
}