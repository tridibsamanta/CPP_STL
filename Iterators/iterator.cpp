/*
 * Author @ Tridib Samanta
 */

#include<iostream>
#include<iterator>
#include<string>
#include<vector>

using namespace std;

int main() {

    /*
        begin() - returns the beginning position of the container
        end() - returns the position after the last element in the container
    */

    vector <int> v = {1,2,3,4,5}; // Declaring a vector
    vector<int>::iterator itr; // Declaring an iterator
    for (itr = v.begin(); itr != v.end(); ++itr) { // Traversing through the vector elements
        cout << *itr << " ";
    }
    cout << "\n";

    /*
        advance() - increment the iterator position till the specified number mentioned in its arguments
    */

    vector<int>::iterator i = v.begin();
    while(i < v.end()) {
        cout << *i << " ";
        advance(i, 2);
        prev(i, 2);
    }
    cout << "\n";

    /*
        next() - returns the position the iterator would be pointing after advancing the positions mentioned in its arguments
        prev() - returns the position the iterator would be pointing after decrementing the positions mentioned in its arguments
    */

    vector<int> ar = {1,2,3,4,5,6,7,8,9,10};
    vector<int>::iterator itr1 = ar.begin();
    vector<int>::iterator itr2 = ar.end();

    while(itr1 < ar.end()) {
        cout << *itr1 << " ";
        itr1 = next(itr1, 3); // Don't forget to assign the reference to the iterator
    }
    cout << "\n";

    while(itr2 > ar.begin()) {
        itr2 = prev(itr2, 1); // Don't forget to assign the reference to the iterator
        cout << *itr2 << " ";
    }
    cout << "\n";

    /*
        Operation with iterators on string
    */

	string s = "some string";
	if(s.begin() != s.end()) { // Make sure s is not empty
		auto it = s.begin(); // Denotes the first character in s
		*it = toupper(*it); // Capitalizes only the first character of the string
	}
	cout << s << "\n";
	for(auto itr = s.begin(); itr != s.end() && !isspace(*itr); ++itr)
		*itr = toupper(*itr); // Capitalizes characters until string ends or when a space is encountered
	cout<< s << "\n";

	return 0;
}
