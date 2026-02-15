**Annexe 3 – Structures de Données : Rapport Académique**

**1. Introduction**
Ce rapport présente l’implémentation et la validation de plusieurs structures de données fondamentales en C, dans le cadre du TP9. Chaque structure est accompagnée de définitions, cas d’utilisation, pseudo-algorithmes et tests unitaires. L’objectif est de démontrer une maîtrise académique et pratique des concepts de base en algorithmique et en programmation système.



**2. Structures Implémentées**

2.1 Liste Chaînée (Linked List)
- **Définition** : Collection linéaire de nœuds, chaque nœud contient une valeur et un pointeur vers le suivant.
- **Cas d’utilisation** : Gestion dynamique de séquences, insertion/suppression rapides.
- **Pseudo-algorithme (Insertion en tête)** :
  ```
  function add_front(list, value):
      new_node ← Node(value)
      new_node.next ← list.head
      list.head ← new_node
  ```



**2.2 Pile (Stack)**
- **Définition** : Structure LIFO (Last In, First Out).
- **Cas d’utilisation** : Évaluation d’expressions, gestion des appels récursifs.
- **Pseudo-algorithme (Push)** :
  ```
  function push(stack, value):
      stack.top ← stack.top + 1
      stack.data[stack.top] ← value
  ```



**2.3 Liste Doublement Chaînée (Doubly Linked List)**
- **Définition** : Chaque nœud contient un pointeur vers le suivant et vers le précédent.
- **Cas d’utilisation** : Navigation bidirectionnelle, suppression efficace.
- **Pseudo-algorithme (Suppression en fin)** :
  ```
  function remove_back(list):
      if list.tail = NULL:
          return error
      value ← list.tail.value
      list.tail ← list.tail.prev
      if list.tail ≠ NULL:
          list.tail.next ← NULL
      return value
  ```



**2.4 Tas (Heap)**
- **Définition** : Arbre binaire complet respectant la propriété de tas (Min ou Max).
- **Cas d’utilisation** : Files de priorité, algorithmes de tri (HeapSort).
- **Pseudo-algorithme (Insertion dans un Max-Heap)** :
  ```
  function insert_heap(heap, value):
      heap.size ← heap.size + 1
      heap.data[heap.size] ← value
      heapify_up(heap, heap.size)
  ```



**2.5 Dictionnaire / Map (HashMap)**
- **Définition** : Table de hachage associant une clé à une valeur.
- **Cas d’utilisation** : Recherche rapide par clé, gestion de données indexées.
- **Pseudo-algorithme (Insertion)** :
  ```
  function put(map, key, value):
      index ← hash(key) mod capacity
      if key ∈ map.buckets[index]:
          update value
      else:
          insert new node(key, value)
  ```



**2.6 Arbre Binaire (Binary Search Tree)**
- **Définition** : Arbre où chaque nœud a au maximum deux enfants, avec la propriété BST : gauche < racine < droite.
- **Cas d’utilisation** : Recherche, tri, parcours ordonné.
- **Pseudo-algorithme (Recherche)** :
  ```
  function search(node, value):
      if node = NULL:
          return false
      if node.value = value:
          return true
      if value < node.value:
          return search(node.left, value)
      else:
          return search(node.right, value)
  ```


**3. Validation par Tests Unitaires**
Chaque structure a été validée par des tests unitaires utilisant **Google Test** :
- **LinkedListTests** : insertion et suppression en tête.  
- **StackTests** : push et pop successifs.  
- **DoublyLinkedListTests** : navigation et suppression en fin.  
- **HeapTests** : insertion et extraction du maximum.  
- **MapTests** : insertion, recherche, suppression par clé.  
- **BinaryTreeTests** : insertion et recherche dans un BST.  

Tous les tests ont passé avec succès (`ctest` : 100% OK).

**Autres structures des données:**

**7. File (Queue)**
- **Définition** : Structure FIFO (First In, First Out).  
- **Cas d’utilisation** : Gestion des tâches, files d’attente, buffers.  
- **Pseudo‑algorithme (Enqueue)** :
  ```
  function enqueue(queue, value):
      queue.rear ← queue.rear + 1
      queue.data[queue.rear] ← value
  ```



**8. Table de Hachage (Hash Table)**
- **Définition** : Variante optimisée de la Map, utilisant une fonction de hachage pour indexer directement les clés.  
- **Cas d’utilisation** : Recherche ultra‑rapide, gestion de dictionnaires volumineux.  
- **Pseudo‑algorithme (Recherche)** :
  ```
  function search(table, key):
      index ← hash(key) mod capacity
      return table[index]
  ```



**9. Graphe (Graph)**
- **Définition** : Ensemble de sommets reliés par des arêtes, orientées ou non.  
- **Cas d’utilisation** : Réseaux sociaux, chemins, topologie réseau.  
- **Pseudo‑algorithme (Parcours BFS)** :
  ```
  function BFS(graph, start):
      queue ← empty
      enqueue(queue, start)
      while queue not empty:
          node ← dequeue(queue)
          for each neighbor in graph[node]:
              if not visited(neighbor):
                  mark visited
                  enqueue(queue, neighbor)
  ```



**10. Tableau Dynamique (Dynamic Array)**
- **Définition** : Tableau dont la taille peut croître automatiquement.  
- **Cas d’utilisation** : Stockage flexible, vecteurs dynamiques.  
- **Pseudo‑algorithme (Insertion)** :
  ```
  function insert(array, value):
      if array.size = array.capacity:
          resize(array)
      array.data[array.size] ← value
      array.size ← array.size + 1
  ```



**11. Arbre AVL**
- **Définition** : Arbre binaire de recherche auto‑équilibré, garantissant une hauteur logarithmique.  
- **Cas d’utilisation** : Recherche rapide avec équilibrage automatique.  
- **Pseudo‑algorithme (Rotation droite)** :
  ```
  function rotateRight(node):
      left ← node.left
      node.left ← left.right
      left.right ← node
      return left
  ```



**12. Trie (Arbre Préfixe)**
- **Définition** : Arbre spécialisé pour stocker des chaînes de caractères, chaque chemin correspond à un préfixe.  
- **Cas d’utilisation** : Recherche de mots, autocomplétion, dictionnaires.  
- **Pseudo‑algorithme (Insertion d’un mot)** :
  ```
  function insert(trie, word):
      node ← trie.root
      for each char in word:
          if char not in node.children:
              node.children[char] ← new Node()
          node ← node.children[char]
      node.isEnd ← true
  ```




**4. Conclusion**
Ce TP a permis d’implémenter et valider les principales structures de données en C.  
- Chaque structure est codée de manière modulaire, avec un fichier `.h` et `.c`.  
- Les tests unitaires garantissent la robustesse et la conformité aux définitions académiques.  
- Le projet est géré avec **CMake** et versionné sur **GitHub**, assurant une traçabilité professionnelle.  

Ces fondations serviront pour des projets plus avancés en algorithmique, systèmes et réseaux.
