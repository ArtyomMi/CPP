#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
#include "FileIO.h"
#include "Shooter.h"




//using namespace std;
// todo todolist


int main()
{
	//Shooter i;
	//std::cout << i.shooter();


	/*double a, b, c, p1, p2;
	std::cout << "Enter a, b and c:" << std::endl;
	std::cin >> a; std::cin >> b; std::cin >> c;
	int res = root::MyRoot(a, b, c, p1, p2);
	if (res == 1) {
		std::cout << p1 << std::endl << p2 << std::endl;
	}
	else if (res == 0) {
		std::cout << p1 << std::endl;
	}
	else std::cout << "Sorry, roots dosen't find";*/


	//File Input/Output
	FileIO file;
	file.WriteInFile("testFile.txt", "Test321");
	//std::cout << file.ReadFromFile("testFile");


}