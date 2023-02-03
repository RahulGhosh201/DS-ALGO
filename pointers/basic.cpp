#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num=5;
    int *ptr=&num;
    //int address_of_num= ptr;
    cout<<"Value of num:"<<num<<endl;
    cout<<"Value of num:"<<*ptr<<endl;
    cout<<"Address of num: "<<&num<<endl;
    cout<<"Address of num: "<<ptr<<endl;

    //incrementing value of the variable using pointer
    //num++ is same as (*ptr)++
    //ptr++ increases the address
    //(*ptr)++ increases the value stored in the address
    //copying a pointer
    int *copy=ptr;
    cout<<"before increment Value of copy: "<<*copy<<endl;
    (*copy)++;
    cout<<"after increment Value of copy: "<<*copy;
}