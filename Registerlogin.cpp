#include <iostream>
#include <string>
using namespace std;
int main()
{
	char ch;
	string user, pass, user1, pass1;
	do
	{
		cout << "\n";
		cout << "////////////// Menu //////////////\n1. Register\n2. Login\nQ. Exit Program\n________________________________________\n";
		cout << "\n";
		cout << "Enter Menu : ";
		cin >> ch;
		if (ch == '1')
		{
			cout << "\n";
			cout << "********** Register **********" << endl;
			cout << "Input Username : ";
			cin >> user;
			cout << "Input Password : ";
			cin >> pass;
		}
		else if (ch == '2')
		{
			cout << "\n";
			cout << "********** Login **********" << endl;
			cout << "Input Username : ";
			cin >> user1;
			cout << "Input Password : ";
			cin >> pass1;
			if (user == user1 && pass == pass1)
			{
				cout << "Username or Password correct ^___^ " << endl;
			}
			else
			{
				cout << "!!!!Username or Password incorrec Please try again!!!!" << endl;
			}
		}
		
	}while (ch != 'Q');
			cout << "Exit Program...." << endl;

	return(0);
}