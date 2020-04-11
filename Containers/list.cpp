/*
 * Author @ Tridib Samanta
 */

#include<iostream>
#include<list>

using namespace std;

int main() {

    /*
        Lists are sequence containers that allow constant time insert and erase operations anywhere within the sequence, and iteration in both directions.
        As compared to vector, list has slow traversal, but once a position has been found, insertion and deletion are quick.
        The main drawback of lists and forward_lists compared to these other sequence containers is that they lack direct access to the elements by their position.
    */

    //Declaration and initialization of list
    list <int> l = {1, 2, 3, 4, 5};

    //Traversing a list
    list <int> :: iterator it;
    for(it = l.begin(); it != l.end(); ++it)
        cout << *it << ' ';
    cout << '\n';

    //empty() - Checks whether the size of the list is 0. Returns true / false
    (l.empty()) ? cout << "List is empty !\n" : cout << "List is not empty !\n";

    //size() - Returns the number of elements present in the list container
    cout << "Size of the list is : " << l.size() << '\n';

    //max_size() - Returns the maximum number of elements the list can accommodate
    cout << "Maximum size of the list is : " << l.max_size() << '\n';

    //resize() - Resizes the list container so that it contains the desired number of elements
    l.resize(5);
    cout << "Size of the list after resizing is : " << l.size() << '\n';

    //front() - Returns a reference to the first element in the list container
    cout << "The first element in the list is : " << l.front() << '\n';

    //back() - Returns a reference to the last element in the list container
    cout << "The last element in the list is : " << l.back() << '\n';

    //assign() - Assigns new contents to the list container, replacing its current contents, and modifying its size accordingly
    list<string> str1;
    str1.assign(5, "Hi"); // Assigns 5 elements each of value "Hi"
    list<string>::iterator itr1;
    for(itr1 = str1.begin(); itr1 != str1.end(); ++itr1)
        cout << *itr1 << " ";
    cout << '\n';

    //push_back() - Inserts an element at the end of the list container, after its current last element
    l.push_back(6);
    cout << "Element at last position of the list is : " << l.back() << '\n';

    //push_front() - Inserts an element at the beginning of the list container, right before its current first element
    l.push_front(10);
    cout << "Element at first position of the list is : " << l.front() << '\n';

    //pop_back() - Removes the last element in the list container, effectively reducing the container size by one
    l.pop_back();
    cout << "Element at last position of the list is : " << l.back() << '\n';

    //pop_front() - Removes the first element in the list container, effectively reducing the container size by one
    l.pop_front();
    cout << "Element at first position of the list is : " << l.front() << '\n';

    //insert() - Inserts new elements before the element at the specified position.
    //Thus extending the size of the list container by the number of elements inserted
    list <int> :: iterator it1;
    it1 = l.begin(); ++it1; ++it1;
    l.insert(it1, 33);
    cout << "Element at third position is : " << *--it1 << '\n';

    //erase() - Removes either a single element or a range of elements.
    //Thus decreasing the size of the list container by the number of elements removed
    list <int> :: iterator it2;
    it2 = l.begin(); ++it2; ++it2;
    it2 = l.erase(it2);
    cout << "Element at third position is : " << *it2 << '\n';

    //swap() - Exchanges the content of the list container by the content of another list container of the same type, sizes may differ
    list<int> l1 = {10, 20, 30};
    list<int> l2 = {15, 30, 45};
    l1.swap(l2);

    for(auto itr1 : l1)
        cout << itr1 << " ";
    cout << '\n';

    for(auto itr2 : l2)
        cout << itr2 << " ";
    cout << '\n';

    //clear() - Removes all elements from the list. After clearing size of list container is 0
    l1.clear();
    cout << "Size of the list after clearing is : " << l1.size() << '\n';

    //emplace() - Inserts a new element at the specified position in the list container
    l.emplace(l.begin(), 20);
    cout << "Element at the first position of the list is : " << l.front() << '\n';

    //emplace_front() - Inserts a new element at the beginning of the list, right before its current first element
    l.emplace_front(10);
    cout << "Element at the first position of the list is : " << l.front() << '\n';

    //emplace_back() - Inserts a new element at the end of the list, right after its current last element
    l.emplace_back(60);
    cout << "Element at the last position of the list is : " << l.back() << '\n';

    //splice() - used to transfer elements from one list to another.
    //The splice() function can be used in three ways:
    //1. Transfer all the elements of list x into another list at some position.
    //2. Transfer only the element pointed by i from list x into the list at some position.
    //3. Transfers the range [first, last) from list x into another list at some position.
    list<int> l3 = { 1, 2, 3 };
    list<int> l4 = { 4, 5 };
    l3.splice(l3.end(), l4);
    for (auto x1 : l3)
        cout << x1 << " ";
    cout << '\n';

    //remove() - Removes the elements from the list equal to a specified value
    l3. remove(4);
    for (auto x2 : l3)
        cout << x2 << " ";
    cout << '\n';

    //remove_if() - Remove the elements fulfilling a given condition

    //unique() - Remove duplicate values from the list
    list<int> l5 = { 1, 1, 1, 2, 2, 3, 4, 4, 5 };
    l5.unique();
    for (auto x3 : l5)
        cout << x3 << " ";
    cout << '\n';

    //merge() - Merges two sorted lists into one. The lists should be sorted in ascending order.
    list<int> l6 = { 10, 20, 30 };
    list<int> l7 = { 40, 50, 60 };
    l7.merge(l6);
    for (auto x4 : l7)
        cout << x4 << " ";
    cout << '\n';

    //sort() - Sorts the elements in the list
    list<int> l8 = { 7, 3, 9, 1, 5};
    l8.sort();
    for (auto x5 = l8.begin(); x5 != l8.end(); ++x5)
        cout << *x5 << " ";
    cout << '\n';

    //reverse() - Reverses the order of elements in the list container
    l8.reverse();
    for (auto x6 : l8)
        cout << x6 << " ";
    cout << '\n';

	return 0;
}
