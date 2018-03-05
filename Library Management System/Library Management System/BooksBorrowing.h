#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include"Book.h"

using namespace std;

void BorrowingBooksFromFile(int NoOfBooks)
{
	Book book;
	vector<Book> NewBooks;
	fstream fout("Books.txt", ios::app | ios::in);
	if (fout.is_open())
	{
		for (int i = 0; i < NoOfBooks; i++)
		{
			fout >> book.Bookname;
			fout >> book.AuthorName;
			NewBooks.push_back(book);
		}
	}
	else
		cout << "File not found\n";
	fout.close();
}

void StockOfBooks(string bookName)
{

}