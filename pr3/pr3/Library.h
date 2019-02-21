#include "pch.h"
#include "Book.h"
#include "vector"
using namespace std;
#ifndef LIBRARY_H
#define LIBRARY_H
class Library {
public:
	Library();
	Library(Book);
	void AddBook(Book);
	void DelBook(int);
	void PrintBookInfo(int);
	~Library();

private:
	static int count;
	vector<Book> lib;
};
#endif
