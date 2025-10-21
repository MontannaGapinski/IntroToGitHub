#include <iostream>
#include <cmath>
using namespace std;

double cone_volume(double r, double h)
{
    if(r < 0 || h < 0){
        return -1;
    }

    double volume = M_PI*r*r*(h / 3.0);

    return volume;
}

int main(){
    double r;
    double h;
    cin>>r>>h;
    double volume = cone_volume(r, h);
    cout<<volume<<endl;
    
    return 0;
}