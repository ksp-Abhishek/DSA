#include<iostream>
using namespace std;
int main()
{
  int n;
  cin >>n;
  int i=2;
  int counter = 0;
  while (i<n)
  {
    if(n%i==0){
        counter++;
        break;
    }
    i++;
  }

  if (counter)
  {
    cout << "Not prime";
  }else{
    cout << "prime";
  }
  
  
}