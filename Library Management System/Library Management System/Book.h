#include<iostream>
#include<string>
using namespace std;
struct Book
{
	string Bookname;
	string AuthorName;

	Book()
	{
		Bookname = "";
		AuthorName = "";
	}

	void AddBooks()
	{
		cin.ignore();
		cout << "Book Name   : "; getline(cin, Bookname);
		cout << "\nAuthor Name : "; getline(cin, AuthorName);
	}

	void ShowBooks()
	{
		cout << "\n\n";
		cout << "\nBook Name   : " << Bookname;
		cout << "\nAuthor Name : " << AuthorName;
	}

};