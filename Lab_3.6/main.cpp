#include <iostream>

#include "D4.h"

int main(void) {
	using std::cout;

	B1 b_1(999);
	B2 b_2(888);
	B3 b_3(777);
	D1 d_1(123, 111, 222, 333);
	D2 d_2(1000, 555, 666, 777, 111, 222);
	D3 d_3(333, 555);
	D4 d_4(8000, 1500, 556, 667, 778, 112, 223);

	int key{};
	do {
		cout << "\n\n[1] --- Object b_1";
		cout << "\n[2] --- Object b_2";
		cout << "\n[3] --- Object b_3";
		cout << "\n[4] --- Object d_1";
		cout << "\n[5] --- Object d_2";
		cout << "\n[6] --- Object d_3";
		cout << "\n[7] --- Object d_4";

		cout << "\n\n[0] --- Exit!!!";

		cout << "\n\nEnter the point: "; std::cin >> key;
		switch (key) {
		case 1:
			cout << "\nSizeof(b_1): " << sizeof(b_1);
			cout << "\n\nHierarchy of classes: ";
			b_1.show();
			break;
		case 2:
			cout << "\nSizeof(b_2): " << sizeof(b_2);
			cout << "\n\nHierarchy of classes: ";
			b_2.show();
			break;
		case 3:
			cout << "\nSizeof(b_3): " << sizeof(b_3);
			cout << "\n\nHierarchy of classes: ";
			b_3.show();
			break;
		case 4:
			cout << "\nSizeof(d_1): " << sizeof(d_1);
			cout << "\n\nHierarchy of classes: ";
			d_1.show();
			break;
		case 5:
			cout << "\nsizeof(d_2): " << sizeof(d_2);
			cout << "\n\nhierarchy of classes: ";
			d_2.show();
			break;
		case 6:
			cout << "\nSizeof(d_3): " << sizeof(d_3);
			cout << "\n\nHierarchy of classes: ";
			d_3.show();
			break;
		case 7:
			cout << "\nSizeof(d_4): " << sizeof(d_4);
			cout << "\n\nHierarchy of classes: ";
			d_4.show();
			break;
		case 0:
			cout << "\n\nCompletion!!!";
			break;
		default:
			cout << "\n\nWrongly entered values!!!";
		}
		cout << std::endl;
		system("pause");
	} while (key != 0);

	return 0;
}