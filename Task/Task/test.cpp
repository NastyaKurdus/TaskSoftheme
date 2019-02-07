#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	ifstream fin("INPUT.txt"); 
	int count,max_count=0;
	char c;
	if (!fin.is_open()) // если файл не открыт
		cout << "Файл не может быть открыт!\n";
	else {
		while (fin.get(c)) {
				count = 0;
				while (!fin.eof()&&c == '1') {
					count++;
					fin.get(c);
				}
				if (count > max_count) {
					max_count = count;
				}
		}
	}
	fin.close();
	ofstream fout("OUTPUT.txt");
	fout << to_string(max_count);
	fout.close();
	system("pause");

	return 0;
}