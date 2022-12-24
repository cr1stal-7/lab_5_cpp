#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
#include "glasses.h"
#include "cap.h"
#include "shorts.h"
#include "slippers.h"
#include "swim.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	string optInput;
	int opt = 0, i = 0, counter_one = 0, counter_double = 0;
	auto* set = new swim[20];
	auto* set_double = new swim[20][20];
	glasses _glasses = glasses();
	cap _cap = cap();
	shorts _shorts = shorts();
	slippers _slippers = slippers();
	set[i] = swim(_glasses, _cap, _shorts, _slippers);
	while (opt != 5) {
		cout << "Введите:" << endl;
		cout << "1 - Ввести комплект" << endl;
		cout << "2 - Вывести комплект" << endl;
		cout << "3 - Ввести двумерный массив" << endl;
		cout << "4 - Вывести двумерный массив" << endl;
		cout << "5 - Завершить работу программы" << endl;
		cin >> optInput;
		try {		//Try блок
			opt = stoi(optInput);
			if (opt > 5 || opt < 1)
				throw ("invalid range\n");
		}
		catch (invalid_argument e) {
			cout << ("Нужно вводить цифру\n");
		}
		catch (char const* s) {
			cout << ("Диапазон 1-5\n");
		}
		switch (opt) {
		case 1: {		//Одномерный массив
			set[i].input();
			set[i].res(*set);
			set[i].color(*set);
			i++;
			counter_one++;
			break;
		}
		case 2: {
			for (int j = 0; j < counter_one; j++) {
				set[j].output();
				set[j].res(*set);
				set[j].color(*set);
				puts("");
			}
			break;
		}
		case 3: {		//Двумерный массив
			for (int k = 0; k < 1; k++)
				for (int j = 0; j < 1; j++) {
					glasses _glasses = glasses();
					cap _cap = cap();
					shorts _shorts = shorts();
					slippers _slippers = slippers();
					set_double[i][j] = swim(_glasses, _cap, _shorts, _slippers);
					set_double[i][j].input();
					set_double[i][j].res(**set_double);
					set_double[i][j].color(**set_double);
					counter_double++;
				}
			break;
		}
		case 4:
			for (int k = 0; k < counter_double; k++)
				for (int j = 0; j < counter_double; j++) {
					set_double[i][j].output();
					set_double[i][j].res(**set_double);
					puts("");
				}
			break;
		case 5:
			exit(0);
		}
	}
}