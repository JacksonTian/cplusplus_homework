#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {
  string filename;
  cin >> filename;
  ifstream in(filename);
  int count = 0;
  string word;
  while (in >> word) {
    cout << word << endl;
    count++;
  }
  cout << "word count: " << count << endl;
}
