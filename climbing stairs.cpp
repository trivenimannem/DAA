#include<iostream>
using namespace std;

int climbS(int n) {
    if(n<=2)
        return n;
    int prev2 = 1, prev1 = 2, current;
    for(int i=3; i<=n; i++) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Number of ways to climb "<<n<<" stairs: "<<climbS(n)<<endl;
    return 0;
}
