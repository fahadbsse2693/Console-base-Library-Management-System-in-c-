#include<iostream>
#include<string>
#include<fstream>
#include"File_Handling.h"

int MainMenu()
{
	int choice = 0;
	cout << "\n\t\t1. Add Books";
	cout << "\n\t\t2. Show Books";
	cout << "\n\t\t3. Search Books";
	cout << "\n\t\t4. Borrowning Book";
	cout << "\n\t\t5. Delete Books";
	cout << "\n\t\t6. Return Books";

	do{
		cout << "\n\n\t\tChoice  >>"; cin >> choice;
	} while (choice > 6 && choice < 0);
	return choice;
}

void AddBooksInLibrary()
{

	int BookCounter = NumberofBooksInLibrary();
	char choice;
	Book newBook;
	do
	{
		newBook.AddBooks();
		BookCounter++;
		AddBooksInFile(newBook);

		cout << "Add anOther ? (Y/N)";
		cin >> choice;
		if (choice == 'N' || choice == 'n')
			break;
	} while (true);
	Update_NumberofBooksInLibrary(BookCounter);

}

void ShowBooksInLibrary()
{
	int Books = NumberofBooksInLibrary();
	ShowBooksfromFile(Books);
}

void SearchBooks()
{
	string b_name;
	cin.ignore();
	cout << "Book name : "; getline(cin, b_name);
	int NoOfBooks = NumberofBooksInLibrary();
	SearchfromFile(NoOfBooks, b_name);
}

void BorrowBooksFromLibrary()
{
	string b_name;
	cin.ignore();
	cout << "Book name : "; getline(cin, b_name);
	int NoOfBooks = NumberofBooksInLibrary();

}