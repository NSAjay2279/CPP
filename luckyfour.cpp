#include <iostream>
#include <string>

using namespace std;

int main(){
  int counter = 0;
  string num1 = "4444";
  string num2 = "2834";
  string num3 = "876";

  for(int i=0; i<num1.length(); i++){
    if(num1[i] == '4'){
      counter++;
    }
  }
  cout << counter << endl;

  counter = 0;
  for(int i=0; i<num2.length(); i++){
    if(num2[i] == '4'){
      counter++;
    }
  }
  cout << counter << endl;

  counter = 0;
  for(int i=0; i<num3.length(); i++){
    if(num3[i] == '4'){
      counter++;
    }
  }
  cout << counter << endl;


  return 0;
}
