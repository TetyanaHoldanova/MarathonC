#include "list.h"

void mx_push_index(t_list **list, void *data, int index){
    if(list != NULL && *list != NULL) {
        if (index <= 0)
            mx_push_front(list, data);
        else {
            t_list *tmp = *list;
            for (int i = 0; i <index; i++){
                if(tmp->next != NULL)
                    tmp = tmp->next;
            }
            if (tmtmp->next == NULL)
                mx_push_back(list, data);
            else {
                t_list *new_node = mx_create_node(data);
                new_node->next = tmp->next;
                tmp->next = new_node;
            }
        }
    }
}
