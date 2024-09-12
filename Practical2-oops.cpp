#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};


void inputPoint(Point &  p) {
    
cout<<"Abhishek-2823291"<<endl;

    cout << "Enter X coordinate: ";

    cin >> p.x;

    cout << "Enter Y coordinate: ";

    cin >> p.y;
}

Point addPoints (const Point &  p1, const Point &  p2) {

    Point result;

    result.x = p1.x + p2.x;

    result.y = p1.y + p2.y;

    return result;
}

void displayPoint(const Point &  p) {


 cout << "((" << p.x << "), (" << p.y << "))";
}

int main() {

    Point p1, p2, p3;

    
    cout << " coordinates first point:" << endl;

    inputPoint(p1);

    cout << " coordinates second point:" << endl;
    
    inputPoint(p2);

    p3 = addPoints(p1, p2);


    cout << "The sum of the points is: ";

    displayPoint(p3);
    cout << endl;

    return 0;
    }
