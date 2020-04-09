/*
 * Author @ Tridib Samanta
 */

/*
C++ provides a powerful alternative for the char*.
It is not a built-in data type, but is a container class in the Standard Template Library.
String class stores the characters as a sequence of bytes with a functionality of allowing access to single byte character.
A string is a class which defines objects that be represented as stream of characters.
In case of strings, memory is allocated dynamically and hence more memory can be allocated at run time on demand.
As no memory is preallocated, no memory is wasted.
String class defines a number of functionalities which allow manifold operations on strings.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {

    //Declaring string
    string str;

    cout << "Enter the string : ";
    //Taking string input
    getline(cin, str);

    //Displaying string
    cout << "The string is : " << str << endl;

    //push_back() - Insert a character at the end
    str.push_back('.');
    cout << "String after executing push back : " << str << endl;

    //pop_back() - Delete the last character from the string
    str.pop_back();
    cout << "String after executing pop back : " << str << endl;

    //capacity() - This function returns the capacity allocated to the string, which can be equal to or more than the size of the string.
    //Additional space is allocated so that when the new characters are added to the string, the operations can be done efficiently.
    cout << "String capacity is = " << str.capacity() << endl;

    //length() - Returns the length of the string
    cout << "String length is = " << str.length() << endl;

    //size() - Returns the length of the string
    cout << "String size is = " << str.size() << endl;

    //max_size() - Returns the maximum size of the string
    cout << "String maximum size is = " << str.max_size() << endl;

    //shrink_to_fit() - decreases the capacity of the string and makes it equal to the number of characters it contains.
    //This operation is useful to save additional memory if we are sure that no further addition of characters have to be made.
    str.shrink_to_fit();
    cout << "String capacity after shrinking is = " << str.capacity() << endl;

    //reserve() - request a change in capacity
    str.reserve(30);
    cout << "String capacity after reserve of 30 characters is = " << str.capacity() << endl;

    //resize() - The size of the string can be increased or decreased.
    str.resize(10);
    cout << "String after resize to 10 characters is : " << str << endl;

    //clear() - clears all characters from the string.
    str.clear();
    cout << "String after executing clear is : " << str << endl;

    //empty() - check if the string is empty or not. Returns true or false.
    if(str.empty())
        cout << "String is empty :( " << endl;
    else
        cout << "String is not empty :) " << endl;

    // '=' operator  - used for string assignment
    str = "Tridib";
    cout << "String after assignment is : " << str << endl;

    //Declaring iterator of the string
    string::iterator it;

    //begin() - Returns iterator pointing to the beginning of the string
    //end() - Returns iterator pointing to the one after end of the string
    for(it = str.begin(); it != str.end(); ++it)
        cout << *it;
    cout << endl;

    //Declaring reverse iterator of the string
    string::reverse_iterator it_rev;

    //rbegin() - Returns reverse iterator pointing to the end of the string
    //rend() - Returns reverse iterator pointing to the character one before the beginning of the string
    for(it_rev = str.rbegin(); it_rev != str.rend(); ++it_rev)
        cout << *it_rev;
    cout << endl;

    //cbegin() - Returns a const_iterator pointing to the first character of the string.
    //cend() - Returns a const_iterator pointing to the one past the end character of the string.
    //crbegin() - Returns a const_reverse_iterator pointing to the last character of the string
    //crend() - Returns a const_reverse_iterator pointing to the character preceding the first character of the string

    //'[]' operator - Returns the character at the specified position in the string
    for(int i = 0; i < str.length(); ++i)
        cout << str[i];
    cout << endl;

    //at() - Returns the character at the specified position in the string. The first character in a string is denoted by a value of 0 (not 1).
    for(int i = 0; i < str.length(); ++i)
        cout << str.at(i);
    cout << endl;

    //back() - Returns a reference to the last character of the string.
    str.back() = 'B';
    cout << str << endl;
    cout << "Last character is - " << str.back() << endl;

    //front() - Returns a reference to the first character of the string.
    str.front() = 't';
    cout << str << endl;
    cout << "First character is - " << str.front() << endl;

    //'+=' operator - Extends the current string by appending additional characters at the end of the string
    str += " samanta";
    cout << "String after appending : " << str << endl;

    //append() - Extends the string by appending additional characters at the end of its current value
    string s = "Hello ";
    s.append(str);
    cout << s << endl;

    //assign() - Assigns a new value to the string, replacing its current contents.
    str.assign("Tridib Samanta");
    cout << "String after assignment is - " << str << endl;

    //insert() - Inserts additional characters into the string right before the character indicated by the position
    str.insert(0, s, 0, 6);
    cout << "String after inserting additional characters is : " << str << endl;

    //erase() - Erases part of the string as specified, thus reducing its length
    str.erase(0, 6);
    cout << "String after performing erase : " << str << endl;

    //replace() - Replaces the portion of the string as specified.
    str.replace(0, 6, "Hey");
    cout << "String after replacing characters : " << str << endl;

    //swap() - Exchanges the content of the container by the content of str, which is another string object. Lengths may differ.
    string s1 = "Hello ";
    string s2 = "Tridib ";
    cout << "Before swap : " << s1+s2 << endl;
    s2.swap(s1);
    cout << "After swap : " << s1+s2 << endl;

    //copy() - copies the substring in target character array mentioned in its arguments.
    //It takes 3 arguments, target char array, length to be copied and starting position in string to start copying.
    char str3[10];
    s1.copy(str3, 6, 0);
    cout << "String after copying is : " << str3 << endl;

    //find() - Searches the string for the first occurrence of the substring specified in arguments.
    //It returns the position of the first occurrence of substring.
    cout << "First occurence of \"Samanta\" starts from : " << str.find("Samanta") << " in the string : " << str << endl;

    //rfind() - Searches the string for the last occurrence of the substring specified in arguments.

    //find_first_of() - Searches the string for the first character that matches any of the characters specified in its arguments.
    //It returns the position of the first character that matches.
    cout << "First occurence of any character from \"wxyz\" is at : " << str.find_first_of("wxyz") << " in the string : " << str << endl;

    //find_last_of() - Searches the string for the last character that matches any of the characters specified in its arguments.
    //It returns the position of the last character that matches.
    cout << "Last occurence of any character from \"abc\" is at : " << str.find_last_of("abc") << " in the string : " << str << endl;

    //find_first_not_of() - Searches the string for the first character that does not match any of the characters specified in its arguments.
    cout << "First occurence of the character that does not match with \"Hey!\" is at : " << str.find_first_not_of("Hey!") << " in the string : " << str << endl;

    //find_last_not_of() - Searches the string for the last character that does not match any of the characters specified in its arguments.
    cout << "Last occurence of the character that does not match with \"Samanta\" is at : " << str.find_last_not_of("Samanta") << " in the string : " << str << endl;

    //substr() - Returns a newly constructed string object with its value initialized to a copy of a substring of this object.
    string greeting = str.substr(0, 3);
    cout << "Substring of string \"" << str << "\" is : " << greeting << endl;

    //compare() - Compares the strings specified in the arguments. Returns their difference in integer.
    string s3 = "Coding is love";
    string s4 = "I love to code";
    if(s3.compare(s4) != 0)
        cout << "Strings \"" << s3 << "\" and \"" << s4 << "\" are unequal" << endl;
    else
        cout << "Strings \"" << s3 << "\" and \"" << s4 << "\" are equal" << endl;

	return 0;
}
