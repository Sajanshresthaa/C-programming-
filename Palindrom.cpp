#include<iostream>
using namespace std;

int main(){
	
	int a, num, digit, rev=0;

	cout << "Enter a positive number: ";
	cin >> num;
	
	a = num;
	
	do 
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	}while (num != 0);
	
	cout << "The reverse number is: "<<rev<<endl;
	
	if (a == rev){
		cout << "The number is palindrom";
	}
	
	else{
		cout << "The number is not palindrom";
	}
	
	return 0; 
}
