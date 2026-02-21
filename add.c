#include"myheader.h"
CONTACT *Add(CONTACT *head)
{
        CONTACT *nu=NULL,*temp=NULL,*prev=NULL;
        nu=calloc(1,sizeof(CONTACT));
        if(nu==NULL)
        {
                printf("node not created\n");
        }
        else
        {
                printf("eneter the name\n");
                scanf("%s",nu->Name);
                printf("eneter the no\n");
                scanf("%s",nu->Phno1);
                while(1)
                {
                printf("DO you want to add anathor number to the name y/n \n");
                char ch;
                __fpurge(stdin);
                scanf("%c",&ch);
                switch(ch)
                {
                case 'Y':
                case 'y':scanf("%s",nu->Phno2);
			 nu->has_phn2=1;
			 break;
                case 'N':goto s;
                case 'n':goto s;
                }
                }
	}
s:
	while(1)
                {
                printf("DO you want to add mail to the name y/n \n");
                char ch;
                __fpurge(stdin);
                scanf("%c",&ch);
                switch(ch)
                {
                case 'Y':goto m;
                        break;
                case 'y':goto m;
                         break;
                case 'N':goto n;
                case 'n':goto n;
                }
                }
m:	    	printf("enetr the mail\n");
                scanf("%s",nu->emailid);
		nu->has_mail =1;
                if(head==NULL||strcmp(nu->Name,nu->Name)<0)
                {
                        nu->link=head;
                        head=nu;
                }
               // else
                //{
n:                        prev=head;
                        temp=head->link;
                        while(temp!=NULL&&strcmp(temp->Name,nu->Name)<0)
				{
                                prev=temp;
                                temp=temp->link;
                        }
                        prev->link=nu;
                        nu->link=temp;
               // }
                return head;
        
}
