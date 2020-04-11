/*
 * Author @ Tridib Samanta
 */

#include<iostream>
#include<deque>

using namespace std;

int main() {

    /*
        Double-ended queues (deque) are sequence containers with dynamic sizes that can be expanded or contracted on both ends (either its front or its back).
        A deque guarantees constant-time insert and delete of elements at the beginning and end of the container.
        deque containers support an analogous operation named push_front. This operation inserts a new element at the front of the container.
    */

    deque<string> str(10); // A double-ended-queue having ten elements, each an empty string
    deque<int> dq; // An empty deque which can accommodate integer type elements
    deque<int> deq = {1, 2, 3, 4, 5}; //A deque with 5 elements - 1, 2, 3, 4 and 5

    //Traversing through a deque
    deque<int>::iterator itr;
    for(itr = deq.begin(); itr != deq.end(); ++itr)
        cout << *itr << " ";
    cout << '\n';

    //size()- Returns the number of elements present in the deque container
    cout << "Size of the deque is : " << deq.size() << '\n';

    //max_size() - Returns the maximum number of elements that the deque container can hold
    cout << "Maximum size of the deque is : " << deq.max_size() << '\n';

    //shrink_to_fit() - Requests the deque container to reduce its size to the current number of elements
    deq.shrink_to_fit();
    cout << "Size of the deque after shrinking is : " << deq.size() << '\n';

    //resize() - Resizes the container so that it contains the desired elements
    deq.resize(5);
    cout << "Size of the deque after resizing is : " << deq.size() << '\n';

    //empty() - Checks whether size of deque is 0. Returns true / false
    (deq.empty()) ? cout << "Deque is empty ! \n" : cout << "Deque is not empty !\n";

    //'[]' operator - Returns a reference to the element at the specified position in the deque container
    cout << "Element at first position of the deque is : " << deq[0] << '\n';

    //at() - Returns a reference to the element at the specified position in the deque container
    cout << "Element at second position of the deque is : " << deq.at(1) << '\n';

    //front() - Returns a reference to the first element in the deque container
    cout << "Element at first position of the deque is : " << deq.front() << '\n';

    //back() - Returns a reference to the last element in the deque container
    cout << "Element at last position of the deque is : " << deq.back() << '\n';

    //assign() - Assigns new contents to the deque container, replacing its current contents, and modifying its size accordingly
    deque<string> str1;
    str1.assign(5, "Hi"); // Assigns 5 elements each of value "Hi"
    deque<string>::iterator itr1;
    for(itr1 = str1.begin(); itr1 != str1.end(); ++itr1)
        cout << *itr1 << " ";
    cout << '\n';

    //push_back() - Inserts an element at the end of the deque container, after its current last element
    deq.push_back(6);
    cout << "Element at last position of the deque is : " << deq.back() << '\n';

    //push_front() - Inserts an element at the beginning of the deque container, right before its current first element
    deq.push_front(10);
    cout << "Element at first position of the deque is : " << deq.front() << '\n';

    //pop_back() - Removes the last element in the deque container, effectively reducing the container size by one
    deq.pop_back();
    cout << "Element at last position of the deque is : " << deq.back() << '\n';

    //pop_front() - Removes the first element in the deque container, effectively reducing the container size by one
    deq.pop_front();
    cout << "Element at first position of the deque is : " << deq.front() << '\n';

    //insert() - Inserts new elements before the element at the specified position, thus extending the size of the deque container by the number of elements inserted
    deq.insert(deq.begin()+3, 33);
    cout << "Element at third position is : " << deq.at(3) << '\n';

    //erase() - Removes either a single element or a range of elements.
    // Thus decreasing the size of the deque container by the number of elements removed
    deq.erase(deq.begin()+3);
    cout << "Element at third position is : " << deq.at(3) << '\n';

    //swap() - Exchanges the content of the deque container by the content of another deque container of the same type, sizes may differ
    deque<int> deq1 = {10, 20, 30};
    deque<int> deq2 = {15, 30, 45};
    deq1.swap(deq2);

    for(auto itr1 : deq1)
        cout << itr1 << " ";
    cout << '\n';

    for(auto itr2 : deq2)
        cout << itr2 << " ";
    cout << '\n';

    //clear() - Removes all elements from the deque. After clearing size of deque container is 0
    deq1.clear();
    cout << "Size of the deque is : " << deq1.size() << '\n';

    //emplace() - Inserts a new element at the specified position
    deq.emplace(deq.begin()+5, 6);
    cout << "Element at last position of the deque is : " << deq.back() << '\n';

    //emplace_front() - Inserts a new element at the beginning of the deque, right before its current first element
    deq.emplace_front(10);
    cout << "Element at first position of the deque is : " << deq.front() << '\n';

    //emplace_back() - Inserts a new element at the end of the deque, right after its current last element
    deq.emplace_back(60);
    cout << "Element at last position of the deque is : " << deq.back() << '\n';

	return 0;
}
