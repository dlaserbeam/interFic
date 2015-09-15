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

void invalidChoice() {
  cout << "\n>>>Invalid choice. Learn how to follow directions.\n\n";
  exit(2);
}

int getLanguage () {
  cout << ">Choose language (English or C++): ";
  string language = getString();
  if (language == "English" || language == "ENGLISH" || language == "english" || language == "eng" || language == "ENG" || language == "Eng") {
    cout << "\n>Story in English.\n\n";
    return 0;
  }
  else if (language == "C++" || language == "c++" || language == "c" || language == "C") {
    cout << "\n>Story in C++.\n\n";
    return 1;
  }
  else {
    invalidChoice();
  }
}

int firstLeg (int lang) {
  switch (lang) {
    case 0: //eng
      cout << ">You enter a bar and dicsover to your horror that it's a:\n";
      cout << "(enter number)\t<1>karaoke bar\t<2>cowbow bar\n";
      int bar;
      cin >> bar;
      return bar;
    case 1: //c++
      cout << ">// story here\n\n>Under development.\n\n";
      return 3;
  }
}

int bar1 (int barType) {
  switch (barType) {
    case 1: //eng, karaoke
      cout << "\n>Welcome to the karaoke bar, your worst nightmare. Terrible music and even worse singing.\n";
      cout << "And fuck. Is that your ex? Yes, it is. Standing up on the makeshift stage, singing that song (you know the one), and staring straight at you.\n";
      cout << "Yeah. This is bad. The way I see it, you have two choices: turn and run, or join in. You pick.\n";
      cout << "(enter number)\t<1>run\t<2>sing\n";
      int runSing;
      cin >> runSing;
      return runSing;
    case 2: //eng, cowboy
      cout << "\n>Welcome to the cowboy bar.\n\n";
      return 3;
    case 3: //c++
      break;
    default:
      invalidChoice();
  }
}

int karaokeBarRun() {
  cout << "\n\n>Can't say I blame you. I probably would have run, too.\n\n";
  return 0;
}

int karaokeBarSing () {
  cout << "\n\nOkay, you're brave, or insane. Or probably drunk.\n\n";
}

int main () {
  int lang = getLanguage();
  int barType = firstLeg(lang);
  int barChoice = bar1(barType);
  switch (barChoice) {
    case 1:
      karaokeBarRun();
    case 2:
      karaokeBarSing();
    case 3:
      cout << ">Currently under development.\n\n";
  }

  return 0;
}
