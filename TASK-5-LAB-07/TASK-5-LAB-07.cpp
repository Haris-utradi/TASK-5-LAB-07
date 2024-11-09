#include <iostream>
using namespace std;
int main() {
	int arr[10];
	int countp = 0;
	int countn = 0;
	int countzero = 0;
	int countodd = 0;
	int counteven = 0;

	for (int i = 0; i < 10; i++) {
		cout << "Enter a Number" << i + 1 << " : ";
		cin >> arr[i];

		if (arr[i] > 0) {
			countp = countp + 1;
		}
		if (arr[i] < 0) {
			countn = countn + 1;
		}
		if (arr[i] == 0) {
			countzero = countzero + 1;
		}
		if (arr[i] % 2 == 0) {
			if (arr[i] == 0) {
				continue;
			}
			else {
				counteven = counteven + 1;
			}
		}
		if (arr[i] % 2 != 0) {
			countodd = countodd + 1;
		}
	}
	cout << "The Number of P Numbers are : " << countp << endl;
	cout << " The Number of N Numbers are : " << countn << endl;
	cout << " The Number of Even Numbers are : " << counteven << endl;
	cout << " The Number of Odd Numbers are : " << countodd << endl;
	cout << " The Number of Zero are : " << countzero << endl;

	return 0;
}