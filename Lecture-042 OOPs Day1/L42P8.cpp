#include <iostream>
using namespace std;

class Hero {
private:
    const int id; // Const member variable
    const char level;

public:
    
    // Simple constructor to initialize the const member variable called initialization list
    //Initialisation list-------

    Hero(int idValue, int levelGrade) : id(idValue), level(levelGrade) {
        // Constructor body can be empty or contain other initialization code
    }

    //Hero(int idValue) : id(idValue) {}

    // Const member function
    void print() const {
        cout << "I am a const function called by const and non-const objects." << endl;
    }

    // Function to display the id
    void displayId() const {
        cout << "Hero ID: " << id << endl;
        cout << "Hero HEALTH: " << level << endl;
    }
};

int main() {


    Hero hero(1,'A'); // Create a non-const Hero object with ID 1
    hero.displayId();

    const Hero shahbaz(2,'B'); // Now initializing the const object with ID 2
    shahbaz.displayId();


    // Cannot reassign a const object
    // shahbaz = Hero(3); // This will give an error

    Hero anotherHero(4,'S'); // Create another non-const Hero object with ID 4
    anotherHero.displayId(); // This works fine

    return 0;
}
