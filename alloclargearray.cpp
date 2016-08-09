#include<iostream>
using namespace std;
int main()
{
	int a[2000000],s=0; //for size greater than 3x10^6, it gives segmentation fault
	//return 0;

	for ( int i=0;i<2000000;i++)
	{
		a[i]  = s++;
	}
	for(int i=0;i<2000000;i++)
		cout<<a[i];
return 0;
}