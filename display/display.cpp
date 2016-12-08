#include <iostream>
#include <vector>
using namespace std;

int numsize(int number);
vector<int> sizemultiplier, numofdigits, displaynumber;

int main() {
  int lettersize, number;


  cin >> lettersize >> number;
  while(lettersize != 0 && number != 0){
     int size;
     size = numsize(number);
     numofdigits.push_back(size);
     for(int x = size-1; x >= 0; x--){
        displaynumber.push_back(number%10);
        number = (number / 10);
     }
    sizemultiplier.push_back(lettersize);
    cin >> lettersize >> number;
    }
    for(int k = 1; k <= 2*sizemultiplier[i]+3; k++){
      int r = 0, h = 0, o, s;
      for (int i = 0; i < numofdigits.size(); i++){
          o = r + numofdigits[i];
          s = numofdigits[i];
              while(o  > r){
                 o = r + s - 1;
                 h++;
                 cout << displaynumber[o];
                    switch(displaynumber[o]){
                      case 1:
                      case 2:
                      case 3:
                      case 4:
                      case 5:
                      case 6:
                      case 7:
                      case 8:
                      case 9:
                      case 0:
                    }
              }
           }
    }
}


int numsize(int number){
  if(number <= 9) return 1;
  if(number > 9 && number <= 99) return 2;
  if(number > 99 && number <= 999) return 3;
  if(number > 999 && number <= 9999) return 4;
  if(number > 9999 && number <= 99999) return 5;
  if(number > 99999 && number <= 9999999) return 6;
  if(number > 999999 && number <= 99999999) return 7;
  if(number > 9999999 && number <= 999999999) return 8;
  else return 0;
}



