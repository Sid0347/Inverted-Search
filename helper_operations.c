#include "inverted_search.h"

/***************************************************************************************************
 * Title       : Create File List
 * Description : This function creates a new node with the given file name and appends it
 *               to the end of the valid file linked list. If the list is empty, the new node
 *               becomes the head of the list.
 *
 * Prototype   : int create_file_list(valid_file_list **head, char *file_name);
 *
 * Input       : head      : Double pointer to the head of the valid file linked list.
 *               file_name: Name of the file to be added to the list.
 *
 * Output      : Status (SUCCESS on successful insertion / FAILURE on memory allocation failure)
 ***************************************************************************************************/
int create_file_list(valid_file_list **head, char *file_name)
{
    valid_file_list *new = malloc(sizeof(valid_file_list));
    if (!new)
    {
        perror("Allocation : \n");
        return FAILURE;
    }

    strcpy(new->files, file_name);
    new->link = NULL;
    /* Check if list is empty */
    if (*head == NULL)
    {
        *head = new;
        return SUCCESS;
    }
    /* Check if list is not empty */
    valid_file_list *temp = *head;
    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = new;
    return SUCCESS;
}

/***************************************************************************************************
 * Title       : Print File List
 * Description : This function traverses the valid file linked list and prints each file name
 *               in sequence. If the list is empty, it displays an appropriate message.
 *
 * Prototype   : void print_list(valid_file_list *head);
 *
 * Input       : head : Pointer to the head of the valid file linked list.
 *
 * Output      : Prints the file names in the list followed by NULL.
 ***************************************************************************************************/
void print_list(valid_file_list *head)
{
	if (head == NULL)
	{
		printf("INFO : List is empty\n");
	}
    else
    {
	    while (head)		
	    {
		    printf("%s -> ", head -> files);
		    head = head -> link;
	    }

	    printf("NULL\n");
    }
}