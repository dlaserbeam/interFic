#include <iostream>
#include <string>

using namespace std;

string getString() {
  string aString;
  cin >> aString;
  return aString;
}



int main () {
  cout << "Enter your name: ";
  string readerName = getString();

  cout << "Hello, " << readerName << ". Welcome.\n";
  cout << "You are walking down a hallway and reach the end. There are two doors,";
  cout << " one to your left, and one to your right. Which do you choose? ";

  string choice = getString();

  switch (choice) {
    case right:
    case Right:
    case RIGHT: {
      cout << "A montster eats you.\nYou are dead. The end.\n";
      return -1;
    }
    case left:
    case Left:
    case LEFT: {
      cout << "You must now battle a warrior. Which weapon do you choose? ";
      cout << "Your choices are a sword, a bow and arrow, or your wit. Choose carefully: ";
      weapon = getString();
      switch (weapon) {
        case Sword:
        case SWORD:
        case sword: {
          cout << "Swords are sharp and dangerous, and you are inexperienced. ";
          cout << "You should have chosen more carefully. You are no match for the warrior. ";
          cout << "You accidentally cut yourself preparing for battle, and the warrior ";
          cout << "takes advantage of your weakness.\nYou are dead. The end.\n";
          return -1
        };
        case "Bow and arrow":
        case "bow and arrow":
        case "Bow and Arrow":
        case "BOW AND ARROW": {
          cout << "You have chosen wisely. Your victory is swift.\nYou win. The end.\n";
          return 0;
        };
        case WIT:
        case wit:
        case Wit:
        case "Your Wit":
        case "Your wit":
        case "your wit":
        case "YOUR WIT":
        case "my wit":
        case "My Wit":
        case "My wit":
        case "MY WIT": {
          cout << "That's just stupid. Wit isn't a weapon against a warrior.\n";
          cout << "You are dead. The end.\n";
        };
      }
    }
  }
}
