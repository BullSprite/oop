#include "pch.h"
#include <string>
#include "Library.h"
#include <iostream>

int main()
{
	Library *lib = new Library();
	lib->AddBook(Book("qwe", "ewq", "wqe", 100));
	lib->AddBook(Book("ewq", "qwe", "eqw", 50));
	lib->AddBook(Book("ewq", "qwe", "eqw", 75));
	lib->PrintBookInfo(1);
	lib->DelBook(1);
	lib->PrintBookInfo(1);
	return 0;
}