#include "D3.h"


D3::D3() : B3() { d3 = 0; }    //конструктор за умовчанням(без параметрів)

D3::D3(int v_d3, int v_b3) : B3(v_b3) {    //конструктор ініціалізації
	d3 = v_d3;
}

D3::~D3() {}   //деструктор --- для звільнення пам'яті виділеної для певного об'єкта

void D3::show() {  //метод для виведення інформації про тип об’єкта цього класу та про значення його полів
	std::cout << "\nclass D3:";
	B3::show();
	std::cout << "\n\nshow_D3()"
		<< "\nD3::d3 = " << d3;
}