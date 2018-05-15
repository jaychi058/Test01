#include <iostream>

using namespace std;

int main(){

	int number = 0;

	cout << "Enter an integer: ";
	cin >> number;

	if(number > 0){
		cout << "Positive." << endl;
	}else if(number % 2 == 0){
		cout << "Even." << endl;
	}


	return 0;
}
