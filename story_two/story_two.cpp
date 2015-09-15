#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;


string getString () {
  string aString;
  cin.sync();
  getline(cin, aString);
  return aString;
}

int getLanguage () {
  cout << "Choose language (English or C++): ";
  string language = getString();
  if (language == "English" || language == "ENGLISH" || language == "english" || language == "eng" || language == "ENG" || language == "Eng") {
    cout << "\nStory in English.\n\n";
    return 0;
  }
  else if (language == "C++" || language == "c++" || language == "c" || language == "C") {
    cout << "\nStory in C++.\n\n";
    return 1;
  }
  else {
    cout << "\nInvalid choice. Learn how to follow directions.\n\n";
    exit(2);
  }
}

int story (int lang) {
  switch (lang) {
    case 0:
      cout << "Story blah blah blah.\n\n";
      break;
    case 1:
      cout << "// story here\n\n";
      break;
  }
  return 0;
}

int main () {
  int lang = getLanguage();
  story(lang);

  return 0;
}
