#include <iostream>
#include <string>
using namespace std;
int cheetah (int money){
    int x , y;
    x = money/10;
    y=x;
    while (y >=3){
        x += y/3;
        y = y/3 + y%3;
    }
    return x;
}
int main(){ 
    cout << cheetah(20)<<endl;
    cout << cheetah(35)<<endl;
    cout << cheetah(101)<<endl;
    cout << cheetah(150)<<endl;
    cout << cheetah(204)<<endl;

}