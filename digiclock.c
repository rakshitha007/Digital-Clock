#include<stdio.h>
#include<unistd.h>
#include<conio.h>

int main()
{
	int hr,min,sec;
	system("cls"); 
	printf("Set time (HR MIN SEC):\n");
	scanf("%d%d%d",&hr,&min,&sec);

	if(hr < 24 && min < 60 && sec < 60) {
		while(1) {
			system("cls");
			printf("%02d:%02d:%02d",hr,min,sec);
			sec++;
			if(sec==60) {	
				min++;
				sec=0;
			}
			if(min==60) {
				hr++;
				min=0;
			}
			if(hr==24) {
				hr=min=sec=0;
			}
			sleep(1);
		}
	} else {
		printf("Invalid input!!!");
	}
	
	return 0;
}
