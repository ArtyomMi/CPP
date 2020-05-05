#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
#include "FileIO.h"
#include "Shooter.h"
#include "ReturnByLink.h"



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
	//file.WriteInFile("testFile.txt", "Test222");
	//std::cout << file.ReadFromFile("testFile.txt");


}