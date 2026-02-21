#include"myheader.h"
void Find(CONTACT *head)
{
	int f=0;
	CONTACT *temp=head;
	if(head==NULL)
	{
		printf("the list is empty\n");
		return;
	}
	char name[20];
	printf("enter the name\n");
	scanf("%s",name);
		while(temp)
	{
		if(strcmp(temp->Name,name)==0)
		{
			f=1;
			printf("contact found %s\n %s\n %s\n %s\n", temp->Name,temp->Phno1,temp->Phno2,temp->emailid);
		}
		temp=temp->link;
	}
	if(f==0)
	{
		printf("the file %s not found\n",name);
	}
}

