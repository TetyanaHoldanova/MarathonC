#include "list.h"

void mx_pop_back(t_list **list) {
  t_list *ptr1, *ptr2;
  if((*list)->next == NULL) {
      free(*list);
      *list = NULL;
  }
  for(ptr1 = *list, ptr2 = (*list)->next;
    ptr2->next != NULL;
    ptr1 = ptr2, ptr2 = ptr2->next)
      ;
  free(ptr2);
  ptr1->next = NULL;
}
