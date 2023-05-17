#include <iostream>
using namespace std;
 int main() 
 {
int i,n; 
cout << ("Enter any number to Find Factors: \t");
cin >> n;
cout << ("Factors of the Given Number are: \n");
   for (i=1;i<=n;i++)
  { if(n%i==0)
  {
	cout << i ;
		}
  }
  return 0;
}