/*
 * Author @ Tridib Samanta
 */

#include<iostream>
#include<forward_list>

using namespace std;

int main() {

    /*
        Forward lists are sequence containers that allow constant time insert and erase operations anywhere within the sequence.
        Forward lists are implemented as singly-linked lists; The ordering is kept by the association to each element of a link to the next element in the sequence.
        The main drawback of forward_lists and lists compared to these other sequence containers is that they lack direct access to the elements by their position.
        The other major drawback of forward list is that it cannot be iterated backwards, unlike that of a list, which can be traversed in both forward and backward directions.
        They also consume some extra memory to keep the linking information associated to each element.
    */

    // Declaring and initialization of forward list
    forward_list<int> fl = {1, 2, 3, 4, 5};

    //Traversing a forward list
    forward_list <int> :: iterator it;
    for(it = fl.begin(); it != fl.end(); ++it)
        cout << *it << ' ';
    cout << '\n';

    //before_begin() - Returns an iterator pointing to the position before the first element in the container
    //The iterator returned shall not be dereferenced. It is meant to be used as an argument for member functions emplace_after, insert_after, erase_after or splice_after,
    //to specify the beginning of the sequence as the location where the action is performed.

    //empty() - Checks whether the size of the forward list is 0. Returns true / false
    (fl.empty()) ? cout << "Forward list is empty !\n" : cout << "Forward list is not empty !\n";

    //max_size() - Returns the maximum number of elements the forward list can accommodate
    cout << "Maximum size of the forward list is : " << fl.max_size() << '\n';

    //front() - Returns a reference to the first element in the forward list container
    cout << "The first element of the forward list is : " << fl.front() << '\n';

    //assign() - Assigns new contents to the forward list container, replacing its current contents, and modifying its size accordingly
    forward_list<string> str1;
    str1.assign(5, "Hi"); // Assigns 5 elements each of value "Hi"
    forward_list<string>::iterator itr1;
    for(itr1 = str1.begin(); itr1 != str1.end(); ++itr1)
        cout << *itr1 << " ";
    cout << '\n';

    //push_front() - Inserts an element at the beginning of the forward list container, right before its current first element
    fl.push_front(10);
    cout << "The first element of the forward list is : " << fl.front() << '\n';

    //pop_front() - Removes the first element in the forward list container, effectively reducing the container size by one
    fl.pop_front();
    cout << "The first element of the forward list is : " << fl.front() << '\n';

    //emplace_front() - Inserts a new element at the beginning of the forward list, right before its current first element
    fl.emplace_front(10);
    cout << "The first element of the forward list is : " << fl.front() << '\n';

    //emplace_after() - Inserts a new element after the element at position specified in the argument
    //This insertion of the new element increases the size of the container by one
    auto itr = fl.before_begin();
    itr = fl.emplace_after(itr, 30);
    itr = fl.emplace_after(itr, 20);
    for (auto it = fl.cbegin(); it != fl.cend(); it++)
        cout << *it << " ";
    cout << '\n';

    //insert_after() - Insert elements at the position just after the element pointed by a given iterator in the forward list
    //This effectively increases the container size by the amount of elements inserted
    auto it1 = fl.before_begin();
    it1 = fl.insert_after(it1, 40);
    for (auto it = fl.cbegin(); it != fl.cend(); it++)
        cout << *it << " ";
    cout << '\n';

    //erase_after() - Remove elements from a container next to the specified position or from a range
    //This effectively reduces the container size by the number of elements removed
    auto it2 = fl.before_begin();
    it2 = fl.erase_after(it2);
    for (auto it = fl.cbegin(); it != fl.cend(); it++)
        cout << *it << " ";
    cout << '\n';

    //swap() - Exchanges the content of the forward list container by the content of another forward list container of the same type, sizes may differ
    forward_list<int> fl1 = {10, 20, 30, 40};
    forward_list<int> fl2 = {15, 30, 45};
    fl1.swap(fl2);

    for(auto itr1 : fl1)
        cout << itr1 << " ";
    cout << '\n';

    for(auto itr2 : fl2)
        cout << itr2 << " ";
    cout << '\n';

    //resize() - Resizes the forward list container so that it contains the desired number of elements
    fl.resize(10);
    for(auto it : fl)
        cout << it << " ";
    cout << '\n';

    //clear() - Removes all elements from the list. After clearing size of list container is 0
    fl1.clear();
    (fl1.empty()) ? cout << "Forward list is empty !\n" : cout << "Forward list is not empty !\n";

    //splice_after() - Transfers elements from one forward list into another, at specified position
    forward_list<int> fl3 = {10, 20, 30};
    forward_list<int> fl4 = {40, 50, 60};
    fl4.splice_after(fl4.before_begin(), fl3);
    for (int &it : fl4)
       cout << it << " ";
    cout << '\n';

    //remove() - Removes the elements from the forward list equal to a specified value
    fl.remove(30);
    for (auto it : fl)
        cout << it << " ";
    cout << '\n';

    //remove_if() - Remove the elements fulfilling a given condition

    //unique() - Remove duplicate values from the forward list
    forward_list<int> fl5 = { 1, 1, 1, 2, 2, 3, 4, 4, 5 };
    fl5.unique();
    for (auto it : fl5)
        cout << it << " ";
    cout << '\n';

    //merge() - Merges two sorted forward lists into one. Both the forward lists should be sorted in ascending order.
    forward_list<int> fl6 = { 10, 20, 30 };
    forward_list<int> fl7 = { 40, 50, 60 };
    fl7.merge(fl6);
    for (auto it : fl7)
        cout << it << " ";
    cout << '\n';

    //sort() - Sorts the elements in the forward list container
    forward_list<int> fl8 = { 7, 3, 9, 1, 5};
    fl8.sort();
    for (auto it = fl8.begin(); it != fl8.end(); ++it)
        cout << *it << " ";
    cout << '\n';

    //reverse() - Reverses the order of elements in the forward list container
    fl8.reverse();
    for (auto it : fl8)
        cout << it << " ";
    cout << '\n';

	return 0;
}
