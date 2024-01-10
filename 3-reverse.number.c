#include<stdio.h>

main()
{
	int n,s,ans = 0,temp;
	
	printf("Enter Number = ");
	scanf("%d",&n);
	
	temp = n;
	
	while(n!=0)
	{
		s = n % 10;
		ans = ans * 10 + s;
		n = n / 10;
		
	}
	
	printf("Reverse Number = %d\n",ans);
	
}