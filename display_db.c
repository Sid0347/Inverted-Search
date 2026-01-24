#include "inverted_search.h"

int display_db(hash_t *hash_arr)
{
    printf("%-7s %-20s %-12s %-20s %-12s\n",
           "Index", "Word", "File_Count", "File_Name", "Word_Count");
    printf("-------------------------------------------------------------------------\n");

    for (int i = 0; i < SIZE; i++)
    {
        /* Case 1: Check if main node is present or not. */
        if (hash_arr[i].main_link == NULL)
            continue;

        int index_print = 1;
        main_node *main_temp = hash_arr[i].main_link;
        
        while (main_temp)
        {
            if (index_print)
            {
                printf("%-7d %-20s %-12d ", hash_arr[i].index, main_temp->word, main_temp->file_count);
                index_print = 0;
            }
            else
                printf("%-7s %-20s %-12d ", " ", main_temp->word, main_temp->file_count);

            sub_node *sub_temp = main_temp->sub_link;
            while (sub_temp)
            {
                printf("%-20s %-12d\n", sub_temp->file_name, sub_temp->word_count);
                sub_temp = sub_temp->next;

                if (sub_temp)
                    printf("%-42s", " ");
            }
            main_temp = main_temp->next_link;
        }
    }
    printf("-------------------------------------------------------------------------\n");
    return SUCCESS;
}