#include <iostream>

using namespace std;

class Load
{
private: 
	string name = "Sherlock";
	string cheat = "Cheat";

public:
	void setvalue(string nam, string cc)
	{
		name = nam;
		cheat = cc;
	}
	void print() {
		cout << name << endl;
		cout << cheat << endl;
	}
};



int main() {

	Load show;
	show.print();
	show.setvalue("Hacked", "cheat"); 
	show.print();
}