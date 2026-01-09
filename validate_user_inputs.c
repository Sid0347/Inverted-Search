#include "inverted_search.h"

int validate_user_inputs(valid_file_list **head1, int argc, char argv[])
{
    for (int i = 1; i <= argc; i++)
    {
        /* extenstion should be .txt */
        if (strstr(argv[i], ".txt") == NULL)
            continue;
        
        /* Check file should not be duplicate */
        if (is_duplicate(&head1, argv[i]) == FAILURE)
            continue;
    }
}

/*******************************************************************************************************************************************************************
* Title            : Check Duplicate File
* Description      : This function checks whether the given file name is already present in the valid file list.
*                    It traverses the linked list and compares the stored file names with the given file name
*                    using string comparison. If a duplicate is found, it returns FAILURE, otherwise SUCCESS.
* Prototype        : int is_duplicate(valid_file_list ***head2, char *file_name);
*
* Input Parameters : head2     : Triple pointer to the head of the valid file linked list.
*                    file_name: Name of the file to be checked for duplication.
*
* Output           : Status (SUCCESS if file is not duplicate / FAILURE if duplicate file found)
*******************************************************************************************************************************************************************/
int is_duplicate(valid_file_list ***head2, char file_name)
{
    if (**head2 == NULL) /* If it is NULL then no node is there */
        return SUCCESS;
    
    valid_file_list *temp = **head2;
    while (temp != NULL)
    {
        if (!strcmp(temp->files, file_name))
            return FAILURE;
        
        temp = temp->link;
    }
    return SUCCESS;
}