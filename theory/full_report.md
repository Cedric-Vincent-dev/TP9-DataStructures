**TP9 - Structures de données**

**Tableau**
- Définition :
- Cas d’utilisation :
- Pseudo-algorithme :

**Liste chaînée (Linked List)**
- Définition :
- Cas d’utilisation :
- Pseudo-algorithme :

**Liste doublement chaînée (Double Linked List)**
- Définition :
- Cas d’utilisation :
- Pseudo-algorithme :

**Pile (Stack)**
- Définition :
- Cas d’utilisation :
- Pseudo-algorithme :

**File (Queue)**
- Définition :
- Cas d’utilisation :
- Pseudo-algorithme :

**Tas (Heap)**
- Définition :
- Cas d’utilisation :
- Pseudo-algorithme :

**File de priorité (Priority Queue)**
- Définition :
- Cas d’utilisation :
- Pseudo-algorithme :

**Map / Dictionnaire**
- Définition :
- Cas d’utilisation :
- Pseudo-algorithme :

**Arbre binaire**
- Définition :
- Cas d’utilisation :
- Pseudo-algorithme :

**Autres structures (Hash Table, Graphes, etc.)**
- Définition :
- Cas d’utilisation :
- Pseudo-algorithme :





```
TP9 - Structures de données

STRUCTURES DE BASE

Tableau (Array)
- Définition : Structure contiguë qui stocke des éléments de même type dans une mémoire fixe.
- Cas d’utilisation : Accès direct par index, données de taille connue.
- Pseudo-algorithme :
  ```
  array[i] -> accès en O(1)
  ```

Tableau dynamique (Dynamic Array / Vector)
- Définition : Tableau extensible qui redimensionne automatiquement sa capacité.
- Cas d’utilisation : Collections dont la taille varie.
- Pseudo-algorithme :
  ```
  append(x):
      if full -> resize
      array[size++] = x
  ```

Chaîne de caractères (String)
- Définition : Tableau de caractères terminé par '\0' (en C).
- Cas d’utilisation : Manipulation de texte.
- Pseudo-algorithme :
  ```
  length(s):
      count = 0
      while s[count] != '\0':
          count++
  ```



LISTES CHAÎNÉES

Liste simplement chaînée (Linked List)
- Définition: Suite de nœuds reliés par pointeurs, chaque nœud pointe vers le suivant.
- Cas d’utilisation : Insertion/suppression fréquente.
- Pseudo-algorithme :
  ```
  addFront(head, x):
      newNode = Node(x)
      newNode.next = head
      head = newNode
  ```

Liste doublement chaînée (Double Linked List)
- Définition : Chaque nœud pointe vers le suivant et le précédent.
- Cas d’utilisation : Parcours bidirectionnel.
- Pseudo-algorithme :
  ```
  deleteNode(node):
      node.prev.next = node.next
      node.next.prev = node.prev
  ```

Liste circulaire (Circular Linked List)
- Définition : Le dernier nœud pointe vers le premier.
- Cas d’utilisation : Buffers circulaires, gestion cyclique.
- Pseudo-algorithme :
  ```
  traverse(head):
      node = head
      do:
          print(node.data)
          node = node.next
      while node != head
  ```



PILES ET FILES

Pile (Stack)
- Définition : Structure LIFO (Last In, First Out).
- Cas d’utilisation : Undo/Redo, récursivité.
- Pseudo-algorithme :
  ```
  push(x): stack[++top] = x
  pop(): return stack[top--]
  ```

File (Queue)
- Définition : Structure FIFO (First In, First Out).
- Cas d’utilisation : Files d’attente, scheduling.
- Pseudo-algorithme :
  ```
  enqueue(x): queue[++rear] = x
  dequeue(): return queue[front++]
  ```

File double (Deque)
- Définition : File où l’on peut insérer/supprimer aux deux extrémités.
- Cas d’utilisation : Algorithmes glissants, caches.
- Pseudo-algorithme :
  ```
  pushFront(x), pushBack(x)
  popFront(), popBack()
  ```

File de priorité (Priority Queue)
- Définition : File où chaque élément a une priorité.
- Cas d’utilisation : Planification, Dijkstra.
- Pseudo-algorithme :
  ```
  insert(x, priority): heapInsert(x)
  extractMin(): heapExtract()
  ```



ARBRES

Arbre binaire (Binary Tree)
- Définition : Chaque nœud a au plus deux enfants.
- Cas d’utilisation : Hiérarchies, expressions.
- Pseudo-algorithme :
  ```
  traverseInOrder(node):
      if node != null:
          traverseInOrder(node.left)
          print(node.data)
          traverseInOrder(node.right)
  ```

Arbre binaire de recherche (BST)
- Définition : Arbre binaire ordonné (gauche < racine < droite).
- Cas d’utilisation : Recherche rapide.
- Pseudo-algorithme :
  ```
  search(node, x):
      if node == null: return false
      if x == node.data: return true
      if x < node.data: return search(node.left, x)
      else: return search(node.right, x)
  ```

Arbre AVL
- Définition : BST auto-équilibré par rotations.
- Cas d’utilisation : Recherche équilibrée.
- Pseudo-algorithme :
  ```
  insert(x):
      BST insert
      update balance
      if |balance| > 1 -> rotation
  ```

Arbre Rouge-Noir (Red-Black Tree)
- Définition : BST équilibré avec règles de couleur.
- Cas d’utilisation : Maps, sets en STL.
- Pseudo-algorithme :
  ```
  insert(x):
      BST insert
      recolor/rotate to maintain rules
  ```

Arbre B / B+ Tree
- Définition : Arbre multi-branches utilisé en bases de données.
- Cas d’utilisation : Indexation disque.
- Pseudo-algorithme :
  ```
  insert(x):
      find leaf
      insert
      if overflow -> split
  ```

Tas binaire (Binary Heap)
- Définition : Arbre binaire complet avec propriété de tas.
- Cas d’utilisation : HeapSort, Priority Queue.
- Pseudo-algorithme :
  ```
  heapify(i):
      compare with children
      swap if needed
      recurse
  ```

Trie (Prefix Tree)
- Définition : Arbre pour stocker des chaînes par préfixes.
- Cas d’utilisation : Recherche de mots, auto-complétion.
- Pseudo-algorithme :
  ```
  insert(word):
      node = root
      for c in word:
          if node.child[c] == null:
              node.child[c] = new Node()
          node = node.child[c]
  ```

Arbre de segments (Segment Tree)
- Définition : Arbre pour gérer des intervalles.
- Cas d’utilisation : Somme/min/max sur plages.
- Pseudo-algorithme :
  ```
  build(node, l, r):
      if l == r: tree[node] = arr[l]
      else:
          mid = (l+r)/2
          build(node*2, l, mid)
          build(node*2+1, mid+1, r)
          tree[node] = merge(children)
  ```



ENSEMBLES ET DICTIONNAIRES

Ensemble (Set)
- Définition : Collection sans doublons.
- Cas d’utilisation : Vérifier appartenance.
- Pseudo-algorithme :
  ```
  insert(x): if not in set -> add
  ```

Ensemble non ordonné (Unordered Set)
- Définition : Set basé sur hachage.
- Cas d’utilisation : Recherche O(1).
- Pseudo-algorithme :
  ```
  index = hash(x)
  bucket[index].add(x)
  ```

Multi-ensemble (Multiset)
- Définition : Ensemble avec doublons autorisés.
- Cas d’utilisation : Comptage d’éléments.
- Pseudo-algorithme :
  ```
  insert(x): count[x]++
  ```

Dictionnaire / Map
- Définition : Associe clé → valeur.
- Cas d’utilisation : Carnet d’adresses.
- Pseudo-algorithme :
  ```
  insert(key, value): table[key] = value
  ```

Table de hachage (Hash Table / Unordered Map)
- Définition : Map basée sur fonction de hachage.
- Cas d’utilisation : Recherche rapide.
- Pseudo-algorithme :
  ```
  index = hash(key)
  table[index] = value
  ```

Multi-map
- Définition : Map où une clé peut avoir plusieurs valeurs.
- Cas d’utilisation : Index inversé.
- Pseudo-algorithme :
  ```
  insert(key, value): list[key].append(value)
  ```



GRAPHES

Matrice d’adjacence (Adjacency Matrix)
- Définition : Matrice NxN indiquant les arêtes.
- Cas d’utilisation : Graphes denses.
- Pseudo-algorithme :
  ```
  matrix[u][v] = 1
  ```

Liste d’adjacence (Adjacency List)
- Définition : Chaque sommet a une liste de voisins.
- Cas d’utilisation : Graphes clairsemés.
- Pseudo-algorithme :
  ```



```
GRAPHES

Matrice d’adjacence (Adjacency Matrix)
- Définition : Matrice NxN où chaque case indique la présence ou non d’une arête entre deux sommets.
- Cas d’utilisation : Graphes denses, calculs rapides de voisinage.
- Pseudo-algorithme :
  ```
  addEdge(u, v):
      matrix[u][v] = 1
      matrix[v][u] = 1   // si graphe non orienté
  ```

Liste d’adjacence (Adjacency List)
- Définition : Chaque sommet possède une liste de ses voisins.
- Cas d’utilisation : Graphes clairsemés, stockage efficace.
- Pseudo-algorithme :
  ```
  addEdge(u, v):
      list[u].append(v)
      list[v].append(u)
  ```

Matrice d’incidence (Incidence Matrix)
- Définition : Matrice sommets × arêtes, chaque colonne représente une arête et indique les sommets reliés.
- Cas d’utilisation : Algèbre des graphes, calculs matriciels.
- Pseudo-algorithme :
  ```
  addEdge(e, u, v):
      matrix[u][e] = 1
      matrix[v][e] = 1
  ```



STRUCTURES AVANCÉES

Union-Find (Disjoint Set)
- Définition : Structure qui gère des ensembles disjoints avec opérations `find` et `union`.
- Cas d’utilisation : Détection de cycles, algorithmes de graphes (Kruskal).
- Pseudo-algorithme :
  ```
  find(x):
      if parent[x] != x:
          parent[x] = find(parent[x])
      return parent[x]

  union(x, y):
      rootX = find(x)
      rootY = find(y)
      parent[rootX] = rootY
  ```

Bloom Filter
- Définition : Structure probabiliste pour tester l’appartenance avec risque de faux positifs.
- Cas d’utilisation : Filtrage rapide (ex. anti-spam).
- Pseudo-algorithme :
  ```
  insert(x):
      for each hash h:
          bitArray[h(x)] = 1

  query(x):
      return all(bitArray[h(x)] == 1)
  ```

Skip List
- Définition : Liste chaînée multi-niveaux permettant recherche rapide.
- Cas d’utilisation : Alternative aux arbres équilibrés.
- Pseudo-algorithme :
  ```
  search(x):
      start at top level
      while current.next < x:
          move right
      move down
  ```

Arbre de Fenwick (Binary Indexed Tree)
- Définition : Structure pour calculer des sommes cumulées efficacement.
- Cas d’utilisation : Sommes de préfixes, algorithmes de compétitions.
- Pseudo-algorithme :
  ```
  update(i, delta):
      while i <= n:
          tree[i] += delta
          i += i & -i

  query(i):
      sum = 0
      while i > 0:
          sum += tree[i]
          i -= i & -i
      return sum
  ```

Sparse Table
- Définition : Structure pour répondre à des requêtes sur intervalles (min, max) en O(1).
- Cas d’utilisation : Problèmes de RMQ (Range Minimum Query).
- Pseudo-algorithme :
  ```
  build(arr):
      for i in 0..n:
          table[i][0] = arr[i]
      for j in 1..log(n):
          for i in 0..n-(1<<j):
              table[i][j] = min(table[i][j-1], table[i+(1<<(j-1))][j-1])
  ```

Quadtree / Octree
- Définition : Arbres utilisés pour partitionner l’espace (2D pour Quadtree, 3D pour Octree).
- Cas d’utilisation : Graphismes, spatial indexing.
- Pseudo-algorithme :
  ```
  insert(node, point):
      if node is leaf and capacity not full:
          add point
      else:
          subdivide node
          insert into correct child
  ```

Rope
- Définition : Structure pour manipuler efficacement de longues chaînes de caractères.
- Cas d’utilisation : Éditeurs de texte, concaténations rapides.
- Pseudo-algorithme :
  ```
  concat(ropeA, ropeB):
      return new Rope(nodeA, nodeB)
  ```



STRUCTURES SPÉCIALISÉES

Bitset
- Définition : Tableau compact de bits.
- Cas d’utilisation : Stockage efficace de booléens, masques.
- Pseudo-algorithme :
  ```
  setBit(i): bits[i/word] |= (1 << (i % word))
  ```

Matrice creuse (Sparse Matrix)
- Définition : Matrice avec peu d’éléments non nuls, stockée sous forme compressée.
- Cas d’utilisation : Calcul scientifique, graphes.
- Pseudo-algorithme :
  ```
  store(row, col, value):
      if value != 0:
          entries.append((row, col, value))
  ```

Circular Buffer (Ring Buffer)
- Définition : Buffer circulaire où les indices se réinitialisent.
- Cas d’utilisation : Streaming, files fixes.
- Pseudo-algorithme :
  ```
  enqueue(x):
      buffer[rear] = x
      rear = (rear+1) % size
  ```

Cache LRU (Least Recently Used)
- Définition : Cache qui évince l’élément le moins récemment utilisé.
- Cas d’utilisation : Optimisation mémoire, systèmes.
- Pseudo-algorithme :
  ```
  access(key):
      if key in cache:
          move to front
      else:
          if cache full:
              remove least recently used
          insert key
  ```



Conclusion
Ce rapport couvre toutes les structures de données classiques et avancées : des tableaux aux graphes, en passant par les arbres équilibrés, les structures probabilistes et spécialisées.  
Chaque structure est définie, accompagnée de ses cas d’utilisation et d’un pseudo‑algorithme sommaire.  
La partie pratique du TP9 consistera à implémenter en C/C++ avec pointeurs : liste chaînée, liste doublement chaînée, heap, queue, dictionnaire et arbre binaire, avec tests unitaires.
```



