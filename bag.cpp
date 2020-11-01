#include "bag.h"
#include<iostream>

// YOU CAN INCLUDE OTHER HEADER FILES HERE IF NEEDED
// DO NOT ADD THE FOLLOWING HEADERS:
// 1. <vector>, 2. <queue>, 3. <deque>, 4. <stack>,
// 5. <map>, 6. <algorithm>, 7. <set>, 8. <utility>
// In summary do not use any built-in data structures
// other than arrays. Also, do not use any built-in
// algorithms related to sorting and searching

// you are allowed to use the header files: <cstring>, <string>
// you can use the string manipulation functions
// provided by those header files if needed

using namespace std;

// implementation of word constructor; you may modify this if required
Word::Word(std::string text){
  word = text;
  count = 1;
}
// Access Word->text
string Word::text() const{
  return word;
}
// Access Word->count
int Word::amount() const{
  return count;
}
// Increase count of a word
void Word::add_count() {
  count++;
};


// Implement add_word function
void Bag::add_word(const string& key) {
  bool inbag = false;
  int i;
  for (i = 0; i < used; i++) {
    if (container[i].text() == key) {
      inbag = true;
      break;
    }
  }
  if (inbag) {
    container[i].add_count();
  } else {
      container[used] = Word(key);
      used++;
  }
}
// Access Word item of array


// Implement the print_words function
void Bag::print_words() const {
  for (int i = 0; i < used; i++) {
    cout << container[i].text() << "::"
         << container[i].amount() << endl;
  }
  return;
}

// Implement any other memeber functions you may have
// added to the class definitions
