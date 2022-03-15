#include<iostream>
#include<math.h> 
using namespace std;
int main()
{
	int n;
	cout << "Nhap N = ";
	cin >> n;
	if(n < 2){
		cout << "Day Khong Phai So Nguyen To !"; 
	} 
	int s = 0; 
    for(int i = 2; i <= n/2; i++)
	{
		if(n%i == 0){
			s++; 
		}
 
	  }
	    if(s != 0){
			cout << "Day Khong Phai So Nguyen To !";		
		} 
		else{
			cout << "Day La So Nguyen To !";

		} 
		return 0;
 } 
