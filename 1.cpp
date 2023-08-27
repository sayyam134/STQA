#include <iostream>
using namespace std;

void nor(int a, int b, int c)
{
    if (a == 0) {
        cout << "Not a Quadratic Equation"
             << endl;
        return;
    }
 
    int d = b * b - 4 * a * c;
 
    if (d > 0) {
        cout << "Real Roots" << endl;
    }

    else if (d == 0) {
        cout << "Equal Roots" << endl;
    }
    else {
        cout << "Imaginary Roots" << endl;
    }
}
int main(){
    int a,b,c;

    int t;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        nor(a,b,c);
    }
    return 0;
}