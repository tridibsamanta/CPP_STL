/*
 * Author @ Tridib Samanta
 */

#include<iostream>
#include<vector>

using namespace std;

int main() {

    /*
        Vectors are dynamic arrays. They use contiguous memory locations for their elements.
        The elements can be traversed using iterators. Their size can change dynamically, with their storage being handled automatically by the container.
        Inserting at the end takes differential time, as sometimes there may be a need of extending the array.
        Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.

        Vectors use a dynamically allocated array to store its elements. Each time an element is added to the vector, this array need to be reallocated.
        This means allocation a new array and moving all the elements from the previous array to the new array, but this is quite expensive.
        Hence, vectors do not reallocate every time an element is added to the container. Instead, vectors may allocate some extra storage than strictly required.
        Once the extra storage space is full, the reallocation and moving of elements from old array to new array occurs.

        Compared to the other dynamic sequence containers (deques, lists and forward_lists), vectors are very efficient accessing its elements. :)
        Also relatively efficient adding or removing elements from its end.
        For operations that involve inserting or removing elements at positions other than the end, they perform worse than the others. :(
    */

    //Declaring and initialization of vector
    vector<int> v1; //Empty vector v1
    vector<int> v2(5); //vector v2 has 5 elements each with value 0
    vector<int> v3(v2); // vector v3 has a copy of each element in vector v2
    vector<int> v4(5,1); // vector v4 has 5 elements with value 1
    vector<int> v5 = {1, 2, 3}; // vector v5 has 5 elements with the values 1, 2 and 3
    vector<int> v6{1, 2, 3}; // vector v6 has 5 elements with the values 1, 2 and 3
    vector<string> str1; // Empty vector str1
    vector<string> str2(10, "Yo!"); // vector str2 has 10 elements each with value "Yo!"
    vector<string> str3{"I", "Love", "to", "Code"}; // vector str3 has 4 elements with values "I", "Love", "to" and "Code"
    //vector<string> str4("hi"); // Error. Use curly braces while initialization

    vector<int> v = {1, 2, 3, 4, 5};

    //Traversing the elements in a vector
    for(auto i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";
    cout << '\n';

    for(auto rev = v.rbegin(); rev != v.rend(); ++rev)
        cout << *rev << " ";
    cout << '\n';

    //size() - Returns the number of elements present in the vector
    cout << "Size of the vector is : " << v.size() << '\n';

    //max_size() - Returns the maximum element the vector can accommodate
    cout << "Maximum size of the vector is : " << v.max_size() << '\n';

    //capacity() - Returns the size of the storage space currently allocated for the vector
    cout << "Capacity of the vector is : " << v.capacity() << '\n';

    //empty() - Checks whether the vector contains elements or not. Returns true / false
    (v.empty()) ? cout << "Vector is empty\n" : cout << "Vector is not empty\n";

    //reserve() - Requests that the vector capacity be at least enough to contain the specified number of elements
    v.reserve(20);
    cout << "Capacity of the vector (after reserve) is : " << v.capacity() << '\n';

    //shrink_to_fit() - Requests the container to reduce its capacity to fit the number of elements it contains
    v.shrink_to_fit();
    cout << "Capacity of the vector (after shrink_to_fit) is : " << v.capacity() << '\n';

    //'[]' operator - Returns a reference to the element at specified position in the vector container
    cout << "Element at 3rd position is : " << v[2] << '\n';

    //at() - Returns a reference to the element at specified position in the vector container
    cout << "Element at 4rd position is : " << v.at(3) << '\n';

    //front() - Returns a reference to the first element in the vector
    cout << "First element of the vector is : " << v.front() << '\n';

    //back() - Returns a reference to the last element in the vector
    cout << "Last element of the vector is : " << v.back() << '\n';

    //data() - Returns a direct pointer to the memory array used internally by the vector to store its owned elements
    int *ptr = v.data();
    *ptr = 10;
    cout << "First element of the vector is : " << v.front() << '\n';
    *ptr = 1;

    //assign() - Assigns new contents to the vector, replacing its current contents, and modifying its size accordingly
    vector<int> vec;
    vec.assign(10, 5); // Assigns 10 elements each of value 5
    vector<int>::iterator it;
    for(it = vec.begin(); it != vec.end(); ++it)
        cout << *it << " ";
    cout << '\n';

    //push_back() - Adds a new element at the end of the vector, after its current last element
    v.push_back(6);
    cout << "Last element of the vector is : " << v.back() << '\n';

    //pop_back() - Removes the last element in the vector, effectively reducing the container size by one
    v.pop_back();
    cout << "Last element of the vector is : " << v.back() << '\n';

    //insert() - The vector is extended by inserting new elements before the element at the specified position.
    //It effectively increases the container size by the number of elements inserted.
    v.insert(v.end(), 6);
    cout << "Last element of the vector is : " << v.back() << '\n';

    //erase() - Removes from the vector either a single element (position) or a range of elements ([first,last)).
    //This effectively reduces the container size by the number of elements removed, which are destroyed.
    v.erase(v.begin()+3,v.begin()+6);
    cout << "Last element of the vector is : " << v.back() << '\n';

    //swap() - Exchanges the content of the container by the content of x, which is another vector object of the same type. Sizes may differ.
    vector<int> vec1 = {10, 20, 30};
    vector<int> vec2 = {15, 30, 45};
    vec1.swap(vec2);

    for(auto itr1 : vec1)
        cout << itr1 << " ";
    cout << '\n';

    for(auto itr2 : vec2)
        cout << itr2 << " ";
    cout << '\n';

    //clear() - Removes all elements from the vector. After clearing size of vector container is 0
    vec1.clear();
    cout << "Size of the vector is : " << vec1.size() << '\n';

    //emplace() - Inserts a new element at the specified position
    v.emplace(v.end(), 4);
    cout << "Last element of the vector is : " << v.back() << '\n';

    //emplace_back() - Inserts a new element at the end of the vector
    v.emplace_back(5);
    cout << "Last element of the vector is : " << v.back() << '\n';

	return 0;
}
