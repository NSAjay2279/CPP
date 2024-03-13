#include <iostream>
#include <string>

using namespace std;

int main(){
  int n=3;
  int counter = 0;
  string num[3] = {"4444","2834","876"};        // Dynamic programming required

  for(int i=0; i<n; i++){
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
