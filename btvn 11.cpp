#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Nhap vao so hang : ";
	cin >> a;
	cout << "Nhap vao do rong : ";
	cin >> b;
	for (int i = 1; i <= a; i++)
	{
		for (int j = i ; j >= 1 ; --j){
			cout << "*"; 
		}
		cout << endl; 
	 } 
 } 
