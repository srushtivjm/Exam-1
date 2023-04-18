#include<stdio.h>
struct Student
{

	int roll_no;
	char name[100];
	char addr[1000];
	
};
main()
{
	int i;
	struct Student s[i];
	
	
	for(i=0;i<5;i++)
	{
		printf("Enter roll no=");
		scanf("%d",&s[i]);
		printf("Enter name=");
		scanf("%s",&s[i]);
		printf("Enter address=");
		scanf("%s",&s[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("Roll no=%d\nName=%s\nAddress=%s",&s[i].roll_no,&s[i].name,&s[i].addr);
	}
}
