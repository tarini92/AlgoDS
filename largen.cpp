#include<iostream>
#include<ctime>

using namespace std;
int main()
{

	int n=10000,s=0;
clock_t begin = clock();
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				s = 2*s+1;
			}
		}
	}
clock_t end = clock();
double elapsed = (double)end-begin/CLOCKS_PER_SEC;	
	cout<<s;
	cout<<elapsed;
}