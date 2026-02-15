#ifndef HEAP_H
#define HEAP_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Heap {
    int* data;
    int capacity;
    int size;
} Heap;

void init_heap(Heap* heap, int capacity);
void insert_heap(Heap* heap, int value);
int extract_max(Heap* heap);
int is_empty_heap(Heap* heap);
void clear_heap(Heap* heap);

#ifdef __cplusplus
}
#endif

#endif

