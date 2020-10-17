#include <iostream>
using namespace std;

int main() {
  int constantTerm, i;
  cout << "Enter the constant term: ";
  cin >> constantTerm;
  int absConstantTerm = abs(constantTerm);
  cout << "All possible rational zeros are: " << endl;
  for(i = 1; i <= absConstantTerm; ++i) {
    if(absConstantTerm % i==0)
    cout << "+/-" << "(" << i << ")" << endl;
  }

  int n;
  cout << "\nWhat is the degree of the function?" << endl;
  cin >> n;
  if (n == 8){
    int a8, a7, a6, a5, a4, a3, a2, a1;
    cout << "a8: ";
    cin>> a8;
    cout << "a7: ";
    cin >> a7;
    cout << "a6: ";
    cin >> a6;
    cout << "a5: ";
    cin >> a5;
    cout << "a4: ";
    cin >> a4;
    cout << "a4: ";
    cin >> a4;
    cout << "a3: ";
    cin >> a3;
    cout << "a2: ";
    cin >> a2;
    cout << "a1: ";
    cin >> a1;
    int x;
    while(x != 0) {
      cout << "Guess the x value(again): ";
      cin >> x;
      x = a8*x*x*x*x*x*x*x*x + a7*x*x*x*x*x*x*x + a6*x*x*x*x*x*x + a5*x*x*x*x*x + a4*x*x*x*x + a3*x*x*x + a2*x*x + a1*x + constantTerm; 
    }
  } else if(n == 7) {
    int a7, a6, a5, a4, a3, a2, a1;
    cout << "a7: ";
    cin >> a7;
    cout << "a6: ";
    cin >> a6;
    cout << "a5: ";
    cin >> a5;
    cout << "a4: ";
    cin >> a4;
    cout << "a4: ";
    cin >> a4;
    cout << "a3: ";
    cin >> a3;
    cout << "a2: ";
    cin >> a2;
    cout << "a1: ";
    cin >> a1;
    int x;
    while(x != 0) {
      cout << "Guess the x value(again): ";
      cin >> x;
      x = a7*x*x*x*x*x*x*x + a6*x*x*x*x*x*x + a5*x*x*x*x*x + a4*x*x*x*x + a3*x*x*x + a2*x*x + a1*x + constantTerm; 
    }
  } else if(n == 6) {
    int a6, a5, a4, a3, a2, a1;
    cout << "a6: ";
    cin >> a6;
    cout << "a5: ";
    cin >> a5;
    cout << "a4: ";
    cin >> a4;
    cout << "a4: ";
    cin >> a4;
    cout << "a3: ";
    cin >> a3;
    cout << "a2: ";
    cin >> a2;
    cout << "a1: ";
    cin >> a1;
    int x;
    while(x != 0) {
      cout << "Guess the x value(again): ";
      cin >> x;
      x = a6*x*x*x*x*x*x + a5*x*x*x*x*x + a4*x*x*x*x + a3*x*x*x + a2*x*x + a1*x + constantTerm; 
    }
  } else if(n == 5) {
    int a5, a4, a3, a2, a1;
    cout << "a5: ";
    cin >> a5;
    cout << "a4: ";
    cin >> a4;
    cout << "a4: ";
    cin >> a4;
    cout << "a3: ";
    cin >> a3;
    cout << "a2: ";
    cin >> a2;
    cout << "a1: ";
    cin >> a1;
    int x;
    while(x != 0) {
      cout << "Guess the x value(again): ";
      cin >> x;
      x = a5*x*x*x*x*x + a4*x*x*x*x + a3*x*x*x + a2*x*x + a1*x + constantTerm; 
    }
  } else if(n == 4) {
    int a4, a3, a2, a1;
    cout << "a4: ";
    cin >> a4;
    cout << "a3: ";
    cin >> a3;
    cout << "a2: ";
    cin >> a2;
    cout << "a1: ";
    cin >> a1;
    int x;
    while(x != 0) {
      cout << "Guess the x value(again): ";
      cin >> x;
      x =a4*x*x*x*x + a3*x*x*x + a2*x*x + a1*x + constantTerm;
    }
  } else if(n == 3) {
    int a3, a2, a1;
    cout << "a3: ";
    cin >> a3;
    cout << "a2: ";
    cin >> a2;
    cout << "a1: ";
    cin >> a1;
    int x;
    while(x != 0) {
      cout << "Guess the x value(again): ";
      cin >> x;
      x = a3*x*x*x + a2*x*x + a1*x + constantTerm;
    }
  } else if(n == 2) {
    int a2, a1;
    cout << "a2: ";
    cin >> a2;
    cout << "a1: ";
    cin >> a1;
    int x;
    while(x != 0) {
      cout << "Guess the x value(again): ";
      cin >> x;
      x = a2*x*x + a1*x + constantTerm;
    }
  } else if(n == 1) {
    int a1;
    cout << "a1: ";
    cin >> a1;
    int x;
    while(x != 0) {
      cout << "Guess the x value(again): ";
      cin >> x;
      x = a1*x + constantTerm;
    }
  }
  cout << "Congrats! You found one of the rational zeros.";

  cout << "Copyright (C) <2020>  <Yiyu Zhou>" << endl << endl;
  cout << "This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or any later version." << endl << endl;
  cout << "This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details." << endl << endl;
  cout << "You should have received a copy of the GNU General Public License along with this program.  If not, see <https://www.gnu.org/licenses/>.";
  return 0;
}