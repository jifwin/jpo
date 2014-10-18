#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>

using namespace std;

int main() {


	string ascii; //temporary for each exploded item
	ostringstream tekst; //output string stream
	string user_input; //user input
	
	cout << "Podaj kod ASCII:\n";
	getline(cin,user_input);
	stringstream ss(user_input);

	while(getline(ss,ascii,' ')) {
		tekst << (char)atoi(ascii.c_str());

	}
	
	cout << "Tekst:\n" << tekst.str() << endl;
	
	return 0;
}
