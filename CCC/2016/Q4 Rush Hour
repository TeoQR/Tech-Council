#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  int hours = stoi(s.substr(0,2));
  int minutes = stoi(s.substr(3,2));

  int time = hours * 60 + minutes;
  int distance_travelled = 120; // LET DISTANCE = TIME 

  while (distance_travelled > 0) {
    if ((time >= 420 && time < 600) || (time >= 900 && time < 1140)) {
      time += 10;
      distance_travelled -= 5; // HALF DISTANCE TRAVELLED
    }
    else {
      time += 10;
      distance_travelled -= 10;
    }
  }
  
  time %= 1440; // in case overshoot
  hours = time / 60; minutes = time % 60;

  string answer = "";
  if (hours < 10) {
    answer += "0" + to_string(hours);
  } else {
    answer += to_string(hours);
  }
  answer += ":";
  if (minutes < 10) {
    answer += "0" + to_string(minutes);
  } else {
    answer += to_string(minutes);
  }
  cout << answer;
}
