#include<iostream>
using namespace std;

int main(){
	
	int size, i, j, temp;
	
	cout << "Enter the size of an array: " << endl;
	cin >> size;

	int arr[100];
	
	cout << "Enter the numbers in an array: " << endl;
	for(i = 1; i <= size; i++){
		cin >> arr[i];
	}
	
	for(i = 0; i < size; i++){	
		for(j=i; j < size; j++){
			if(arr[i] > arr[j+1]){
				temp = arr[i];
				arr[i] = arr[j+1];
				arr[j+1] = temp;
			}
		}		
	}
	
	cout << "In Ascending Order" << endl;
	for(i = 1; i <= size; i++){
		cout << arr[i] << endl;
	}
}
		
