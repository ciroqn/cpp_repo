#include <iostream>
#include <vector>
#include <string>

class Profile {

  private:
    std::string name;
    int age;
    std::string city;
    std::string country;
    std::vector<std::string> hobbies;

  // public methods to manipulate private data
  public:
    //constructor
    Profile(std::string name, int age, std::string city, std::string country);

    // prints profile info
    std::string view_profile();

    // adds hobby to hobbies vector
    void add_hobby(std::string new_hobby);

};
