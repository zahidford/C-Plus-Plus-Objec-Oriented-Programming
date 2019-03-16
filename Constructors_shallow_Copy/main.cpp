#include <iostream>
#include <string>
#include <vector>

class shallow{
	
private:

	int *data;
	
public:

	void set_data_value(int d){
		*data =d;
	}
	
	int get_data_value(){
		return *data;
	}
	//constructor
	
	shallow(int d);
	
	//Copy Constructor
	shallow(const shallow &source);
	
	//Destructor
	~shallow();
	
};

shallow::shallow(int d){
	data = new int;
	*data = d;
}

shallow::shallow(const shallow &source):data(source.data){
	std::cout<< "Copy Constructoe - shallow copy" <<std::endl;
	
}

void display_shallow(shallow s){
	std::cout << s.get_data_value()<<std::endl;
}

shallow::~shallow(){
	delete data;
	std::cout<<"Destroyed"<<std::endl;
}


int main()
{
	
	shallow obj {100};
	display_shallow(obj);
	
	shallow obj1{obj};
	obj1.set_data_value(1000);
	
	return 0;
}
