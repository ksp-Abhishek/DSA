
#include <iostream>
using namespace std;


class phone{
    private:
    int areaCode;
    int exchange;
    int number;
    public:
    void initialize(void){
        areaCode=212;
        exchange=767;
        number=8100;
    }
    void input(void);
    void display(void);

};
void phone ::input(){
    cout<<"enter area code exchange and number";

    cin>>areaCode>>exchange>>number;


}
void phone::display()
{
    cout<<"("<<areaCode<<")"<<exchange<<"  "<<number<<endl;


}
int  main(){
    phone p1,p2;
    p1.initialize();
    p2.input();
    cout<<"my number is";
    p1.display();
    cout<<"your number is";
    p2.display();
}

    

