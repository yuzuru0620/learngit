#include <iostream>
using namespace std;
int main()
{
	
	int x[100];
	int i=0,count=0;
	while (std::cin >> x[i])
	{
		i++;
		count++;
	}
	int max1=x[0],max2=x[count-1];
	for (i = count-1; i >-1; i--)
	{
		if (x[i]>max2&&x[i]<max1)
		{
			max2 = x[i];
		}
	}
	for (i = 0; i <count; i++)
	{
		if (x[i]==max1||x[i]==max2)
		{
			cout << x[i] << " ";
		}
	}
	return 0;
}