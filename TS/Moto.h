#pragma once
#include"TS.h"
class Moto:public TS
{
protected:
	bool shlem;
	int kol_p_mest;
public:
	Moto()
	{
		this->shlem = false;
		this->kol_p_mest = 0;
	}
	Moto(int kol_wheels, char* marka, char* model, char* korobka_peredach, int kol_ls,bool shlem,int kol_p_mest):TS(kol_wheels,marka,model,korobka_peredach,kol_ls)
	{
		this->kol_p_mest = kol_p_mest;
		this->shlem = shlem;
	}
	void print()
	{
		TS::print();
		std::cout << "\nKol_pos.mest: " << this->kol_p_mest << "\nShlem: " << this->shlem << "\n";
	}
};

