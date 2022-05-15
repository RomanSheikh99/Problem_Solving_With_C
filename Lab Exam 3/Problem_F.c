#include<stdio.h>

int main()
{
	char n,count=0;
	n=getchar();
	while(n!='\n')
	{
		if(n=='4'||n=='7')
		{
			count++;
		}
		n=getchar();
	}
	if(count==7||count==4)
	{
		printf("YES\n");
	}else printf("NO\n");
	return 0;
}
