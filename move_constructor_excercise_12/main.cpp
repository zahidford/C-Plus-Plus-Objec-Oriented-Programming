#include <iostream>
#include <string>
#include <vector>
using namespace std;
class example{
	private:
	 int *pointer;
public:
	//constructor
	
	example(int d)  {
    pointer = new int;
    *pointer = d;
    cout << "Constructor for: " << d << endl;
}
	
	

// deep copy
example(const example &source)
    : example {*source.pointer} {
        cout << "Copy constructor  - deep copy for: " << *pointer << endl;
	}
// Move Constructor
	example(example &&source) noexcept :pointer{source.pointer}  {
	source.pointer = nullptr;
	cout << "object moved"<<endl;
	}
	~example() {
		delete pointer;
		cout << "Destroyed"<<endl;
	}
	 
};

int main()
{
	
	vector <example> vec;
	vec.push_back(example(300));
	vec.push_back(example(300));
	vec.push_back(example(300));
	vec.push_back(example(300));
	return 0;
}
