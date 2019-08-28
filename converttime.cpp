// C++ program to convert 12 hour to 24 hour 
#include<iostream> 
using namespace std; 

void print24(string str) 
{ 
	int h1 = (int)str[1] - '0'; 
	int h2 = (int)str[0] - '0'; 
	int hh = (h2 * 10 + h1 % 10); 
	if (str[8] == 'A') 
	{ 
		if (hh == 12) 
		{ 
			cout << "00"; 
			for (int i=2; i <= 7; i++) 
				cout << str[i]; 
		} 
		else
		{ 
			for (int i=0; i <= 7; i++) 
				cout << str[i]; 
		} 
	} 
 
	else
	{ 
		if (hh == 12) 
		{ 
			cout << "12"; 
			for (int i=2; i <= 7; i++) 
				cout << str[i]; 
		} 
		else
		{ 
			hh = hh + 12; 
			cout << hh; 
			for (int i=2; i <= 7; i++) 
				cout << str[i]; 
		} 
	} 
} 

int main() 
{ 
string str; 
cout<<"enter time with AM or PM";
cin>>str;
print24(str); 
return 0; 
} 
//while entering time format is hrs:min:secAM OR PM
//EXAMPLE 03:34:50PM
