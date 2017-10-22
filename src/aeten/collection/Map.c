#include "Map.h"

/*
@startuml
!include Object.c
!include Collection.c
!include Set.c
!include MapEntry.c
namespace aeten.collection {
	interface Map<K,V> {
		V* get(K* key)
		V* put(K* key, V* value) <<default>> <<optional>>
		V* remove(K* key) <<optional>>
		size_t size()
		Collection<V> values()
		Set<MapEntry<K,V>> entrySet()
		Set<K> keySet()
	}
	note right of Map::get
		Returns the value to which the specified key is mapped, or null if this map contains no mapping for the key.
	end note
	note right of Map::put
		Associates the specified value with the specified key in this map (optional operation).
	end note
	note right of Map::remove
		Removes the mapping for a key from this map if it is present (optional operation).
	end note
}
@enduml
*/

void* put(Map* map, void *key, void *value) {
	check(0, UnsupportedOperationException, "Map.put()");
	return NULL;
}

/* confict...
TODO: Resolve confict with remove function in stdio.h by prefiying all implementation methods by "_".
void* remove(Map* map, void *key) {
	check(0, UnsupportedOperationException, "Map.remove()");
	return NULL;
}
*/
