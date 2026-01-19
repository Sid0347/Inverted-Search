#include "inverted_search.h"

int create_db(valid_file_list **head, hash_t *hash_arr, main_node *main_list, sub_node *sub_list)
{
    if (*head == NULL)
    {
        printf("File list is empty.\n");
        return FAILURE;
    }

    valid_file_list *temp = *head;
    while (temp != NULL)
    {
        FILE *fptr = fopen(temp->files , "r");
        if (!fptr)
        {
            temp = temp->link;
            perror("fopen : ");
            continue;   /* skip current file */
        }

        char line[1024];
        char *word;
        while (fgets(line, sizeof(line), fptr))
        {
            word = strtok(line, " \t\n.,;:!?\"'()[]{}<>-_/\\");
            while (word)
            {
                store_word(word, temp->files, hash_arr, main_list, sub_list);
                word = strtok(NULL, " \t\n.,;:!?\"'()[]{}<>-_/\\");
            }
        }


        fclose(fptr);
        temp = temp->link;
    }
    return SUCCESS;
}

int store_word(char *word, char *file_name, hash_t *hash_arr, main_node *main_list, sub_node *sub_list)
{
    while (*word)
    {
        *word = tolower((unsigned char) *word);
        word++;
    }

    int Index = *word - 'a';

    if (hash_arr[Index].main_link == NULL)
    {
        main_node *new = malloc(sizeof(hash_t));
        new->file_count = 1
    }
}