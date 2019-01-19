/* Ввести текст. Выделить каждое слово в данном тексте и первую в нем букву.
Заменить в каждом слове повтор первой буквы на точку. */

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

