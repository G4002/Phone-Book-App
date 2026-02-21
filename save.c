#include"myheader.h"
extern int size;
void Save(CONTACT *ptr)
{
	FILE *fp;
	if(ptr==NULL)
	{
		printf("list is empty\n");
		return;
	}
	fp=fopen("stu","w");
	while(ptr)
	{
		fwrite(ptr,size,1,fp);
		ptr=ptr->link;
	}
	fclose(fp);
}

