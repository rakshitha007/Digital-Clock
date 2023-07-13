#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int hr,min,sec;
	system("clear"); //clears output screen
	printf("Set time :\n");
	scanf("%d%d%d",&hr,&min,&sec);
	while(1)
	{
		system("clear");
		printf("%02d:%02d:%02d",hr,min,sec);
		fflush(stdout);
		sec++;
		if(sec==60)
		{	
			min++;
			sec=0;
		}
		if(min==60)
		{
			hr++;
			min++;
		}
		if(hr==24)
		{
			hr=0;
			min=0;
			sec=0;
		}
		sleep(1);
	}
	return 0;
}