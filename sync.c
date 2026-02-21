#include"myheader.h"
extern int size;
CONTACT *SyncFromFile(CONTACT *head)
{
        CONTACT *nu=NULL,*temp=NULL;
        CONTACT var;
        FILE *fp;
        fp=fopen("stu","r");
        if(fp==NULL)
        {
                return head;
        }
        while(fread(&var,size,1,fp)==1)
        {
                nu=calloc(1,sizeof(CONTACT));
                if(nu==NULL)
                {
                        printf("Node not creatured\n");
                        return head;
                }
                strcpy(nu->Name,var.Name);
                strcpy(nu->Phno1,var.Phno1);
                strcpy(nu->emailid,var.emailid);
                if(head==NULL)
                {
                        head=nu;
                }
                else
                {
                        for(temp=head;temp->link;temp->link);
                        temp->link=nu;
                }
        }
        fclose(fp);
        return head;
}

