﻿#include "B1.h"


B1::B1() { b1 = 0; }   //конструктор за умовчанням(без параметрів)

B1::B1(int v_b1) {	   //конструктор ініціалізації
	b1 = v_b1;
}

B1::~B1() {}           //деструктор --- для звільнення пам'яті виділеної для певного об'єкта

void B1::show() {  //метод для виведення інформації про тип об’єкта цього класу та про значення його полів
	std::cout << "\nclass B1:";
	std::cout << "\n\nshow_B1()" 
		      << "\nB1::b1 = " << b1;
}