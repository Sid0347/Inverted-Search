#ifndef INVERTED_SEARCH_H
#define INVERTED_SEARCH_h

#include <stdio.h>

#define SUCCESS 0
#define FAILURE -1
#define SIZE 26

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
typedef struct hash
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


int validate_user_inputs(int argc, char argv[]);
#endif