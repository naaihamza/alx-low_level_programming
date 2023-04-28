#include <stdio.h>

typedef struct list {
    char* str;
    struct list* next;
} list_t;

size_t print_list(const list_t* h) {
    size_t count = 0;

    while (h != NULL) {
        if (h->str == NULL) {
            printf("[0] (nil)\n");
        } else {
            printf("[%lu] %s\n", count, h->str);
        }

        count++;
        h = h->next;
    }

    return count;
}

