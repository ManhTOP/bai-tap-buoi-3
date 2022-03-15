#include<iostream>
#include<limits> 
#include<math.h>
using namespace std;
int main()
{
	float n;
	cout << "Nhap n = ";
	cin >> n;
	if(!(cin))
	{
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	cout<<"Nhap lai n = ";
	cin>>n; 
    }
    float s;
    for(int i=0; i <= n; i++)
	{   
	   for(int j = 0; j < n; j++){
	   		s =2*(i+1)/(2*i+3);
		    s *= s;
	   }
	 
	 } 
	cout << " S = " << s << endl;      
 } 
 
