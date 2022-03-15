#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap N = ";
	cin>> n;
	cout << "Cac so hoan chinh la: "; 
	for(int i = 0 ; i <= n; i++){
		int s= 0;
		for(int j = 1; j <= i/2; j++){
			if(i%j==0){
				s += j; 
			} 
		}
		if(i == s){
		cout << s << ", "; 
	    } 	 
	}
	cout << endl; 
	return 0; 
 
 } 
