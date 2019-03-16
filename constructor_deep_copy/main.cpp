#include <iostream>
#include <string>
#include <vector>

class deep{
	
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
	
	deep(int d);
	
	//Copy Constructor
	deep(const deep &source);
	
	//Destructor
	~deep();
	
};

deep::deep(int d){
	data = new int;
	*data = d;
}

deep::deep(const deep &source):deep{*source.data}{
	std::cout<< "Copy Constructoe - deep copy" <<std::endl;
	
}

void display_deep(deep s){
	std::cout << s.get_data_value()<<std::endl;
}

deep::~deep(){
	delete data;
	std::cout<<"Destroyed"<<std::endl;
}


int main()
{
	
	deep obj {100};
	display_deep(obj);
	
	deep obj1{obj};
	obj1.set_data_value(1000);
	
	return 0;
}
