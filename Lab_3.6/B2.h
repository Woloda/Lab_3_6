#pragma once

#include <iostream>


class B2 {
	int b2;
public:
	B2();				//конструктор за умовчанням(без параметрів)
	B2(int v_b2);	    //конструктор ініціалізації
	~B2();				//деструктор --- для звільнення пам'яті виділеної для певного об'єкта

	void show();  //метод для виведення інформації про тип об’єкта цього класу та про значення його полів
};