#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int n;
vector<double> closest;

int main() {
  cin >> n;
  
  if(n!=0){
    while(n!=0){
      int pointx[n], pointy[n];
      for(int x = 0; x < n; x++){
           cin >> pointx[x] >> pointy[x];
      }
      double distance;
      double min = 5000000;
      double setmin = 5000000;
      for(int z = 0; z <= n-1; z++){
       
       for(int y = 0; y <= n-1; y++){
             if(z != y){
               distance = sqrt(pow((pointx[z] - pointx[y]), 2)+pow((pointy[z] - pointy[y]), 2));
               if(distance < min) min = distance;
             }
           if(min < setmin) setmin = min;
         }
       }
       closest.push_back(setmin);
       cin >> n;
    }
  }

  for(int x = 0; x < closest.size(); x++){
    if(closest[x] >= 10000) cout << "INFINITY" << endl;
    if(closest[x] < 10000) cout << closest[x] << endl;
  }
}
