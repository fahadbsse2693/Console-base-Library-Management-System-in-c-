#include<iostream>
#include<string>
#include<fstream>
#include"Book.h"

using namespace std;

int NumberofBooksInLibrary()
{
	int NoOfBooks;
	fstream fout("Number of Books.txt", ios::app | ios::out | ios::in);
	fout >> NoOfBooks;
	fout.close();
	
	return NoOfBooks;
}

void Update_NumberofBooksInLibrary(int newBooks)
{
	fstream fin("Number of Books.txt");
	fin << newBooks;
	fin.close();
}

void AddBooksInFile(Book newBook)
{
	fstream fin("Books.txt", ios::app | ios::in);
	fin << newBook.Bookname << endl;
	fin << newBook.AuthorName << endl;
	fin.close();
}

void ShowBooksfromFile(int NoOfBooks)
{
	Book book;
	fstream fout("Books.txt", ios::app | ios::in);
	if (fout.is_open())
	{
		for (int i = 0; i < NoOfBooks; i++)
		{
			fout >> book.Bookname;
			fout >> book.AuthorName;
			book.ShowBooks();
		}
	}
	else
		cout << "File not found\n";
	fout.close();
}

void SearchfromFile(int NoOfBooks , string b_name)
{
	Book book;
	bool flage = true;
	fstream fout("Books.txt", ios::app | ios::in);
	if (fout.is_open())
	{
		for (int i = 0; i < NoOfBooks; i++)
		{
			fout >> book.Bookname;
			fout >> book.AuthorName;
			if (book.Bookname.compare(b_name) == 0)
			{
				book.ShowBooks();
				flage = false;
			}
		}
		if (flage)
			cout << "Result not found\n";
	}
	else
		cout << "File not found\n";
	fout.close();

}
