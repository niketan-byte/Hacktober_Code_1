#include<iostream>
#include<string.h>
 int main()
{
	char str[100],rev[100];
	printf("enter a string to check is it palendrome or not:\n");
	for(int i=0;i<3;i++)
	{gets(str);
	strcpy(rev,str);
	if(strcmp(str,strrev(rev))==0)
	printf("\tstring is palendrome\n");
	else
	printf("\tnot palendrome\n");}
return 0;
}
