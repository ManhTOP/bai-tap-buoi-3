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
	float s1 = 0, s2 = 0, s3 = 0;
	for(int i = 1 ; i <= n; i ++){
		s1 += i;
		if(i % 2 == 0){
			s2 += i;
		}
		else{
			s3 += i;
		} 
		
  
	}
	cout << "S1 = " << s1 << endl;
	cout << "S2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;
	return 0; 
 } 
