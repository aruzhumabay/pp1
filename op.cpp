//дискреминант
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int D=sqrt(pow(b,2)-4*a*c);
    cout<<D<<endl;
    return 0;

}