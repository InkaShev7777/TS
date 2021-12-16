#pragma once
#include<iostream>
#include"TS.h"
class Avto:public TS
{
protected:
	bool zapaska;
	bool music;
public:
	Avto(int kol_wheels, char* marka, char* model, char* korobka_peredach, int kol_ls,bool zapaska,bool music):TS(kol_wheels,marka,model,korobka_peredach,kol_ls)
	{
		this->music = true;
		this->zapaska = true;
	}
	void print()
	{
		TS::print();
		std::cout << "\nZapaska: " << this->zapaska << "\nMusic: " << this->music << "\n";
	}
};

