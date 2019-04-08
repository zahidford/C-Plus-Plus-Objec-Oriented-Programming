#include "Mystring.h"
#include <cstring>
#include <iostream>
Mystring::Mystring()
:str{nullptr}{
str= new char[1];
*str='\0';
}
Mystring::Mystring(char *pointer):str{nullptr}{
	if (pointer==nullptr){
		str= new char[1];
		*str='\0';
	}else{
		str=new char[std::strlen(pointer)+1];
		std::strcpy(str,pointer);
	}
}
Mystring::Mystring(const Mystring &source):str{nullptr}{
	str = new char[std::strlen(source.str)+1];
	std::strcpy(str,source.str);
}
Mystring &Mystring::operator=(const Mystring &rhs){
	std::cout <<"Copy Assignment"<<std::endl;
	if (this == &rhs)
		return *this;
	delete [] this->str;
	str = new char[std::strlen(rhs.str) + 1];
	std::strcpy(this->str,rhs.str);
	return *this;
}
Mystring &Mystring::operator=(Mystring &&rhs){
	if (this == &rhs)
		return *this;
	delete [] this;
	this->str=rhs.str;
	rhs.str=nullptr;
	return *this;
}
Mystring::~Mystring()
{
}

