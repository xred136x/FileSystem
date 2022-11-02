// шаблон
#include<iostream>
#include<string>
#include<fstream> // файл стрим, файловый поток- библиотека содержащая в себе классы для работы с файловой системой

using namespace std;

bool statistic(string word) {
	string path = "file.txt";
	ofstream out;
	out.open(path, ios::app);
	if (out.is_open()) {
		out << word + ' ' << word.size() << '\n';// no endl
		out.close();
		return true;
	}
	out.close();
	return false;
	
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	string path = "file.txt"; // путь к файлу

	// запись в файл
	/*std::ofstream out(path, std::ios::app);// если файл не существует, то будет создан
	// или out.open(path);
	// действия
	if (out.is_open()) {// если файл открыт успшно
		cout << "файл открыт для записи\n";
		string tmp;
		cout << "введите строку: ";
		getline(cin, tmp);
			out << tmp +'\n';//добавление записи в файл
	}
	else
		cout << "открыт для записи\n";

	
	out.close();*/

	// чтение из файла
	/*std::ifstream in;
	in.open(path);
	if (in.is_open()) {
		cout << "открыто\n";
		// первый способ. посимвольное считывание
		/*char sym;
		while (in.get(sym)) {
			cout << sym;
		}*/

		//второй способ. пословное считывание
		/**while (!in.eof()) {// пока не в конце файла
			string tmp;
			in >> tmp;
			cout << tmp << ' ';
		}* /

		// третий способ. построчный
		string str;
		while (getline(in, str))
			cout << str << '\n';
	}
	else
		cout << "ошибка\n";
	in.close();*/

	// удаление файла
	/*if (!remove(path.c_str()))// метод строк, возвращающий С-шный символьный массив
	    cout << "файл удален.\n";
	else
		cout << "ошибка удаления файла\n";*/

	// задача 1.статистика в файл

	cout << "введтите 1 слово\n";
	string str;
	cin >> str;
	if (statistic(str))
		cout << "успешно записано\n\n";
	else
		cout << "ошибка записи\n\n";
	cin >> str;
	if (statistic(str))
		cout << "2 успешно записано\n\n";
	else
		cout << "ошибка записи\n\n";
	

	return 0;
}