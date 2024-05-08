#include <iostream>
#include <string>

class User{
public:
    std::string name;
};

int main(){
   
   User l;
   l.name = "Lin";
   std::cout << l.name << std::endl;
   
   //is the same as
   
    User* u = new User();
    //dereference first and grab the name attribute
    (*u).name = "Osmond";
// -> is equal to dereference and grab the attribute
    std::cout << u->name << std::endl;

    delete u;
    
    return 0;
}
