#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
#include "FileIO.h"
#include "Shooter.h"
#include "ReturnByLink.h"
//#include "Item.h"
#include "PaperBook.h"
#include "AudioBook.h"



//using namespace std;
// todo todolist


int main()
{
	setlocale(LC_ALL, "Russian");
	//Shooter i;
	//std::cout << i.shooter();


	/*double a, b, c, p1, p2;
	std::cout << "enter a, b and c:" << std::endl;
	std::cin >> a; std::cin >> b; std::cin >> c;
	ReturnByLink r;
	int res = r.MyRoot(a, b, c, p1, p2);
	if (res == 1) {
		std::cout << p1 << std::endl << p2 << std::endl;
	}
	else if (res == 0) {
		std::cout << p1 << std::endl;
	}
	else std::cout << "sorry, roots dosen't find";*/


	//File Input/Output
	FileIO file;
	//file.WriteInFile("testFile.txt", "Test3");

	//std::cout << file.ReadFromFile("testFile.txt");

	//Polymorph call
	Item* pubarr[100];
	int n = 0;
	char choice;
	do
	{
		cout << "\nВводить данные для книги или звукового файла(b / a) ? ";
		cin >> choice;
		if (choice == 'b')
			pubarr[n] = new PaperBook;
		else
			//pubarr[n] = new AudioBook;
		pubarr[n++]->getdata();
		cout << "Продолжать((у / n) ? ";
		cin >> choice;
	} while (choice == 'y');
	for (int j = 0; j < n; j++) //цикл по всем объектам
		pubarr[j]->putdata(); //вывести данные о публикации
	cout << endl;


}