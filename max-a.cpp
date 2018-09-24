//include library
#include <iostream>
using namespace std;
//function to take two parameter
int maximum (int a, int b)
{
	cout<<"enter the two numbers"<<endl;
	cin>>a>>b;
//return max
	if(a>b)
	{
		cout<< "the maximum is "<<a<<endl;
	}
	
	else
	cout<< "the maximum is "<<b<<endl;
	

		
	return 0;
}
// main function
int main()
{
	int a,b;
	maximum(a,b);
	return 0;

}

