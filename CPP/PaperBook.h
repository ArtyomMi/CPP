#pragma once
#include "Item.h"
class PaperBook :
	public Item
{
private: 
	int pages;
public:
	void getdata()
	{
		Item::getdata();
		cout << "Введите число страниц : ";
		cin >> pages;
	}
	void putdata()
	{
		Item::putdata();
		cout << "\nСтраниц:" << pages;
	}
};

