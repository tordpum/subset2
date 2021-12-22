#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
  int n = 0;
  string s;
  cin >> s;
  //cout << s << '\n';
  char c;
  int i = 1;
  do {
    // cout << s[i];
    if (s[i] == '}') break;
    if (s[i] == ',') {
      n++;
      i++;
    } else if (s[i] == '{') {
      // stack push/pop until empty
      stack<char> ss;
      ss.push('{');
      while (!ss.empty()) {
        i++;
        // cout << s[i];
        if (s[i] == '{') {
          ss.push('{');
          //cout << "push ";
        } else if (s[i] == '}') {
          ss.pop();
          //cout << "pop ";
        } else {
          i++;
        }
      }
      n++;
    } else {
      i++;
    }
  } while (s[i] != '}');
  if (n == 0 && s.size() == 2) {
    n = -1;
  }
  int p = 1;
  //cout << n << '\n';
  for (int i=0; i<n+1; i++) {
    p *= 2;
  }
  cout << p << '\n';
  return 0;
}
