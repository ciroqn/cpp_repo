#include <iostream>
#include "profile.hpp"
#include <string>

int main() {

  // instantiate object using Profile class with necessary parameters
  Profile joe("Joe Bloggs", 30, "Erewhon", "Country Zog");

  // add hobby to hobbies vector
  joe.add_hobby("reading");
  joe.add_hobby("hiking");
  joe.add_hobby("pretending to be productive");
  joe.add_hobby("daydreaming");

  // print out profile info, defined in functions.cpp
  std::cout << joe.view_profile() << "\n";

}
