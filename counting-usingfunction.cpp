#include<iostream>
using namespace std;

//function signature
void printcounting(int n){
    //funtion body
    for( int i=1; i<=n; i++){
        cout<<i<<" ";

    }
    cout<<endl;

}
int main(){
    int n;
    cin>>n;
    //funtion call
    printcounting(n);
    return 0;

}