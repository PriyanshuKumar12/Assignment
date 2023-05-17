#include<iostream>
using namespace std;
int main(){
    int i,n,count=0;
    cout << ("Enter any number: ");
    cin >> n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
       if(count==2)
    cout << ("No is Prime");
       else
       cout << ("No. is not Prime");

    return 0;
    }