#include<iostream>
using namespace std;

int main(){
	
	int size, i, e = 0, o = 0;
	
	cout << "Enter the size of an array: " << endl;
	cin >> size;

	int arr[size];
	
	cout << "Enter the numbers in an array: " << endl;
	for(i = 0; i < size; i++){
		cin >> arr[i];
		if (arr[i] % 2 == 0){
			e == e++;
		}
		else{
			o == o++;
		}
	}
	
	cout << "Total number of even: " << e << endl;	
	cout << "Total number of odd: " << o << endl;
}


