#include<iostream>
using namespace std;
void printScore (int x)
{
	switch(x)
	{
		case(32):
			{
			       cout<<x<<endl;
			       break;
			}
		default:
			       break;

	}
}
int main()
{
	int x=0;
	cin>>x;
	printScore(x);
	return 0;
}
