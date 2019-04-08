#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
private: 
char *str;
public:
	//no args constructor
	Mystring();
	//char constructor
	Mystring(char *pointer);
	//copy constructor
	Mystring(const Mystring &source);
	
	// copy assignemnt operator
	Mystring &operator=(const Mystring &rhs); 
	
	// Move assignment Operator
	Mystring &operator=(Mystring &&rhs); 
	~Mystring();
	void display() const;
	int get_length() const;
	const char *get_str() const;
};

#endif // MYSTRING_H
