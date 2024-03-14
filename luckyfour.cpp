#include <iostream>
#include <string>

using namespace std;

int main(){
  int t;
  int counter = 0;
  // Dynamic programming required
  cout << "Enter a number t: ";
  cin >> t;
  
  string num[t] = {};
  
  cout << "Enter list of " << t << " lines of numbers of varying range as you wish: " << endl;
  for(int i=0; i<t; i++){
      cin >> num[i];
  }
  
  for(int i=0; i<t; i++){
    for(int j=0; j<num[i].length(); j++){
      if(num[i][j] == '4'){
        counter++;
      }
    }
    cout << counter << endl;
    counter = 0;
  }
  return 0;
}
