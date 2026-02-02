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





```markdown
# TP9 - Structures de données

## STRUCTURES DE BASE

**Tableau (Array)**
- **Définition** : Structure contiguë qui stocke des éléments de même type dans une mémoire fixe.
- **Cas d’utilisation** : Accès direct par index, données de taille connue.
- **Pseudo-algorithme** :
  ```
  array[i] -> accès en O(1)
  ```

**Tableau dynamique (Dynamic Array / Vector)**
- **Définition** : Tableau extensible qui redimensionne automatiquement sa capacité.
- **Cas d’utilisation** : Collections dont la taille varie.
- **Pseudo-algorithme** :
  ```
  append(x):
      if full -> resize
      array[size++] = x
  ```

**Chaîne de caractères (String)**
- **Définition** : Tableau de caractères terminé par '\0' (en C).
- **Cas d’utilisation** : Manipulation de texte.
- **Pseudo-algorithme** :
  ```
  length(s):
      count = 0
      while s[count] != '\0':
          count++
  ```



**LISTES CHAÎNÉES**

**Liste simplement chaînée (Linked List)**
- **Définition** : Suite de nœuds reliés par pointeurs, chaque nœud pointe vers le suivant.
- **Cas d’utilisation** : Insertion/suppression fréquente.
- **Pseudo-algorithme** :
  ```
  addFront(head, x):
      newNode = Node(x)
      newNode.next = head
      head = newNode
  ```

**Liste doublement chaînée (Double Linked List)**
- **Définition** : Chaque nœud pointe vers le suivant et le précédent.
- **Cas d’utilisation** : Parcours bidirectionnel.
- **Pseudo-algorithme** :
  ```
  deleteNode(node):
      node.prev.next = node.next
      node.next.prev = node.prev
  ```

**Liste circulaire (Circular Linked List)**
- **Définition** : Le dernier nœud pointe vers le premier.
- **Cas d’utilisation** : Buffers circulaires, gestion cyclique.
- **Pseudo-algorithme** :
  ```
  traverse(head):
      node = head
      do:
          print(node.data)
          node = node.next
      while node != head
  ```



**PILES ET FILES**

**Pile (Stack)**
- **Définition** : Structure LIFO (Last In, First Out).
- **Cas d’utilisation** : Undo/Redo, récursivité.
- **Pseudo-algorithme** :
  ```
  push(x): stack[++top] = x
  pop(): return stack[top--]
  ```

**File (Queue)**
- **Définition** : Structure FIFO (First In, First Out).
- **Cas d’utilisation** : Files d’attente, scheduling.
- **Pseudo-algorithme** :
  ```
  enqueue(x): queue[++rear] = x
  dequeue(): return queue[front++]
  ```

**File double (Deque)**
- **Définition** : File où l’on peut insérer/supprimer aux deux extrémités.
- **Cas d’utilisation** : Algorithmes glissants, caches.
- **Pseudo-algorithme** :
  ```
  pushFront(x), pushBack(x)
  popFront(), popBack()
  ```

**File de priorité (Priority Queue)**
- **Définition** : File où chaque élément a une priorité.
- **Cas d’utilisation** : Planification, Dijkstra.
- **Pseudo-algorithme** :
  ```
  insert(x, priority): heapInsert(x)
  extractMin(): heapExtract()
  ```



**ARBRES**

**Arbre binaire (Binary Tree)**
- **Définition** : Chaque nœud a au plus deux enfants.
- **Cas d’utilisation** : Hiérarchies, expressions.
- **Pseudo-algorithme** :
  ```
  traverseInOrder(node):
      if node != null:
          traverseInOrder(node.left)
          print(node.data)
          traverseInOrder(node.right)
  ```

**Arbre binaire de recherche (BST)**
- **Définition** : Arbre binaire ordonné (gauche < racine < droite).
- **Cas d’utilisation** : Recherche rapide.
- **Pseudo-algorithme** :
  ```
  search(node, x):
      if node == null: return false
      if x == node.data: return true
      if x < node.data: return search(node.left, x)
      else: return search(node.right, x)
  ```

**Arbre AVL**
- **Définition** : BST auto-équilibré par rotations.
- **Cas d’utilisation** : Recherche équilibrée.
- **Pseudo-algorithme** :
  ```
  insert(x):
      BST insert
      update balance
      if |balance| > 1 -> rotation
  ```

**Arbre Rouge-Noir (Red-Black Tree)**
- **Définition** : BST équilibré avec règles de couleur.
- **Cas d’utilisation** : Maps, sets en STL.
- **Pseudo-algorithme** :
  ```
  insert(x):
      BST insert
      recolor/rotate to maintain rules
  ```

**Arbre B / B+ Tree**
- **Définition** : Arbre multi-branches utilisé en bases de données.
- **Cas d’utilisation** : Indexation disque.
- **Pseudo-algorithme** :
  ```
  insert(x):
      find leaf
      insert
      if overflow -> split
  ```

**Tas binaire (Binary Heap)**
- **Définition** : Arbre binaire complet avec propriété de tas.
- **Cas d’utilisation** : HeapSort, Priority Queue.
- **Pseudo-algorithme** :
  ```
  heapify(i):
      compare with children
      swap if needed
      recurse
  ```

**Trie (Prefix Tree)**
- **Définition** : Arbre pour stocker des chaînes par préfixes.
- **Cas d’utilisation** : Recherche de mots, auto-complétion.
- **Pseudo-algorithme** :
  ```
  insert(word):
      node = root
      for c in word:
          if node.child[c] == null:
              node.child[c] = new Node()
          node = node.child[c]
  ```

**Arbre de segments (Segment Tree)**
- **Définition** : Arbre pour gérer des intervalles.
- **Cas d’utilisation** : Somme/min/max sur plages.
- **Pseudo-algorithme** :
  ```
  build(node, l, r):
      if l == r: tree[node] = arr[l]
      else:
          mid = (l+r)/2
          build(node*2, l, mid)
          build(node*2+1, mid+1, r)
          tree[node] = merge(children)
  ```



**ENSEMBLES ET DICTIONNAIRES**

**Ensemble (Set)**
- **Définition** : Collection sans doublons.
- **Cas d’utilisation** : Vérifier appartenance.
- **Pseudo-algorithme** :
  ```
  insert(x): if not in set -> add
  ```

**Ensemble non ordonné (Unordered Set)**
- **Définition** : Set basé sur hachage.
- **Cas d’utilisation** : Recherche O(1).
- **Pseudo-algorithme** :
  ```
  index = hash(x)
  bucket[index].add(x)
  ```

**Multi-ensemble (Multiset)**
- **Définition** : Ensemble avec doublons autorisés.
- **Cas d’utilisation** : Comptage d’éléments.
- **Pseudo-algorithme** :
  ```
  insert(x): count[x]++
  ```

**Dictionnaire / Map**
- **Définition** : Associe clé → valeur.
- **Cas d’utilisation** : Carnet d’adresses.
- **Pseudo-algorithme** :
  ```
  insert(key, value): table[key] = value
  ```

**Table de hachage (Hash Table / Unordered Map)**
- **Définition** : Map basée sur fonction de hachage.
- **Cas d’utilisation** : Recherche rapide.
- **Pseudo-algorithme** :
  ```
  index = hash(key)
  table[index] = value
  ```

**Multi-map**
- **Définition** : Map où une clé peut avoir plusieurs valeurs.
- **Cas d’utilisation** : Index inversé.
- **Pseudo-algorithme** :
  ```
  insert(key, value): list[key].append(value)
  ```



**GRAPHES**

**Matrice d’adjacence (Adjacency Matrix)**
- **Définition** : Matrice NxN indiquant les arêtes.
- **Cas d’utilisation** : Graphes denses.
- **Pseudo-algorithme** :
  ```
  matrix[u][v] = 1
  ```

**Liste d’adjacence (Adjacency List)**
- **Définition** : Chaque sommet a une liste de voisins.
- **Cas d’utilisation** : Graphes clairsemés.
- **Pseudo-algorithme** :
  ```



