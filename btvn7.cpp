#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	 if(n <= 0){
	 	cout << "Ban nhap sai vui long nhap lai : ";
		cin >> n; 
	 }
	 float s=0; 
	 for (float i = 1; i <= n ; i++)
	 {
	 	s += 1/i; 
	  } 
	  cout << "Tong nghich dao cua " << n << " so nguyen dau tien = " << s << endl; 
}
