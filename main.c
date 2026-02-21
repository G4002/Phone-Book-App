#include"myheader.h"
int size=sizeof(CONTACT)-sizeof(CONTACT * );
int main()
{
	CONTACT *head=NULL;
	char choice;
	head=SyncFromFile(head);
	while(1)
	{
		printf("\n*****************MENU*********************");
		printf("\nC.create a new contact\nP.print all contacts\nD.delete contact\nF.find contact\nS.save contact in file\nQ.quite\n");
		printf("enter your choice\n");
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
			case'c':
			case 'C':head=Add(head);
				 break;
			case 'p':
			case 'P':Print(head);
				  break;
			case 'e':
			case 'E':Edit(head);
				 break;
			case 'f':
			case 'F':Find(head);
				 break;
			case 'd':
			case 'D':head=Del(head);
				 break;
			case 's':
			case 'S':Save(head);
				 break;
			case 'q':
			case 'Q':exit(0);
		}
	}
}
