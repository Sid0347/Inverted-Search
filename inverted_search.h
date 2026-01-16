#ifndef INVERTED_SEARCH_H
#define INVERTED_SEARCH_h

#include <stdio.h>
#include <string.h>
#include <errno.h>  /* It's needed to use perror() */
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1
#define SIZE 27

/* Sub Node */
typedef struct sub_node
{
    int word_count;
    char file_name[50];
    struct sub_node *next;
}sub_node;

/* Main Node */
typedef struct main_node
{
    int file_count;
    char word[50];
    struct sub_node *sub_link;  /* Contain list node link */
    struct main_node *next_link;    /* Contain next hash node link which having same index */
}main_node;

/* Contain index of main nodes */
typedef struct hash_table
{
    int index;
    struct main_node *main_link;
}hash;

/* Contain valid files */
typedef struct valid_file_list
{
    char files[50];
    struct valid_file_list *link;
}valid_file_list;

/* Processes command-line inputs, validates files, and builds the valid file linked list */
int process_input_files(valid_file_list  **head1, int argc, char *argv[]);
/* Checks whether the given file exists and is not empty */
int is_exist_or_empty(char *file_name);
/* Checks if the given file name already exists in the valid file linked list */
int is_duplicate(valid_file_list **head2, char *file_name);
/* Creates a new node with the file name and appends it to the valid file linked list */
int create_file_list(valid_file_list **head, char *file_name);
/* Traverses and prints all file names stored in the valid file linked list */
void print_list(valid_file_list *head);
#endif