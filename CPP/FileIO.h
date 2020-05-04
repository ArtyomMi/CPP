#pragma once
#include <string>

class FileIO
{
public:
	FileIO();
	~FileIO();
	int WriteInFile(std::string fileName, std::string text);
	std::string ReadFromFile(std::string fileName);
private:

};

