#include "map.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

static unsigned int hash(const char* key, int capacity) {
    unsigned int h = 0;
    while (*key) {
        h = (h * 31) + *key++;
    }
    return h % capacity;
}

void init_map(Map* map, int capacity) {
    map->capacity = capacity;
    map->buckets = (MapNode**)calloc(capacity, sizeof(MapNode*));
}

void put(Map* map, const char* key, int value) {
    unsigned int idx = hash(key, map->capacity);
    MapNode* node = map->buckets[idx];
    while (node) {
        if (strcmp(node->key, key) == 0) {
            node->value = value;
            return;
        }
        node = node->next;
    }
    node = (MapNode*)malloc(sizeof(MapNode));
    node->key = strdup(key);
    node->value = value;
    node->next = map->buckets[idx];
    map->buckets[idx] = node;
}

int get(Map* map, const char* key) {
    unsigned int idx = hash(key, map->capacity);
    MapNode* node = map->buckets[idx];
    while (node) {
        if (strcmp(node->key, key) == 0) return node->value;
        node = node->next;
    }
    return -1; // clé non trouvée
}

int contains_key(Map* map, const char* key) {
    return get(map, key) != -1;
}

void remove_key(Map* map, const char* key) {
    unsigned int idx = hash(key, map->capacity);
    MapNode* node = map->buckets[idx];
    MapNode* prev = NULL;
    while (node) {
        if (strcmp(node->key, key) == 0) {
            if (prev) prev->next = node->next;
            else map->buckets[idx] = node->next;
            free(node->key);
            free(node);
            return;
        }
        prev = node;
        node = node->next;
    }
}

void clear_map(Map* map) {
    for (int i = 0; i < map->capacity; i++) {
        MapNode* node = map->buckets[i];
        while (node) {
            MapNode* tmp = node;
            node = node->next;
            free(tmp->key);
            free(tmp);
        }
    }
    free(map->buckets);
    map->buckets = NULL;
    map->capacity = 0;
}
