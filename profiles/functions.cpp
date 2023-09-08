
#include "profile.hpp"
#include <iostream>
#include <string>

// define connstructor which takes select parameters, except hobbies, which are added using add_hobby method
Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country) 
  : name(new_name), age(new_age), city(new_city), country(new_country) {}

// define view_profile() function
std::string Profile::view_profile() {
  std::string bio = "My name is " + name + ". "; 
  bio += "I'm " + std::to_string(age) + " years old. ";
  bio += "I live in " + city + ", " + country + ".\n";
  bio += "My hobbies are: ";

  // loop through hobbies vector and add to bio. adds 'and' to penultimate hobby with Oxford comma!
  for (int i = 0; i < hobbies.size(); i++) {
    if (i == hobbies.size()-1) {
      bio += "and " + hobbies[i] + ".";
    } else {
      bio += hobbies[i] + ", ";
    }
  }

  return bio;
}

// define add_hobby(...) function. Adds hobby to hobbies vector
void Profile::add_hobby(std::string new_hobby) {
  hobbies.push_back(new_hobby);
}
