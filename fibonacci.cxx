#include <iostream>
using namespace std;
int main(){
  int N;
    cout << "Bitte Zahl N als Folgenindex eingeben!" << endl;
    cin >> N;
    cout << N << "  wurde eingegeben" << endl;

 int f0=0;
 int f1=1;
 int fi ; 
  for(int i=0; i<N+1; i++){
    cout << "Die Summe der Fibonaccifolge ist  für i="<<i <<" " <<f0 << endl;
  fi = f0+f1;
  f0 = f1;
  f1 = fi;
  
  
   
  }
  return 0;
}
