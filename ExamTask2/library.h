#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector <string> getText(); //Ввод текста с клавиатуры
vector <string> editedText(vector <string> text); //Получение отформатированого текста в соответсвии с задачей
string changeWord(string); //Форматирование каждой строки текста
void getResult(vector <string>); //Вывод конечного результата на экран
