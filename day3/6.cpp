#include<bits/stdc++.h>
using namespace std;

void calculator(int choice,int a,int b){
    switch (choice)
    {
    case 1:
        cout<<"Sum of "<<a<<" & "<<b<<" = "<<a+b<<endl;
        break;
    case 2:
        cout<<"substraction of "<<a<<" & "<<b<<" = "<<a-b<<endl;
        break;
    case 3:
        cout<<"multiplication of "<<a<<" & "<<b<<" = "<<a*b<<endl;
        break;
    case 4:
        cout<<"divison of "<<a<<" & "<<b<<" = "<<a/b<<endl;
        break;
    }
}

int main()
{
    int choice=0,a=5,b=2;
    cout<<"\n Enter 1 for sum \n 2 for substraction \n 3 for multiplication \n 4 for divison"<<endl;
    cin>>choice;
    calculator(choice,a,b);
    return 0;
}