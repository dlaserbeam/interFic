#include <iostream>
#include <string>

using namespace std;

string getString () {
  string aString;
  cin.sync();
  getline(cin, aString);
  return aString;
}

void welcome () {
  cout << "\n>Enter your name: ";
  string readerName = getString();
  cout << "\n>Hello, " << readerName << ". Welcome.\n";
}

int firstLeg () {
  cout << "\n>You are walking down a hallway and reach the end. There are two doors,";
  cout << " one to your left, and one to your right. Which do you choose? ";

  string choice = getString();

  if (choice == "right" || choice == "RIGHT" || choice == "Right") {
    cout << "\n>A montster eats you.\n";
    return -1;
  }
  else if (choice == "left" || choice == "LEFT" || choice == "Left") {
    cout << "\n>You must now battle a warrior. Which weapon do you choose? ";
    cout << "\n>Your choices are a sword, a bow and arrow, or your wit. Choose carefully: ";
    string weapon = getString();
    if (weapon == "sword" || weapon == "SWORD" || weapon == "Sword") {
        cout << "\n>Swords are sharp and dangerous, and you are inexperienced. ";
        cout << "You should have chosen more carefully. You are no match for the warrior. ";
        cout << "You accidentally cut yourself preparing for battle, and the warrior ";
        cout << "takes advantage of your weakness.\n";
        return -1;
    }
    else if (weapon == "bow and arrow" || weapon == "Bow and Arrow" || weapon == "BOW AND ARROW" ||
    weapon == "Bow and Arrow" || weapon == "bow" || weapon == "BOW" || weapon == "Bow") {
      return 0;
    }
    else if (weapon == "wit" || weapon == "WIT" || weapon == "Wit" ||
    weapon == "Your Wit" || weapon == "YOUR WIT" || weapon == "your wit" || weapon == "Your wit" ||
    weapon == "my wit" || weapon == "My Wit" || weapon == "My wit" || weapon == "MYWIT") {
      cout << "\n>That's just stupid. Wit isn't a weapon against a warrior.\n";
      return -1;
    }
    else return -2;
  }
  else return -3;
}

int firstResult () {
  int step1 = firstLeg();
  switch (step1) {
    case 0: {
      cout << "\n>You have chosen wisely. Your victory is swift.\n\n>You have beaten the warrior.\n";
      return 0;
    }
    case -1: {
      cout << "\n>You are dead. The end.\n\n";
      return -1;
    }
    case -2: {
      cout << "\n>Invalid weapon choice.\n\n>You are dead. The end.\n\n";
      return -1;
    }
    case -3: {
      cout << "\n>Invalid direction choice.\n\n>You are dead. The end.\n\n";
      return -1;
    }
  }
}

int main () {
  welcome();
  int step2 = firstResult();
  if (step2 == -1) return -1;

  cout << "\n>Time for the next step.\n";
  return 0;
}
