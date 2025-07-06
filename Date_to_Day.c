/** Date2Day **/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int q, m, y, k, j, h;
	char month[10];
	/* Date*/
	printf("\n\tEnter the date:");
	scanf("%d", &q);
	/* Year */
	printf("\n\tEnter the year:");
	scanf("%d", &y);
	/* Month */
	printf("\n\tEnter the month name:");
	scanf("%s", &month);
	if (strcmp(month, "March")==0)
		m=3;
	else if (strcmp(month, "April")==0)
		m=4;
	else if (strcmp(month, "May")==0)
		m=5;
	else if (strcmp(month, "June")==0)
		m=6;
	else if (strcmp(month, "July")==0)
		m=7;
	else if (strcmp(month, "August")==0)
		m=8;
	else if (strcmp(month, "September")==0)
		m=9;
	else if (strcmp(month, "October")==0)
		m=10;
	else if (strcmp(month, "November")==0)
		m=11;
	else if (strcmp(month, "December")==0)
		m=12;
	else if (strcmp(month, "January")==0)
	{
		m=13;
		y=y-1;
	}
	else if (strcmp(month, "February")==0)
	{
		m=14;
		y=y-1;
	}
	else
		printf("Invalid Month Name");
	
	k=y%100;
	j=y/100;
	
	/** Zeller's Formula **/
	h=(q+((13*(m+1))/5)+k+(k/4)+(j/4)+5*j)%7;
	// system("cls");
	
	switch(h)
	{
		case 0:
			printf("%d %s %d is Saturday",q, month, y);
				break;
		case 1:
			printf("%d %s %d is Sunday",q, month, y);
				break;
		case 2:
			printf("%d %s %d is Monday",q, month, y);
				break;
		case 3:
			printf("%d %s %d is Tuesday",q, month, y);
				break;
		case 4:
			printf("%d %s %d is Wednesday",q, month, y);
				break;
		case 5:
			printf("%d %s %d is Thursday",q, month, y);
				break;
		case 6:
			printf("%d %s %d is Friday",q, month, y);
				break;
	}
	return 0;
}
