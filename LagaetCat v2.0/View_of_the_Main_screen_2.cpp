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
		cout << "                =      ����������������!+           =  =     =  =                         +        =    " << endl;
		cout << "                =       [�����������]             =     = =     =                                  =  " << endl;
		cout << "                =                                 =  LagaetCat 2  =             +                  =  " << endl;
		cout << "                =                                 =  --      ()   =                                =    " << endl;
		cout << "                =       +             +         =                   =             ���������) +     =  " << endl;
		cout << "                =                              =      =- || -=       =         +    [���]          =   " << endl;
		cout << "                =                               =        __         =                              = " << endl;
		cout << "                =                                 =               =                 +              =  " << endl;
		cout << "                =          +                        =----()-----=                                  =   " << endl;
		cout << "                =                                    =         =           �������� � ������!      =" << endl;
		cout << "                =                                  = ����������  =     =         [�����]           =   " << endl;
		cout << "                =        ����� �����...  +       ==����������:"<< *quantity_sign_0 <<  " == =      = " << endl;
		cout << "                =           [�����]                   = = == = =    ==                             =  " << endl;
		cout << "                =                                     = =    = =                   +               =   " << endl;
		cout << "                =                                     ===    ===                             +     =   " << endl;
		cout << "                =          -------------------------------------------------------------           =\n\n+++++++" << endl;
		cout << "                ____________________________________________________________________________________  " << endl;
		// ����� ������ ���������� ������ ����!

		cin >> team_2;
		if ("�����������"==team_2) {
			cout<<" �� ��������������" << endl;
			memory->personality(&quantity_sign_1);
			*quantity_sign_0 = quantity_sign_1;
			*exit_1 = 0;
			key_1 = 0;
		}
		else if ("���" == team_2) {
			cout << "\n��� ���L:..........\n" << endl;
			key_1 = 0;

		}
		else if ("�����" == team_2) {
			cout << "\n'���������� �������� �����'\n" << endl;
			key_1 = 1;

		}
		else if ("�����" == team_2) {
			cout << " ������� ������....." << endl;
			*exit_1 = 1;
			key_1 = 1;
		}
		else {
			cout << "�� ���������� ����" << endl;
			key_1 = 0;
			

		}






	} while (0 == key_1);
	

}