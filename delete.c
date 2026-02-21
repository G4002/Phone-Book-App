#include"myheader.h"
CONTACT *Del(CONTACT *head)
{
    char name[20];
    CONTACT *pre = NULL;
    CONTACT *cur = head;

    if (head == NULL)
    {
        printf("The list is empty.\n");
        return head;
    }

    printf("Enter the name to delete: \n");
    scanf("%19s", name);

    while (cur != NULL)
    {
        if (strcmp(name, cur->Name) == 0)
        {
            // Found the contact to delete
            if (pre == NULL)
            {
                // Deleting the first node
                head = cur->link;
            }
            else
            {
                pre->link = cur->link;
            }

            free(cur);  // Free the deleted node
            printf("Deleted successfully.\n");
            return head;
        }

        pre = cur;
        cur = cur->link;
    }

    printf("Name not found.\n");
    return head;
}


