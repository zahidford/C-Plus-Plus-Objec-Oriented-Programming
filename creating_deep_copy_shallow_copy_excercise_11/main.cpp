#include <iostream>
#include <string>
#include <vector>
using namespace std;
class example{
	private:
	 int *pointer;
public:
	//constructor
	example(int d){
		pointer = new int;
		*pointer = d;
		cout<<"Constructor Called"<<endl;
	}
	int returndisplay(){
		return *pointer;
	}
	
	// copy constructor(shallow)
//	example(const example &source):pointer{source.pointer}{
//		cout <<"Danger Shallow copy made"<<endl;
//		
//	}
// deep copy
//	example(const example &source){
//		pointer = new int;
//		*pointer= *source.pointer;
//		cout<<"deep copy made";
//	}
	// deep copy by delegation
	example(const example &source):example(*source.pointer){
		
		cout<<"delegated"<<endl;
	}
	~example() {
		delete pointer;
		cout << "Destroyed"<<endl;
	}
	 
};
void display(example p){
		cout<< p.returndisplay()<<endl;
	}
int main()
{
	example dark(100);
	display(dark);
	
	return 0;
}
