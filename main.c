#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

int main(){
  struct node *start;
  start = insert_front(start, 6);
  print_list(start);
  free_list(start);
  return 0;
}
