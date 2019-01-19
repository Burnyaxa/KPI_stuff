#include "library.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <string> getText(){
	cout << "Enter your text. Type 'stop' to stop entering" << endl;
	vector <string> text;
	string row;
	while (true){
		getline(cin, row);
		if (row == "stop") {
			break;
		}
		text.push_back(row);
	}
	return text;
}

vector <string> editedText(vector <string> text){
	for (int i = 0; i < text.size(); i++){
		text[i] = changeWord(text[i]);
	}
	return text;
}

string changeWord(string row){
	char toSwitch = row[0];
	int counter = 0;
	for (int i = 0; i < row.length(); i++){
		if (isalpha(row[i]) && isspace(row[i - 1])){
			toSwitch = row[i];
		}
		if (toSwitch == row[i]){
			if (counter >= 1){
				row[i] = '.';
			}
			counter += 1;
		}
		if (isspace(row[i])){
			toSwitch = NULL;
			counter = 0;
		}
	}
	return row;
}

void getResult(vector <string> text){
	cout << "Your resulting text :" << endl;
	for (int i = 0; i < text.size(); i++){
		cout << text[i] << endl;
	}
}
