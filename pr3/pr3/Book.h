#include <string>
using namespace std;
#ifndef BOOK_H
#define BOOK_H
class Book
{
public:
	Book(string, string, string, int);
	~Book();
	string getGenre();
	string getAuthor();
	string getName();
	int getPages();
	friend class Library;

private:
	string genre;
	string author;
	string name;
	int pages;
};
#endif
