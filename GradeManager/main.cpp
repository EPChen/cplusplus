#include <iostream>

using namespace std;
void list();
void chose();
void cancle();
void entry();
struct student {
    string name=" ";
    int num;
    double grade;
  //  student *next;
   // student *last;
}stu[100];
int StuNum=0;
//Student,*studentPtr;
int main()
{
    int i;
    do{
        cout <<"1,查看所有学生名单"<<endl;
        cout <<"2,选课"<<endl;
        cout <<"3,退选"<<endl;
        cout <<"4,录入成绩"<<endl;
        cout <<"5,退出程序"<<endl;
        cin >>i;
        switch(i){
            case(1):list();break;
            case(2):chose();break;
            case(3):cancle();break;
            case(4):entry();break;
            case(5):cout <<"欢迎使用本程序"<<endl;break;
            default:cout<<"输入错误请重新输入"<<endl;
        };
    }while(i!=5);
    return 0;
}
void list(){
    int k=1;
    char YoN;
    cout <<"学号"<<'\t'<<"姓名"<<'\t'<<"成绩"<<endl;
    do{
        if(stu[k].name==" ") {

            cout<<"信息以到底"<<endl;break;
        }
        cout<<stu[k].num<<'\t'<<stu[k].name<<'\t'<<stu[k].grade<<endl;
       k++;
    }while(k<=StuNum);

}
void chose(){
    int chosenum;
    cout<<"欢迎选C++课程"<<endl;
    cout<<"1,输入个人信息"<<endl;
    cout<<"2,退出"<<endl;
    cin >>chosenum;
    if(chosenum==2) return;

    next:
        for(int k=StuNum+1;;k++){
            cout<<"请输入您的学号："<<endl;
            cin >>stu[k].num;
            cout<<"请输入您的姓名："<<endl;
            cin >>stu[k].name;
            cout<<"请输入您的成绩："<<endl;
            cin >>stu[k].grade;
            cout<<"你是第"<<StuNum+1<<"位选c++的学生，请确认你的信息无误"<<endl;
            StuNum++;
            cout<<"1,继续输入   2，返回主菜单"<<endl;
            cin >>chosenum;
            if(chosenum==1) goto next;
            else if(chosenum==2) return;
    }
}
void cancle(){
    int stunum;
    int chosenum;
    cout <<"请输入你的学号"<<endl;
    cin >>stunum;
    for(int i=stunum;i<StuNum;i++){
        stu[i]=stu[i+1];
    };StuNum--;
    cout <<"1，继续    2，返回主菜单"<<endl;
    cin >>chosenum;
    if(chosenum==1) cancle();
    if (chosenum==2) return ;
}
void entry(){
    int stunum;
    int chosenum;
    cout <<"请输入你要录入成绩的学生的学号"<<endl;
    cin >>stunum;
    cout <<"请输入你要录入的成绩"<<endl;
    cin >>stu[stunum].grade;
     cout <<"1，继续    2，返回主菜单"<<endl;
    cin >>chosenum;
    if(chosenum==1) entry();
    if (chosenum==2) return ;
}
