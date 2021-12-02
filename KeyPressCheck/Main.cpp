#include <iostream>
#include <conio.h>
using std::cin;
using std::cout;
using std::endl;

int main() {

	cout << "Press space to close." << endl;

	char key;
	int asciiKeyValue;

	while (1) {
		key = _getch();
		asciiKeyValue = key;

		if (asciiKeyValue == 32) //SPACE
			break;

		cout << "Pressing key : " << key << endl;
	}

	return 0;
}