/***************************************************************************************************************************************************
*Author		:SIDDHARTH GAIKWAD
*Date		:Mon 08 Jan 2026 14:00:05 IST
*File		:main.c
*Title		:Driver function
*Description	:This function acts like the driver function for the project inverted search
****************************************************************************************************************************************************/
#include "inverted_search.h"

int main(int argc, char *argv[])
{
	/* Define the main function here */
	main_node main_list;
	sub_node sub_list;

	valid_file_list file_list;
	valid_file_list *head = NULL;

	/* Create hash table */
	hash_t hash_arr[SIZE];
	create_hashtable(hash_arr);


	/* Validate CLA */
	if (process_input_files(&head, argc, argv) == FAILURE)
	{
		printf("User inputs validation failed!\n");
		return 1;
	}

	/* Create Database */
	if (create_db(&head, hash_arr, &main_list, &sub_list) == FAILURE)
	{
		printf("Create database function failed!\n");
		return 1;
	}
	print_list(head);
	return 0;
}
