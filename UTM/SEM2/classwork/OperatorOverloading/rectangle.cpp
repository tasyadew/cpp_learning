#include <iostream>
using namespace std;

class Rectangle{
    private:
        int width, height;

    public:
        Rectangle(int w = 0, int h = 0){
            width = w;
            height = h;
        }

        int getHeight(){return height;}

        Rectangle operator--(int){ //dummy parameter to differentiate that this is postfix
            return height--;
        }


        friend ostream&operator<<(ostream&,Rectangle&);
};

ostream&operator<<(ostream&op,Rectangle&r){
    op << "Width of the rectangle is " << r.width << endl;
    op << "Height of the rectangle is " << r.height << endl;
    return op;
}

int main(){
    Rectangle r1(3,5), r2(6,9), r3(21,45);
    Rectangle *arr[3] = {&r1, &r2, &r3};
    Rectangle temp;
    int i = 0;
    char input;

    cout << "Enter 1, 2 or 3 (0 for exit) => ";
    cin >> i; 

    while(i!=0){
        i--; //same as array index

        cout << "Do you want to decrease height by 1? (y/n) ";
        cin >> input;
        while(input != 'n'){
            (*arr[i])--;
            cout << "Do you want to decrease height by 1 again? (y/n)";
            cin >> input;
        }

        cout << "Enter 1, 2 or 3 (0 for exit) => ";
        cin >> i; 
    }
    
    for (int i = 0; i < 3; i++){
        cout << *arr[i];
    }
    

    /*
    cout << r1.getHeight() << endl;
    r1--;
    cout << r1.getHeight() << endl;
    r1--;
    cout << r1.getHeight() << endl;
    */
   return 0;
}
