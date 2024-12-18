#include "DSBienLai.h"

DSBienLai::DSBienLai()
{
	this->SoLuong = 0;
}

void DSBienLai::ThemBL(BienLai bl)
{
	DSBL.push_back(bl);
	SoLuong++;
}

void DSBienLai::XoaBL(string ChuHo)
{
	for (vector<BienLai>::iterator x = DSBL.begin();x != DSBL.end();x++)
	{
		if (x->GetChuHo() == ChuHo)
		{
			DSBL.erase(x);
			SoLuong--;
			break;
		}
	}
}

void DSBienLai::XuatTT()
{
	cout << "Thong tin cac bien lai la ( gom " << SoLuong << " bien lai )" << endl;
	for (BienLai x : DSBL)
	{
		x.XuatTT();
	}
}



