#include "Code_Classesr.h"
#include <iostream>
using namespace std;
void View_of_the_Main_screen::Menu_Center(int *quantity_sign_0,int *exit_1) {
	User* memory = new User;
	string team_2;
	int key_1, key_2, key_3;
	do {

		
		cout << "                = -------------------------------------------------------------------------------- =" << endl;
		cout << "                =              +                     =         =                                   = " << endl;
		cout << "                =      Зарегистрируемся!+           =  =     =  =                         +        =    " << endl;
		cout << "                =       [Регистрация]             =     = =     =                                  =  " << endl;
		cout << "                =                                 =  LagaetCat 2  =             +                  =  " << endl;
		cout << "                =                                 =  --      ()   =                                =    " << endl;
		cout << "                =       +             +         =                   =             Поговорим) +     =  " << endl;
		cout << "                =                              =      =- || -=       =         +    [Чат]          =   " << endl;
		cout << "                =                               =        __         =                              = " << endl;
		cout << "                =                                 =               =                 +              =  " << endl;
		cout << "                =          +                        =----()-----=                                  =   " << endl;
		cout << "                =                                    =         =           Повернем к хвосту!      =" << endl;
		cout << "                =                                  = Количество  =     =         [Назад]           =   " << endl;
		cout << "                =        Уйдем спать...  +       ==участников:"<< *quantity_sign_0 <<  " == =      = " << endl;
		cout << "                =           [Выход]                   = = == = =    ==                             =  " << endl;
		cout << "                =                                     = =    = =                   +               =   " << endl;
		cout << "                =                                     ===    ===                             +     =   " << endl;
		cout << "                =          -------------------------------------------------------------           =\n\n+++++++" << endl;
		cout << "                ____________________________________________________________________________________  " << endl;
		// Здесь логины участников должны быть!

		cin >> team_2;
		if ("Регистрация"==team_2) {
			cout<<" Мы регистрируемся" << endl;
			memory->personality(&quantity_sign_1);
			*quantity_sign_0 = quantity_sign_1;
			*exit_1 = 0;
			key_1 = 0;
		}
		else if ("Чат" == team_2) {
			cout << "\nНаш чатL:..........\n" << endl;
			key_1 = 0;

		}
		else if ("Назад" == team_2) {
			cout << "\n'Совершенно действие назад'\n" << endl;
			key_1 = 1;

		}
		else if ("Выход" == team_2) {
			cout << " Процесс выхода....." << endl;
			*exit_1 = 1;
			key_1 = 1;
		}
		else {
			cout << "Не правильный ввод" << endl;
			key_1 = 0;
			

		}






	} while (0 == key_1);
	

}