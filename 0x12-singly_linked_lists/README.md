# Linked List Functions in C

This repository contains a set of functions written in C and assembly language that operate on a linked list structure called `list_t`. Each function serves a specific purpose to manipulate or interact with the linked list. Below is a brief description of the functions along with a summary of what linked lists are.

## Linked Lists Overview

A linked list is a data structure made up of nodes where each node contains a reference or pointer to the next node in the sequence. It consists of elements called "nodes", where each node contains data and a reference (or link) to the next node in the list.

Linked lists have several advantages, including dynamic memory allocation, efficient insertion and deletion operations, and flexibility in size.

### Operations Implemented:

1. **0-print_list.c - Print All Elements**
   - Function: `void print_list(list_t *list);`
   - Description: Prints all the elements present in the given `list_t` linked list.

2. **1-list_len.c - Count Elements**
   - Function: `size_t list_len(const list_t *list);`
   - Description: Returns the number of elements present in the given `list_t` linked list.

3. **2-add_node.c - Add Node at Beginning**
   - Function: `list_t *add_node(list_t **head, const char *str);`
   - Description: Adds a new node with the given string at the beginning of the `list_t` linked list.

4. **3-add_node_end.c - Add Node at End**
   - Function: `list_t *add_node_end(list_t **head, const char *str);`
   - Description: Adds a new node with the given string at the end of the `list_t` linked list.

5. **4-free_list.c - Free List**
   - Function: `void free_list(list_t *head);`
   - Description: Frees the memory occupied by all the elements of the `list_t` linked list.

6. **100-first.c - Pre-main Execution Message**
   - Function: `void __attribute__((constructor)) pre_main();`
   - Description: Prints the message "You're beat! and yet, you must allow,\nI bore my house upon my back!\n" before the execution of the main function.

7. **101-hello_holberton.asm - Assembly Program**
   - File: `hello_holberton.asm`
   - Description: A 64-bit program written in assembly that prints "Hello, Holberton," followed by a new line.
