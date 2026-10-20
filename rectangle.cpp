#include <iostream>
using namespace std;
class Rectangle {
    int length;
    int breadth;
    public:
    Rectangle (int l = 0, int b = 0) {
        length = l;
        breadth = b;
    }
    void setdimension(int l, int b) {
        if (l >0 && b>0) {
            length = l;
            breadth = b;
        }
        else{
            cout<<"invalid dimensions."<<endl;
        }
    }

    int calculateArea () {
        int area;
        return area = length*breadth ;
     
    }

};
int main () {
    Rectangle r1;
    r1.setdimension(4,5);
   
    cout << "Area is: " << r1.calculateArea() << endl;
    
    Rectangle r2;
    r2.setdimension(10,4);
  
    cout << "Area is: " << r2.calculateArea() << endl;

    Rectangle r3;
    r3.setdimension(5,-2);
    
    cout << "Area is: " << r3.calculateArea() << endl;


    return 0;
}