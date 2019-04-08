#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
	friend Mystring operator-(const Mystring &obj);  // make lower
	friend Mystring operator+(const Mystring &lhs,const Mystring &rhs);
	friend bool operator==(const Mystring &lhs ,const Mystring &rhs);
private:
	char *str;
public:

	
	Mystring(); // No args constructor
	Mystring(const char *s); // one args constructor
	Mystring(const Mystring &source); // copy constructor 
	Mystring(Mystring &&source); // Move construtor
	~Mystring(); // destritor
	// creating string copy operator
	Mystring &operator=(const Mystring &rhs);
	// creating string move operator
	Mystring &operator=(Mystring &&rhs);
	// Lowercase operator
	
//	Mystring operator-() const; // make lower
//	Mystring operator+(const Mystring &rhs) const;
//	bool operator==(const Mystring &rhs)const;
	
	// setters and getters
	void display() const;
	int get_length() const;
	const char *get_str() const;

};

#endif // MYSTRING_H
