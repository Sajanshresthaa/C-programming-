#include<iostream>
using namespace std;

int main()
{
	int size, i;
	
	cout << "Enter the size of the array: " << endl;
	cin >> size;
	int arr[size];
	
	cout << "Enter the numbers: " << endl;
	for(i = 0; i < size; i++){
			cin >> arr[i];
	}
	
	for (int i = size; i > 0; i--){
		arr[i] = arr[i - 1];
	}
	
	arr[0] = 100;
		
	cout << "Numbers in the array: " << endl;
	for(i = 0; i < size + 1; i++){
			cout << arr[i] << endl;
	}
}
