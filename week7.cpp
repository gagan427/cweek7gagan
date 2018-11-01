#include<iostream>
#include<time.h>
using namespace std;
int main()
{
int a,b,balance,win,bet,lose;
balance = 500;
cout<<"..............."<<endl;
cout<<"Welcome to Game"<<endl;
cout<<"..............."<<endl;

do

{
cout<<"You have amount="<<balance<<endl;
cout<<"Select the number between 1 or 0 =";
cin>>a;
cout<<"Set your bet amount=";
cin>>bet;


if (bet > balance)  
 {
     cout<<"You Losse" << endl;
     cout <<"You chasing out"<<endl;
     return 0;
 }
 if (a==1)//if number is 1
 {
     cout<<"You Lose"<<endl;
     lose= balance-bet;
     cout<<"Remaining balance="<< lose <<endl;
     balance = lose;
     cout<<"Press 1 to continue the game"<<endl;
     cin>>b;
 }
 else if (a==0)// if number is 0
 {
     cout<<"You won"<<endl;
     win=2* bet+balance;
     balance=win;
     cout<<"Your balance="<<win<<endl;
     cout<<"Press 1 to continue"<<endl;
     cin>>b;

 }
 else
 {
     cout<<"You lose"<<endl;
     cout<<"You are chasing out"<<endl;
     return 0;
 }
}
 
     
 
 return 0;
}

 




