#include"myheader.h"
void Edit(CONTACT*head)
{
	 if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    char name1[20];
    printf("Enter the name to edit: \n");
    scanf("%s", name1);
    CONTACT *temp = head;
    int found = 0;
    while (temp != NULL) {
        if (strcmp(name1, temp->Name) == 0)
        {
            found = 1;
            printf("Enter new name: \n");
            scanf("%s", temp->Name);
            printf("Enter new phone number: \n");
            scanf("%s", temp->Phno1);
           while(1)
                {
                printf("DO you want to chnge anathor number to the name y/n \n");
                char ch;
                __fpurge(stdin);
                scanf("%c",&ch);
                switch(ch)
                {
                case 'Y':scanf("%s",temp->Phno2);
                        break;
                case 'y':scanf("%s",temp->Phno2);
			 break;
                case 'N':goto s;
                case 'n':goto s;
                }
                }
s:        printf("Enter new email id: \n");
            scanf("%s", temp->emailid);  /* assume emailid array big enough */           
          printf("Contact updated.\n");
            break;  /* stop after first match */
        }
        temp = temp->link;
    }
    if (found==1) {
        printf("%s not found in contacts.\n", name1);
    }
}
              
