/*
 * Author @ Tridib Samanta
 */

#include<iostream>
#include<array>

using namespace std;

int main() {

    /*
        Arrays are fixed-size sequence containers where elements ordered in a strict linear sequence.
        Individual elements are accessed by their position in this sequence, allowing constant time random access to elements.
    */

    //Create and initialize array
    array<int, 5> arr = {2, 3, 5, 7, 11};
    array<string, 2> str = {"a", "b"};

    //Traverse the array
    for(auto it = arr.begin(); it != arr.end(); ++it)
        cout << *it << ' ';
    cout << '\n';

    for(auto s : str)
        cout << s << ' ';
    cout << '\n';

    //size() - Returns the number of elements in the array container
    cout << "Size of array \"arr\" is : " << arr.size() << '\n';
    cout << "Size of array \"str\" is : " << str.size() << '\n';

    //max_size() - Returns the maximum number of elements that the array container can hold. size and max_size of an array object always match.
    cout << "Maximum size of array \"arr\" is : " << arr.max_size() << '\n';
    cout << "Maximum size of array \"str\" is : " << str.max_size() << '\n';

    //empty() - Returns a bool (true / false) value indicating whether the array container is empty, i.e. whether its size is 0
    (arr.empty()) ? cout << "Array is empty" : cout << "Array is not empty";

    //'[]' operator - Returns a reference to the element at a particular index in the array container
    cout << "Element at 3rd position is = " << arr[2] << '\n';

    //at() - Returns a reference to the element at a particular index in the array container
    cout << "Element at 5th position is = " << arr.at(4) << '\n';

    //front() - Returns a reference to the first element in the array container
    cout << "Element at first position is = " << arr.front() << '\n';

    //back() - Returns a reference to the last element in the array container
    cout << "Element at last position is = " << arr.back() << '\n';

    //fill() - Sets the value for all the elements in the array container
    arr.fill(5);
    for(int &x : arr)
        cout << x << " ";
    cout << '\n';

    //swap() - Swaps the array elements of two array containers of the same type and size
    array<int, 5> ar1 = {5, 10, 15, 20, 25};
    array<int, 5> ar2 = {3, 6, 9, 12, 15};
    ar1.swap(ar2);

    for(int &i : ar1)
        cout << i << " ";
    cout << '\n';
    for(int &j : ar2)
        cout << j << " ";
    cout << '\n';

	return 0;
}
