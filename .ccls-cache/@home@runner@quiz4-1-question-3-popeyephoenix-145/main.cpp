#include <iostream>
using namespace std;
int main() {
  int n1, n2, n3;
  int max, mid, min;
  cin >> n1 >> n2 >> n3;

if ((n1 > n2) && (n1 > n3)) {
  max = n1;
  if ((n2 > n3)) {
    mid = n2;
    min = n3;
  }
else {
  mid = n3;
  min = n2;
}
}
  
else if ((n2 > n1) && (n2 > n3)) {
max = n2;
  if ((n1 > n3)) {
    mid = n1;
    min = n3;
  }
else {
  mid = n3;
  min = n1;
}
}

else if ((n3 > n2) && (n3 > n1)) {
max = n3;
  if ((n1 > n2)) {
    mid = n1;
    min = n2;
  }
else {
  mid = n2;
  min = n1;
}
}

cout << "MAX: " << max << endl;
cout << "MID: " << mid << endl;
cout << "MIN: " << min << endl;
  return (0);
}