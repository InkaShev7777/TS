#include <iostream>
//#include "TS.h"
#include"Avto.h"
#include"Moto.h"

int main()
{
	/*int kol_wheels;
	char* marka;
	char* model;
	char* korobka_peredach;
	int kol_ls;
	std::*/
	Avto avto(4,(char*)"BMW", (char*)"M5", (char*)"Avtomat",600,true,true);
	avto.print();
	std::cout << "\n\n";
	Moto moto(2, (char*)"BMW", (char*)"1000RR", (char*)"Manual", 200, true, 2);
	moto.print();

}

