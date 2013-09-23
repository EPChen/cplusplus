#include <iostream>

using namespace std;

int main()
{
    int i;
    double c,f;
    cout << "1.摄氏温度——>华氏温度" << endl;
    cout << "2.华氏温度——>摄氏温度" << endl;
    cout << "3.退出" << endl;
    cin >>i;
    for(int j=0;;j++){
        if(i==1){
            cout <<"输入摄氏温度"<<endl;
            cin >>c;
            f=9*c/5 +32;
            cout <<c<<"摄氏度对应"<<f<<"华氏温度"<<endl;
        }else if(i==2){
            cout <<"输入华氏温度"<<endl;
            cin >>f;
            c=(5/9)*(f-32);
            cout <<f<<"华氏温度对应"<<c<<"摄氏度"<<endl;
        }else if(i==3){
            break;
        }
    }
    return 0;
}
