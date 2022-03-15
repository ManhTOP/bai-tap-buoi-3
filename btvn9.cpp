#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout << "Nhap N = ";
	cin >> n;
	if(n <= 0){
		cout << "Nhap sai vui long nhap lai N = ";
		cin >> n; 
	} 
	double s1 = 0, s2 = 0, s3 = 0;
	for(double i = 1 ; i <= n; i ++){
		s1 += i*i;
		s2 += pow ((2*i + 1),3); 
        s3 += pow ((2*i),4);  
	}
	cout << "S4 = " << s1 << endl;
	cout << "S5 = " << s2 << endl;
	cout << "s6 = " << s3 << endl;
	return 0; 
 } 
