#include <iostream>
#include <vector>
using namespace std;

int main()
{
long long n=0,add = 0;
cin>>n;

vector <unsigned long long> v(n);
for(unsigned long long i=0;i<n;i++) 
{
	cin>>v[i];
	add += v[i];
}

cout<<add<<"\n";
return 0;
}
