#define _CRT_NONSTDC_NO_DEPRECATE

#include <iostream>
#include <string.h>

using namespace std;



struct Msj{
	char mesaj[256];
	void arata_mesaj(){
		cout << mesaj;
	}
};

struct MsjMaj
{
	char mesaj[256];
	void arata_mesaj(){
		cout << strupr(mesaj);
	}
};

void main(){
	Msj carte = { " Totul despre C/C++\n" };
	MsjMaj carte_maj = {"TOTUL DESPRE C/C++\n"};
	carte.arata_mesaj();
	carte_maj.arata_mesaj();

	system("pause");
}
