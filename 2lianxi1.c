#include<stdio.h>
int main()
{
	int num=0,cout=0;
	for(num;num<100;num++)
	{
		if(num%5==0)
		{
			cout++;
			}
			if(num%25==0)
			{
				cout++;
				}
		}
		printf("有%d个零",cout);

	}
