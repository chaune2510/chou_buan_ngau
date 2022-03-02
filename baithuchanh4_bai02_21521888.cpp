#include<iostream>
#include<math.h>
float n;
using namespace std;
 sum(int n) {
    if (n == 1) return 1;
    return sum(n - 1) + n;
}
int sum2(int n)
{
	if (n==1) return 1;
    return sum2(n-1)+pow(n,2);
}
float sum3(float n)
{
	if (n==1) return 1;
    else return sum3(n-1)+1/n;
}
int sum4(int n)
{
	int gt = 1;
	if (n==1) return 1;
	for (int i = 1; i <= n; i++) gt = gt * i;
    return sum4(n-1)+gt;

}
int main()
{
	do
	{
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
		if (n < 0)
		{
			cout << "Nhap lai: ";
		}
	} while (n < 0);
	cout << " tong tu 1 den "<<n<<" :";
	cout <<sum(n);cout<<endl;
	cout << " tong tu 1, 2^2 den "<<n<<"^2 :";
	cout <<sum2(n);cout<<endl;
	cout << " tong tu 1 den 1/"<<n<<" :";
	cout <<sum3(n);cout<<endl;
	cout << " tong tu 1! den "<<n<<"! :";
	cout <<sum4(n);
}
