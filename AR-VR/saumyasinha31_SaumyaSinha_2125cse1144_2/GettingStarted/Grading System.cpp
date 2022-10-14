#include<iostream>
using namespace std;
int main(int argc, char**argv){
    int m;
    cin>>m;
    if(m>90){
        cout<<"excellent"<<endl;
    }
    else if (m<=90 && m>80){
        cout<<"good"<<endl;
    }
    else if (m<=80 && m>70){
        cout<<"fair"<<endl;
    }
    else if(m<=70 && m>60){
        cout<<"meets expectations"<<endl;
    }
    else {
        cout <<"below par"<<endl;
    }
    //write your code here
   return 0; 
}