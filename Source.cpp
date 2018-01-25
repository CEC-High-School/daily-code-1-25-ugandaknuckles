#include<iostream>
using namespace std;
char n;
char e;
char s;

int main() {
	cout << "Hello!. If you want io enter the magical castle enter the password" << endl;
	cout << "the password is 3 letters, enter 1 at a time" << endl;
	cin >> n;
	                     
	cin >> e;

	cin >> s;

	if (n == 'N'&& e == 'E' && s == 'S')
		cout <<"Welcome into the castle" << endl;
	else cout << "get out of my swamp" << endl;

	






	system("pause");
}