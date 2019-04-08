#include <cstring>
#include <iostream>
#include "Mystring.h"

// No-args Constructor
Mystring::Mystring()
:str{nullptr}{
	str = new char[1];
	*str='\0';
}

//Overloaded Constructor
Mystring::Mystring(const char *s):str{nullptr}{
	if(s==nullptr){
		str=new char[1];
		*str='\0';
	}else{
		str = new char[std::strlen(s)+1];
		std::strcpy(str,s);
	}
	
}
//copy constructor
Mystring::Mystring(const Mystring &source):str{nullptr}{
	str= new char[std::strlen(source.str)+1];
	std::strcpy(str,source.str);
	
}

//move constructor

Mystring::Mystring( Mystring &&source):str(source.str){
	source.str = nullptr;
	std::cout << "Move Constructor used"<<std::endl;
}


//operator copy asignment

Mystring &Mystring::operator=(const Mystring &rhs){
	std::cout << "Copy assignment" << std::endl;
	if (this == &rhs)
		return *this;
	delete []str;
	str= new char[std::strlen(rhs.str)+1];
	std::strcpy(str,rhs.str);
	return *this;
}


// operator move asignment
Mystring &Mystring::operator=(Mystring &&rhs){
	std::cout << "Using Move assignment"<<std::endl;
	if(this == &rhs)
		return *this;
	delete []str;
	str = rhs.str;
	rhs.str = nullptr;
	return *this;
}

// equality operator
bool Mystring::operator==(const Mystring &rhs)const{
	
	return(std::strcmp(str,rhs.str)==0);
}
//unary operator
Mystring Mystring::operator-()const {
char *buff = new char[std::strlen(str)+1];
std::strcpy(buff,str);
for(size_t i=0; i<std::strlen(buff);i++)
	buff[i]=std::tolower(buff[i]);
Mystring temp{buff};
delete [] buff;
return temp;
}

// Concatenate
Mystring Mystring::operator+(const Mystring &rhs) const{
	char *buff = new char[std::strlen(str) + std::strlen(rhs.str)+1];
	std::strcpy(buff,str);
	std::strcat(buff,rhs.str);
Mystring  temp{buff};
delete [] buff;
return temp;
}
// destructor

Mystring::~Mystring()
{
	delete [] str;
}

//Display Method

void Mystring::display() const {
	std::cout << str << ":" <<get_length() <<std::endl;
	
}
// length
int Mystring::get_length() const {
return std::strlen(str);
}

// string getter
const char *Mystring::get_str() const {return str;}


