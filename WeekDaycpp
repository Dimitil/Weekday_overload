#include <iostream>

enum WeekDay{Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};


WeekDay& operator++(WeekDay &d)	//prefix
{
	int tmp = (static_cast<int>(d)+1)%7;
	d = static_cast<WeekDay>(tmp);
	return d;
}

WeekDay operator++(WeekDay &d, int) //postfix
{

	WeekDay old = d; 
	int tmp = (static_cast<int>(d)+1)%7;
	d = static_cast<WeekDay>(tmp);
	return old;

}

WeekDay operator+(WeekDay d, int a)
{
	int tmp = (static_cast<int>(d) + a)%7;
	d = static_cast<WeekDay>(tmp);
	return d;
}

int main()
{
	WeekDay d=Monday;

	std::cout<<'\n'<<d++<<'\n';
	std::cout<<'\n'<<d++<<'\n';
	std::cout<<'\n'<<d++<<'\n';
	std::cout<<'\n'<<d++<<'\n';
	std::cout<<'\n'<<d++<<'\n';
	std::cout<<'\n'<<d++<<'\n';
	std::cout<<'\n'<<d++<<'\n';
	std::cout<<'\n'<<d<<'\n';
}
