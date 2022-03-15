#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	int a;
	int b = 0; 
	for(int i = 1; i <= n; i++)
	{
		a = pow(i,3);
		b += a; 
	}
	cout << "Tong bac 3 cua " << n << " so nguyen dau tien " << b << endl;
    return 0; 
 } 
