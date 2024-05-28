#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int random(int min, int max)
{
	srand(time(NULL));
	int num = min + rand() % (max - min + 1);
	return num;
}

int main() {
	int number;
	int a;
	string arr[9] = { "  " ,"  " ,"  " ,"  " ,"  " ,"  " ,"  ","  ","  " }; //массив, который будет заполн€тьс€ строчным типом данных (’ или ќ)  а потом выводитьс€. 
	int arr1[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };// массив дублирующий предыдущий массив, но уже с целочисленным типом данных. (0 - пустые клетки, 1 - крестик, 2 - нолик) 

	cout << "ѕривет, сыграем?)" << endl << endl;

	cout << "\t1\t|\t2\t|\t3\t" << endl << "   -------------------" << endl <<
		"\t4\t|\t5\t|\t6\t" << endl << "   -------------------" << endl <<
		"\t7\t|\t8\t|\t9\t" << endl;

	for (int i = 0; i < 7; i++) {
		cout << "¬веди номер клетки: " << endl;

		cout << "\t" << arr[0] << "\t|\t" << arr[1] << "\t|\t" << arr[2] << "\t" << endl << "   -------------------" << endl <<
			"\t" << arr[3] << "\t|\t" << arr[4] << "\t|\t" << arr[5] << "\t" << endl << "   -------------------" << endl <<
			"\t" << arr[6] << "\t|\t" << arr[7] << "\t|\t" << arr[8] <<
			"\t" << endl;

		cin >> a;
		arr[a - 1] = "X";//массив дл€ чтени€ пользователем
		arr1[a - 1] = 1;// массив дл€ чтени€ программой

		random();
		number = random(0, 8);

		for (int i = 0; i < 9; i++) {
			arr[number] = "O";// что б пользователь видел ход
			arr1[number] = 2;//заполнение клетки случайно сгенерированным индексом 

		}
	}
}