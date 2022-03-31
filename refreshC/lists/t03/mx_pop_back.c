#include "list.h"

void mx_pop_back(t_list **list) {
  t_list *ptr = *list;
  if((*list)->next == NULL) {
      free(*list);
      *list = NULL;
  }
    while (ptr->next->next != NULL)
        ptr = ptr->next;
    free(ptr->next);
    ptr->next = NULL;
}
