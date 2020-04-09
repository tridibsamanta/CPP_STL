# Iterators


###### An *iterator* points to memory addresses inside STL containers. We can use *iterators* to traverse through the elements present inside a container and hence access the elements of the container. 


Depending upon the functionality of iterators they can be categorized as follows -  

  1. Input iterators
  2. Output iterators
  3. Forward iterators
  4. Bidirectional iterators
  5. Random-Access iterators 


**Input iterators** - They are the weakest of all the iterators and have very limited functionality. They can only be used in a single-pass algorithms, i.e., those algorithms which process the container sequentially such that no element is accessed more than once.


**Output iterators** - they are also very limited in their functionality and can only be used in single-pass algorithm, but not for accessing elements, but for being assigned elements.


**Forward iterators** – They are higher in hierarchy than input and output iterators, and contain all the features present in these two iterators. But they can move only in forward direction and that too one step at a time.


**Bidirectional iterators** – They have all the features of forward iterators along with the fact that they can move in both the directions, hence the name bidirectional.


**Random-Access iterators** – The most powerful of all. They are not limited to moving sequentially and can randomly access any element inside the container. 


To view the sample source code - [Click Here](https://github.com/tridibsamanta/CPP_STL/blob/master/Iterators/iterator.cpp) ! 


