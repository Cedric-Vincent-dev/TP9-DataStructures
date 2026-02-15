#include "heap.h"
#include <stdlib.h>

static void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

static void heapify_up(Heap* heap, int index) {
    while (index > 0) {
        int parent = (index - 1) / 2;
        if (heap->data[parent] < heap->data[index]) {
            swap(&heap->data[parent], &heap->data[index]);
            index = parent;
        } else break;
    }
}

static void heapify_down(Heap* heap, int index) {
    while (2 * index + 1 < heap->size) {
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        int largest = index;

        if (heap->data[left] > heap->data[largest]) largest = left;
        if (right < heap->size && heap->data[right] > heap->data[largest]) largest = right;

        if (largest != index) {
            swap(&heap->data[index], &heap->data[largest]);
            index = largest;
        } else break;
    }
}

void init_heap(Heap* heap, int capacity) {
    heap->data = (int*)malloc(sizeof(int) * capacity);
    heap->capacity = capacity;
    heap->size = 0;
}

void insert_heap(Heap* heap, int value) {
    if (heap->size >= heap->capacity) return;
    heap->data[heap->size] = value;
    heapify_up(heap, heap->size);
    heap->size++;
}

int extract_max(Heap* heap) {
    if (heap->size == 0) return -1;
    int max = heap->data[0];
    heap->data[0] = heap->data[heap->size - 1];
    heap->size--;
    heapify_down(heap, 0);
    return max;
}

int is_empty_heap(Heap* heap) {
    return heap->size == 0;
}

void clear_heap(Heap* heap) {
    free(heap->data);
    heap->data = NULL;
    heap->capacity = 0;
    heap->size = 0;
}
