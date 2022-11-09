#include<iostream>
using namespace std;

int main(){
	
	int size, i;
	
	cout << "Enter the size of an array: " << endl;
	cin >> size;

	int arr[size], small;
	
	cout << "Enter the numbers in an array: " << endl;
	for(i = 0; i < size; i++){
		cin >> arr[i];
	}	
	
	small = arr[0];
	
	for(i = 0; i < size; i++){
		if(small > arr[i]){
			small = arr[i];
		}
	}
	
	cout << "The smallest number is: " << small;
	
	return 0 ;
}
