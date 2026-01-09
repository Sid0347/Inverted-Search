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
	valid_file_list *head = NULL;

	/* Validate CLA */
	if (validate_user_inputs(&head, argc, argv) == FAILURE)
	{
		printf("User inputs validation failed!\n");
		return 1;
	}
}

