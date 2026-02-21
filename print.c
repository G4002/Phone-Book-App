#include"myheader.h"
void Print(CONTACT *ptr)
{
	if(ptr==NULL)
	{
		printf("the file is empty");
	}
	else
	{
		while(ptr)
		{
			printf("Name : %s\n",ptr->Name);
			printf("Phone number : %s\n",ptr->Phno1);
			if(ptr->has_phn2)
			printf("Phone number2: %s\n",ptr->Phno2);
			if(ptr->has_mail)
			printf("Email : %s\n",ptr->emailid);
			ptr=ptr->link;
		}
	}
}

