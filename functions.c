#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

void print_list(struct node *pointer) {
  printf("[");
  while((*pointer).next != NULL){
    printf("%d", (*pointer).i);
    pointer = (*pointer).next;
  };
  printf("%d", (*pointer).i);
  printf("]");
}

struct node * insert_front(struct node *pointer, int number){
  struct node *begin;
  begin = malloc(12);
  begin -> i = number;
  begin -> next = pointer;
  return begin;
}

struct node * free_list(struct node *pointer) {
  struct node *nextnode = pointer ;
  while((*nextnode).next != NULL) {
    nextnode = (*nextnode).next;
  }
  while(nextnode =! NULL){
    free(nextnode);
    nextnode = &nextnode;
  }
  return pointer;
}
