#include <iostream>
#include <vector>
using namespace std;

//function prototype
int numsize(int number);
void out();

//global variables
vector<int> sizemultiplier, numofdigits, displaynumber;

//main function
int main() {
  int lettersize, number;

  // input data set
  cin >> lettersize >> number;

  while(lettersize != 0 && number != 0){
    int size;
    size = numsize(number);

    //will add size value to num of digits vector
    numofdigits.push_back(size);

    //will add individual digits back to displaynumber vector in reverse order
    for(int x = size-1; x >= 0; x--){
      displaynumber.push_back(number%10);
      number = (number / 10);
    }

    //will add lettersize back to sizemultiplier vector
    sizemultiplier.push_back(lettersize);

    //will ask for new set before ending loop of while
    cin >> lettersize >> number;
  }
  //display all
  out();
}

//function to display all numbers
void out(){
  //variables for cout iterations
  int endindex = 0, h = 0, reversestartindex;

  //iterate through numofdigits vector, each iteration represents one data set
  for (int i = 0; i < numofdigits.size(); i++){
    reversestartindex  = endindex + numofdigits[i];

    //display numbers in reverse order on vector for one data set
    while(reversestartindex > endindex){
      reversestartindex--;
      cout << displaynumber[reversestartindex] << endl;
      h++;
    }
    endindex = endindex + h;
  }
}

//number size calculator function
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



