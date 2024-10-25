#include "Code_Classesr.h"
#include <iostream>
#include <string>
using namespace std;
void User::displayMessage(const std::string& login, const std::string& password, const std::string& imay, int* yyy, int* idiot)
 {	
	int rrr;	
	cout << "()()()()()()()()() Это вы:\n" << endl;
	cout << "Логин:"<< login << endl;
	cout << "Пароль:"<< password << endl;
	cout << "Имя:" << imay<<endl;
	cout << "*yyy:" << *yyy << endl;
	cout << "()()()()()()()()()" << endl;
	cout << "======================================================" << endl;

	
	rrr = *yyy;	
	arr[rrr] = login;
	for (int oi = 0; oi <= rrr; oi++) {
		cout << "Логин с номером " << oi << " равен: " << arr[oi] << endl;
	}

	*yyy = *yyy + 1;

}
