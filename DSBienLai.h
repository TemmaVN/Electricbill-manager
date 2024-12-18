#ifndef DSBIENLAI_H
#define DSBIENLAI_H
#include"BienLai.h"

class DSBienLai
{
protected:
	vector<BienLai> DSBL;
	int SoLuong;
public:
	DSBienLai();
	void ThemBL(BienLai bl);
	void XoaBL(string ChuHo);
	void XuatTT();
};

#endif // !DSBIENLAI_H



