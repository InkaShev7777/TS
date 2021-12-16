#pragma once
#include<iostream>
class TS
{
protected:
	int kol_wheels;
	char* marka;
	char* model;
	char* korobka_peredach;
	int kol_ls;
public:
	TS()
	{
		this->kol_ls = 0;
		this->kol_wheels = 0;
		this->korobka_peredach = (char*)"";
		this->marka = (char*)"";
		this->model = (char*)"";
	}
	TS(int kol_wheels, char* marka, char* model, char* korobka_peredach, int kol_ls)
	{
		this->kol_ls = kol_ls;
		this->kol_wheels = kol_wheels;
		this->marka = marka;
		this->model = model;
		this->korobka_peredach = korobka_peredach;
	}
	void print()
	{
		std::cout << "Marka: "<<this->marka<<"\nModel: "<<this->model<<"\nWheels: "<<this->kol_wheels<<"\nBox: "<<this->korobka_peredach<<"\nLS: "<<this->kol_ls;
	}

};

