#include <iostream>
#include <string>
#include <stdlib.h>
#include "color.h"

using namespace std;

Color::Modifier red(Color::FG_RED);
Color::Modifier blue(Color::FG_BLUE);
Color::Modifier green(Color::FG_GREEN);
Color::Modifier def(Color::FG_DEFAULT);

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

void underDevelopment () {
  cout << ">Currently under development.\n\n";
}

int getLanguage () {
  cout << ">Choose language (English or C++): ";
  string language = getString();
  if (language == "English" || language == "ENGLISH" || language == "english" || language == "eng" || language == "ENG" || language == "Eng") {
    cout << "\n>>Story in English.\n\n";
    return 0;
  }
  else if (language == "C++" || language == "c++" || language == "c" || language == "C") {
    cout << "\n>>Story in C++.\n\n";
    return 1;
  }
  else {
    invalidChoice();
  }
}

int barType (int lang) {
  switch (lang) {
    case 0: //eng
      cout << ">You enter a bar and dicsover to your horror that it's a:\n";
      cout << "(enter number)\t<1>karaoke bar\t<2>cowbow bar\n";
      int bar;
      cin >> bar;
      return bar;
    case 1: //c++
      cout << ">// story here\n\n";
      underDevelopment();
      return 3;
  }
}

int barChoice (int barType) {
  switch (barType) {
    case 1: //eng, karaoke
      cout << "\n>>Welcome to the karaoke bar, your worst nightmare. Terrible music and even worse singing.\n";
      cout << "Wait. Is that your mother? Yes, it is. Standing up on the makeshift stage, singing that song ";
      cout << "(you know the one), and staring straight at you.\n";
      cout << "Yeah. This is bad. The way I see it, you have two choices: turn and run, or join in. You pick.\n";
      cout << "(enter number)\t<1>run\t<2>sing\n";
      int runSing;
      cin >> runSing;
      return runSing;
    case 2: //eng, cowboy
      cout << "\n>>Welcome to the cowboy bar.\n\n";
      return 3;
    case 3: //c++
      return 0;
    default:
      invalidChoice();
  }
}

int karaokeBarRun() {
  cout << "\n>>Can't say I blame you. I probably would have run, too.\n\n";
  cout << ">Unfortunately, the bouncer sees you running (yes, there is a bouncer at a karaoke bar). ";
  cout << "Right before you pass through the door, you notice an arm blocking your path. You're moving too";
  cout << " quickly to stop, though.\n\n";
  cout << "\t>>" << red << "---***---BAM---***---" << def << "<<\n\n";
  cout << ">Darkness.\n";
  return 1;
}

int karaokeBarSing () {
  cout << "\n>>Okay, you're brave, or insane. Or probably drunk.\n\n";
}

int runBlackout() {
  cout << "\n>You open your eyes. Your head is pounding, and the room is bright. You look around and ";
  cout << "realize you're in a hospital room.\n\n";
  return 0;
}

int main () {
  int _lang = getLanguage();
  int _barType = barType(_lang);
  int _barChoice = barChoice(_barType);
  int _barResult = 0;
  switch (_barChoice) {
    case 1: //eng, karaoke, run
      _barResult = karaokeBarRun();
      break;
    case 2: //eng, karaoke, sing
      _barResult = karaokeBarSing();
      break;
    case 3: //eng, cowboy
      underDevelopment();
  }

  switch (_barResult) {
    case 1: //eng, karaoke, run, blackout
      int _wakeUp = runBlackout();
      break;
  }

  return 0;
}
