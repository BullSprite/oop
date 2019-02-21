#include "pch.h"
#include "Book.h"

Book::Book(string na, string ge, string auth, int pa)
	:name(na), genre(ge), author(auth), pages(pa) {}

Book::~Book() {}

string Book::getAuthor() {
	return author;
}

string Book::getGenre() {
	return genre;
}

int Book::getPages() {
	return pages;
}

string Book::getName() {
	return name;
}