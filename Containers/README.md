# Containers

##### A *container* is a storage area for a collection objects (elements) of a specified type. They are implemented as class templates, which allow great flexibility in the types supported as elements. The *container* manages the storage space for its elements and provides member functions to access them, either directly or through iterators. The decision of which type of *container* to use for a specific need does not generally depend only on the functionality offered by the *container*, but also on the efficiency of some of its members (complexity).


Container class templates are of the following types – 

  1. Sequence Containers 
  2. Container Adaptors
  3. Associative Containers
  4. Unordered Associative Containers


**Sequence Containers** - These containers store elements which can be accessed in a sequential manner.

  •	[array](https://github.com/tridibsamanta/CPP_STL/blob/master/Containers/array.cpp)
  •	[vector](https://github.com/tridibsamanta/CPP_STL/blob/master/Containers/vector.cpp)
  •	[deque](https://github.com/tridibsamanta/CPP_STL/blob/master/Containers/deque.cpp)
  •	forward_list
  •	list
  •	string


**Container Adaptors** – Essentially, an adaptor is a mechanism for making one thing act like another. A container adaptor takes an existing container type and makes it act like a different type.

  •	stack (LIFO)
  •	queue (FIFO)
  •	priority_queue


**Associative Containers** – The elements in an associative container are sorted. They are stored and retrieved by a key and support efficient lookup and retrieval of elements by a key. 

  •	map
  •	set
  •	multimap
  •	multiset


**Unordered Associative Containers** – Unlike the associative containers here the elements are unordered, but allow efficient lookup and retrieval of elements by a key. 

  •	unordered_map
  •	unordered_set
  •	unordered_multimap
  •	unordered_multiset














