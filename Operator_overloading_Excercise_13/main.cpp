#include <iostream>
#include "Mystring.h"


using namespace std;

int main()
{
	//creating No args object
	Mystring enmpty;
	// creating args object
	Mystring larry{"Larry"};
	// Passing same object larry
	Mystring stooge{larry};
	// another object
	Mystring garry{"dog"};
	
	
	enmpty.display();
	larry.display();
	stooge.display();
	garry.display();
	//operator Copy is used
	garry = larry;
	// Operator Move is used
	garry = Mystring{"dark Silence"};
	garry.display();
	
	
	Mystring Zahid{"zahid"};
	Mystring zahid2{"Amin"};
	cout <<(Zahid == zahid2) <<endl;
	Mystring Amin = -zahid2;
	Amin.display();
	
	Mystring ZahidulAmin = Zahid + "ul" + " " + Amin;
	ZahidulAmin.display();
	return 0;
}
