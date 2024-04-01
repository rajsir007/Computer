#include<stdio.h>
void main()
{
	FILE *fp;
	int o;
	char c;
	fp=fopen("cricket.txt","r");
	while(c!=EOF)
	{
		c=fgetc(fp);
		printf("%c",c);
	}
	fclose(fp);
	printf("Match Begins\n");
	printf("Enter how many overs match do you want to conduct:  ");
	scanf("%d",&o);
	
}