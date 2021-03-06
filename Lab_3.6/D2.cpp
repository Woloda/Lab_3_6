#include "D2.h"


D2::D2() : D1(), D3() { d2 = 0; }    //конструктор за умовчанням(без параметрів)

D2::D2(int v_d2, int v_b1, int v_b2, int v_b3, int v_d1, int v_d3)     //конструктор ініціалізації
	:D1(v_d1, v_b1, v_b2, v_b3), D3(v_d3, v_b3)
{
	d2 = v_d2;
}

D2::~D2() {}   //деструктор --- для звільнення пам'яті виділеної для певного об'єкта

void D2::show() {  //метод для виведення інформації про тип об’єкта цього класу та про значення його полів
	std::cout << "\n\nclass D2:";
	D1::show();
	D3::show();
	std::cout << "\n\nshow_D2()"
		<< "\nD2::d2 = " << d2;
}