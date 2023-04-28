#include <stdlib.h>

typedef struct list {
    int data;
    struct list* next;
} list_t;

void free_list(list_t* head) {
    list_t* current = head;
    list_t* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}

