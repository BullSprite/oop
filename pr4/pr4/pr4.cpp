#include "pch.h"
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

void setSize(const int& a, vector<int*>& A, vector<int>& size) {
	A.push_back(new int[a]);
	size.push_back(a);
}

void fillArray(vector<int*>& A, vector<int>& size, const int& i) {
	cout << "If you want fill array randomly enter 1, else 2 for fill array from keyboard" << endl;
	int tmp;
	cin >> tmp;
	while (tmp != 1 && tmp != 2) {
		cout << "Try again? 1 for random fill, 2 for fill from keyboard" << endl;
		cin >> tmp;
	}
	if (tmp == 1) {
		srand(time(NULL));
		for (int j = 0; j < size[i]; j++)
			A[i][j] = rand() % 200 - 100;
	}
	else {
		for (int j = 0; j < size[i]; j++) {
			cout << "Enter an ellement " << j << endl;
		}
	}
}

void showArray(vector<int*>& A, vector<int>& size, const int& i) {
	for (int j = 0; j < size[i]; j++)
		cout << A[i][j] << " ";
	cout << endl;
}

void deleteArray(vector<int*>& A, const int& i) {
	A.erase(A.begin() + i);
}

int main()
{
	vector<int*> A;
	vector<int> Size;

	int op;

	while (true) {
		cout << "Enter " << endl << "1 to set size of new array" << endl
			<< "2 to fill array" << endl << "3 to show array" << endl
			<< "4 to delete array" << endl << "5 to stop programm" << endl;
		cin >> op;
		int size, num;
		switch (op)
		{
		case 1:
			cout << "Enter a size of array ";
			cin >> size;
			cout << endl;
			setSize(size, A, Size);
			break;

		case 2:
			cout << "Enter a number of array to fill ";
			cin >> num;
			cout << endl;
			if (A.size() + 1 <= num || num - 1 < 0) {
				cout << "Wrong number of array" << endl;
			}
			else {
				fillArray(A, Size, num - 1);
			}
			break;

		case 3:
			cout << "Enter a number of array to show ";
			cin >> num;
			cout << endl;
			if (A.size() + 1 <= num || num - 1 < 0) {
				cout << "Wrong number of array" << endl;
			}
			else {
				showArray(A, Size, num - 1);
			}
			break;

		case 4:
			cout << "Enter a number of array to delete ";
			cin >> num;
			cout << endl;
			if (A.size() + 1 <= num || num - 1 < 0) {
				cout << "Wrong number of array" << endl;
			}
			else {
				deleteArray(A, num - 1);
			}
			break;

		case 5:
			return 0;

		default:
			cout << "Entered wrong operation. Try again";
			break;
		}
	}

}