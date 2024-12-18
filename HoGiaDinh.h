#ifndef HOGIADINH_H
#define HOGIADINH_H
#include"Library.h"

class HoGiaDinh
{
protected:
	string ChuHo;
	string SoNha;
	string MaCongTo;
public:
	HoGiaDinh();
	HoGiaDinh(string ChuHo, string SoNha, string MaCongTo);
	void SetChuHo(string ChuHo);
	void SetSoNha(string SoNha);
	void SetMaCongTo(string MaCongTo);
	string GetChuHo();
	string GetSoNha();
	string GetMaCongTo();
	void XuatTTHGD();
};

#endif // !HOGIADINH_H



