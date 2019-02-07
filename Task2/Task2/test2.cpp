#include<iostream>
using namespace std;

int main() {
	int x;
	cout << "Enter number: ";
	cin >> x;
	for (int i = 1; i <= x / 2; i++) {
		if (x%i == 0) {
			cout << i << endl;
		}
	}
	cout << x << endl;
	system("pause");
	return 0;
}