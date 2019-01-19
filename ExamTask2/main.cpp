#include "library.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	vector <string> text = getText();
	text = editedText(text);
	getResult(text);
	system("pause");
	return 0;

}

