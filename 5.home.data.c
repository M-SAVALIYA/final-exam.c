#include<stdio.h>

struct home{
	
	int room_quantty;
 	char room[100];
 	int established_year;
 	char year[100];
 	char home_city[100];
 
};

void main()
{
	int n;
	
	printf("Enter home data = ");
	scanf("%d",&n);
	
	struct home s[n];
	
	int i;
	
	for(i=0 ; i<n ; i++)
	{
		printf("Enter home name = ");
		scanf("%d",&s[i].room);
		printf("Enter established_year = ");
//		scanf("%s",&s[i].city);
		printf("Enter home_city = ");
		scanf("%d",&s[i].year);
		
	}
	
	printf("\n\n------ home Details ------\n\n");
	
	for(i=0 ; i<n ; i++)
	{
		printf("home name = %d\n",s[i].room);
//		printf("established_year = %s\n",s[i].city);
		printf("home_city = %d\n",s[i].year);
	
	}
}