#pragma once

#include <iostream>


class B1 {
	int b1;
public:
	B1();		     //конструктор за умовчанням(без параметрів)
	B1(int v_b1);    //конструктор ініціалізації
	~B1();			 //деструктор --- для звільнення пам'яті виділеної для певного об'єкта

	void show();  //метод для виведення інформації про тип об’єкта цього класу та про значення його полів
};