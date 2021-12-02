#pragma once

#include <iostream>
#include <conio.h>

using namespace std;
void checkKeyPress() {
	char key;
	int asciiKeyValue;

	while (1) {
		key = getch();
		asciiKeyValue = key;

		if (asciiKeyValue == 32) //SPACE
			break;

		cout << "Pressing key : " << key << "!" << endl;
	}
}
