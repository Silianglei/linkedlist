#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

int main(){
  struct node * n = NULL;
  printf("\n");
  printf("Empty Linked List: \n");
  print_list(n);

  printf("\n");

  printf("Adding #s 0-9 to Linked List\n" );
  int i;
  for (i = 0; i < 10; i++){
    n = insert_front(n, i);
  }
  print_list(n);
  printf("\n");
  printf("\n");

  n = remove_node(n, 6);
  printf("Removing %d: ", 6);
  print_list(n);

  n = remove_node(n, 9);
  printf("\nRemoving %d: ", 9);
  print_list(n);

  n = remove_node(n, 2);
  printf("\nRemoving %d: ", 2);
  print_list(n);

  n = remove_node(n, -5);
  printf("\nRemoving %d: ", -5);
  print_list(n);

  n = remove_node(n, 36);
  printf("\nRemoving %d: ", 36);
  print_list(n);

  printf("\n");
  printf("\n");


  printf("Freeing List: ");
  n = free_list(n);
  printf("\n");
  printf("Printing List:\n" );
  print_list(n);
  printf("\n");



  return 0;
}
