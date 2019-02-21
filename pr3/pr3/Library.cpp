#include "pch.h"
#include "Book.h"
#include "Library.h"
#include <iostream>

using namespace std;

int Library::count = 0;

Library::Library() {}

Library::Library(Book book) {
	count++;
	lib.push_back(book);
}

Library::~Library() {}

void Library::AddBook(Book book) {
	count++;
	lib.push_back(book);
}

void Library::DelBook(int num = count - 1) {
	count--;
	lib.erase(lib.begin() + num);
}

void Library::PrintBookInfo(int num = count - 1) {
	cout << "Book name: " << lib[num].getName() << endl << "Book genre: " << lib[num].getGenre() << endl << "Book author: " << lib[num].getAuthor() << endl << "Number of pages in book: " << lib[num].getPages() << endl;
}