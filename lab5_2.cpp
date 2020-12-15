#include <iostream>
#include <cmath>
using namespace std;
double deg2rad (double i1){
    return i1*M_PI/180;
}
double rad2deg (double i2){
    return i2*180/M_PI;
}
double findXComponent(double l1, double l2, double a1, double a2){
    double x, y;
    x = l1*cos(a1);
    y = l2*cos(a2);
    return x+y;   
}
double findYComponent(double l1, double l2, double a1, double a2){
    double x, y;
    x = l1*sin(a1);
    y = l2*sin(a2);
    return x+y;    
}
double pythagoras(double xcomp, double ycomp){
    return sqrt(pow(xcomp,2)+pow(ycomp,2));
}
void showResult (double r1, double r2){
    cout <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = "<<r1<<endl<<"Direction of the resultant vector (deg) = "<<r2<<endl;
    cout <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
