#include<iostream>
using namespace std;
int main()
{
	
// Declare variables
	int n,m,roll[5],log=5;
	string name[5];
	
// Enter name and roll number
	for(n=0;n<5;n++){
		cout<<"Enter your name :";
		cin>>name[n];
		cout<<"Enter your roll number :";
		cin>>roll[n];
	}
	
// Enter roll number of student which name you want to print
	cout<<"Enter the roll number you want to search: ";
	cin>>m;
	for(n=0;n<5;n++){
		if(roll[n]==m){
			cout<<"name of studdent is : "<<name[n]<<endl;
		}
	}

// End of program
	return 0;                                             
}