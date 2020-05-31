#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	float x=22.3;	//declaring a float variable
	cout<<x<<endl;	//printing the float variable
	
	
	double y=23.456;	//declaring a float variable with 3 decimal positions
	cout<<y<<endl;	//printing the whole number stored in y
	
	cout<<setprecision(2)<<fixed<<y<<endl; //printing the variable y only with 2 decimal positions
	
	cout<<scientific<<y<<endl;	//printing the variable y in the scientific format
	

        //waiting for the user to press ENTER
        cin.get();


	return 0;
}

