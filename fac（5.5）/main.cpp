#include <iostream>

using namespace std;
int fac(int x);
int main()
{
    int m,n;
    double result;
    cout <<"ÇëÊäÈëm£¬nµÄÖµ"<<endl;
    cin >>m>>n;
    result=(double)fac(m)/(double)(fac(m-n)*fac(n));
    cout <<result<<endl;
    return 0;
}
int fac(int x){

    for(int i=(x-1);i>0;i--){
        x=x*i;
    }
    return x;
}
