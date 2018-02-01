#include <iostream>
#include <math.h>
using namespace std;

bool isprime(unsigned int );

int main()
{
	int N; 
	cin>>N;
	if (N<2)
	{
		cout<<"ko phai nguyen to"<<endl;
	}
	else 
	{
			if (isprime(N) ==true)
			{
			cout<<"la so nguyen to"<<endl;
			}
			else
			{
				cout<<"ko phai nguyen to"<<endl;
			}

	}

}
bool isprime(unsigned int N)
{
	for (int i=2;i<= sqrt(N);i++)
	{
		if (N%i==0)
			return false;

	}
	return true;
}