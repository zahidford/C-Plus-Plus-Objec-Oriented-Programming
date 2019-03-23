#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
	private:
	//attributes
	string name;
	int heath;
	int xp;
public:
	//methods
	void talk(string text_to_say){cout << name << " says " << text_to_say << endl;};
	bool is_dead();
};

int main()
{

	Player Zahid;
	Zahid.talk("Hello there");
	
	return 0;
}
