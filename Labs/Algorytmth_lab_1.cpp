#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int SIZE;
	cout << "������� ���������� ������: ";
	cin >> SIZE;
	int* mark = new int[SIZE];
	int funf = 0;
	int fier = 0;
	int drei = 0;
	int zwei = 0;
	
	
	for (int i = 0; i < SIZE; i++)
	{
		mark[i] = rand() % 5 + 1;
		
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (mark[i] == 5)
			funf++;
		else if (mark[i] == 4)
			fier++;
		else if (mark[i] == 3)
			drei++;
		else if (mark[i] == 2)
			zwei++;
		
	}
	cout << "������: " << funf << endl;
	cout << "�������: " << fier << endl;
	cout << "������: " << drei << endl;
	cout << "������: " << zwei << endl;
	delete[] mark;
	return 0;
}