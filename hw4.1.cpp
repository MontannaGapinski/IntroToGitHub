#include <iostream>
#include <cmath>
using namespace std;

double coneArea(double r, double l)
{
    if(r < 0 || l < 0){
        return -1;
    }

    double area = M_PI*r*(r + l);

    return area;
}

int main(){
    double r;
    double l;
    cin>>r>>l;
    double area = coneArea(r, l);
    cout<<area<<endl;
    
    return 0;
}