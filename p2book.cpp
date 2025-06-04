#include <iostream> 
#include <string> 

class Author {
private:
 std::string name;
public:
 Author(const std::string& n) : name(n) {}
 std::string getName() const {
  return name;
 }
};

class Book {
private:
 std::string title;
 Author* author; // pointer, inițial nullptr
public:
 Book(const std::string& t) : title(t), author(nullptr) {}

 void setAuthor(Author* a) {
  author = a;
 }

 void printInfo() const {
  if (author == nullptr) {
   std::cout << title << " has the author unknown." << std::endl;
  } else {
   std::cout << title << " is written by " << author->getName() << "." << std::endl;
  }
 }
};

int main() {
 std::string title, name;
 std::cin >> title >> name;

 Book myBook(title);
 myBook.printInfo(); // prima linie

 Author myAuthor(name);
 myBook.setAuthor(&myAuthor);

 myBook.printInfo(); // a doua linie

 return 0;
}
