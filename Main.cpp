// ������
#include<iostream>
#include<string>
#include<fstream> // ���� �����, �������� �����- ���������� ���������� � ���� ������ ��� ������ � �������� ��������

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

	string path = "file.txt"; // ���� � �����

	// ������ � ����
	/*std::ofstream out(path, std::ios::app);// ���� ���� �� ����������, �� ����� ������
	// ��� out.open(path);
	// ��������
	if (out.is_open()) {// ���� ���� ������ ������
		cout << "���� ������ ��� ������\n";
		string tmp;
		cout << "������� ������: ";
		getline(cin, tmp);
			out << tmp +'\n';//���������� ������ � ����
	}
	else
		cout << "������ ��� ������\n";

	
	out.close();*/

	// ������ �� �����
	/*std::ifstream in;
	in.open(path);
	if (in.is_open()) {
		cout << "�������\n";
		// ������ ������. ������������ ����������
		/*char sym;
		while (in.get(sym)) {
			cout << sym;
		}*/

		//������ ������. ��������� ����������
		/**while (!in.eof()) {// ���� �� � ����� �����
			string tmp;
			in >> tmp;
			cout << tmp << ' ';
		}* /

		// ������ ������. ����������
		string str;
		while (getline(in, str))
			cout << str << '\n';
	}
	else
		cout << "������\n";
	in.close();*/

	// �������� �����
	/*if (!remove(path.c_str()))// ����� �����, ������������ �-���� ���������� ������
	    cout << "���� ������.\n";
	else
		cout << "������ �������� �����\n";*/

	// ������ 1.���������� � ����

	cout << "�������� 1 �����\n";
	string str;
	cin >> str;
	if (statistic(str))
		cout << "������� ��������\n\n";
	else
		cout << "������ ������\n\n";
	cin >> str;
	if (statistic(str))
		cout << "2 ������� ��������\n\n";
	else
		cout << "������ ������\n\n";
	

	return 0;
}