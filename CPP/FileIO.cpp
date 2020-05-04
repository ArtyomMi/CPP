#include "FileIO.h"
#include <iostream>
#include <fstream>
#include <string>

FileIO::FileIO()
{
}
FileIO::~FileIO()
{
}

int FileIO::WriteInFile(std::string fileName, std::string text)
{
	setlocale(LC_ALL, "Russian");
	std::ofstream out;
	//std::ofstream out(fileName, out.binary | out.out);
	out.open(fileName);
	if (!out.is_open()) {
		std::cerr << "Can't open file" << std::endl;
		out.close();
		return -1;
	}
	out.write((const char*)&text, sizeof(text));
	out << std::endl;
	out.close();
	return 0;
}
std::string FileIO::ReadFromFile(std::string fileName) {
	std::string outMess, strLine;
	std::ifstream in;
	//std::ifstream in(fileName, in.binary | in.in);
	in.open(fileName);
	if (in.is_open()) {
			outMess += strLine;
			outMess += "\n";
		in.close();
		return outMess;
	}
	in.close();
	return "";

}