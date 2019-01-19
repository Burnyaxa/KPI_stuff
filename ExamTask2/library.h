#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector <string> getText(); //Ввод текста с клавиатуры
vector <string> editedText(vector <string> text); //Получение отформатированого текста
string changeWord(string); //Форматирование текста в соотвествии с поставленой задачей
void getResult(vector <string>); //Вывод результата на экран