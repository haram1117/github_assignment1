#include <iostream>
using namespace std;

int main() {
	
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			cout << i << " * " << j << " = " << i * j;
			cout << endl;
		}
		cout << endl;
	}
	for(int i=1; i<=10; i++) {
		cout << "9 * " << i << " = " << 9*i << "\n";
	}
	return 0;
}
