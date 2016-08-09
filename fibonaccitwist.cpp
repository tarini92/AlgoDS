#include<iostream>
#include<ctime>
#include<sys/time.h>
using namespace std;


int fibo(int);
int main()
{
	int n = 38;
	//timespec ts;
	clock_t begin = clock();
	//clock_gettime(CLOCK_REALTIME, &ts);
	cout<<fibo(n)<<endl;
	clock_t end = clock();
	cout<<(double)(end-begin)/CLOCKS_PER_SEC;
	
    //  clock_gettime(CLOCK_REALTIME, &ts);
      //cout<<ts;
	return 0;
}

int fibo(int a)
{
	if(a==0)
		return 0;
	else if(a==1)
		return 1;
	else 
		return (fibo(a-1)+fibo(a-2))%100;	
}