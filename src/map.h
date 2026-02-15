#ifndef MAP_H
#define MAP_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MapNode {
    char* key;
    int value;
    struct MapNode* next;
} MapNode;

typedef struct Map {
    MapNode** buckets;
    int capacity;
} Map;

void init_map(Map* map, int capacity);
void put(Map* map, const char* key, int value);
int get(Map* map, const char* key);
int contains_key(Map* map, const char* key);
void remove_key(Map* map, const char* key);
void clear_map(Map* map);

#ifdef __cplusplus
}
#endif

#endif

