#include<math.h>
#include<iostream> 
using namespace std;
int main()
{
	int n;
	cout << "Nhap N = ";
	cin >> n;
	if(n < 2){
		cout << " Khong Ton Tai So Nguyen To Be Hon Hoac Bang N !";
		cout << endl; 
	}
	cout << "So nguyen to be hon hoac bang n la:"<< endl; 
    for (int j= 2; j < n; j ++){
    		int s = 0; 
       for(int i = 2; i <= j/2; i++)
	   {
	   
		if(n%i == 0){
			s++; 
		}
	   }
	   if (s == 0){
	   	cout << j << " "; 
	   } 
	}
}
