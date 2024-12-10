#include<iostream>
#include<math.h>
using namespace std;
int add(){
    int result;
    int a,b;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"\n";
    cout<<"Enter the number of b:\n";
    cin>>b;
    result =a+b;

    return result;
}
int sub(){
    int a,b;
    int result; 
     cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"\n";
    cout<<"Enter the number of b:\n";
    cin>>b;
    result =a-b;

    return result;
}
int mutlp(){
    int a,b;
    int result;
     cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"\n";
    cout<<"Enter the number of b:\n";
    cin>>b;
    result =a*b;

    return result;
}
int divide(){
    float a,b;
    float result;
    int i=1;
    while(i<3){
     cout<<"Enter the value of a:"<<endl;
     cin>>a;
     cout<<"\n";
     cout<<"Enter the number of b:\n";
     cin>>b;
     if (b=0)
     {
       continue;
     }
     else
     result=a/b;
     break;
    
    
    }

  return result;

}

int main(){

    int operation;
    int addition;
    int subtraction;
    int multipication;
    float division;

    cout<<"=====================\n ";
    cout<<"Calculator Menu"<<endl;
    cout<<"======================\n"<<endl;
    cout<<"1.Addition\n";
    cout<<"2.Subtraction\n";
    cout<<"3.Mutiplication\n";
    cout<<"4.Division\n";
    cout<<"5.Modulus\n";
    cout<<"6.Exit\n";


    cin>>operation;


   switch (operation)
   {
   case 1:
   addition =add();
    cout<<"Result ="<<addition;
    break;
   case 2:
   subtraction=sub();
   cout<<"Result="<<subtraction;
   break;

  case 3:
  multipication=mutlp();
  cout<<"Result="<<multipication;
  break;

  case 4:
   division=divide();
   cout<<"Result ="<<division;
   break;

   default:
    break;
   }

}
