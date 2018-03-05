#include<iostream>
#include<string>
#include<fstream>
#include"Functions.h"

using namespace std;
int main()
{
	cout << "\t\t\t*** Library Management System ***\n\n";
	int NoOfBooks, choice;
	NoOfBooks =	NumberofBooksInLibrary();
	cout << "\t\t\t\t\t\t\tBooks in Library:   " << NoOfBooks << endl;
	choice = MainMenu();
	
	switch (choice)
	{
	case 1:
		AddBooksInLibrary();
		break;
	case 2:
		ShowBooksInLibrary();
		break;
	case 3:
		SearchBooks();
		break;
	default:
		cout << "Choice is Incorrect\n";
		break;
	}

	system("pause");
	return 0;

}
