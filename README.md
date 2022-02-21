
# SkipList (Randomized Skip List data Structure)
**Describtion** 

  The worst case search time for a sorted linked list is O(n) as we can only linearly traverse the list and cannot skip nodes while searching. 
  For a Balanced Binary Search Tree, we skip almost half of the nodes after one comparison with root.
  For a sorted array, we have random access and we can apply Binary Search on arrays. 
  Can we augment sorted linked lists to make the search faster? The answer is Skip List. 
  The idea is simple, we create multiple layers so that we can skip some nodes. 
  Implement randomized SkipList insert, delete and search functions then write some test case to test these functionalities 

Create SkipList class with the following features:

  ▪ Insert an element: skiplist.insert(num)

  ▪ Search for an element and print the number of search steps if exists otherwise print -1

      ➢ skipList.search(86) -> 3
      ➢ skipList.search(16) -> 1
      ➢ skipList.search(160) -> -1
  ▪ Print number of layers

      ➢ skipList.getlayers() -> 4
  ▪ Print the numbers of certain layer ex: printLayer(int layerNum)

      ➢ printLayer(1)
        ▪ 2, 16 ,71, 89, 91
      ➢ printLayer(4)
        ▪ 16
      ➢ printLayer(0)
        ▪ 2,10,15,16,31,71,89,91,96
