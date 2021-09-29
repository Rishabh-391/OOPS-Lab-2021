// 1. Input a number from user and print if it is an armstrong number or not
#include<iostream>
#include<cmath>
using namespace std;
int isArmstrong(int n){
 int temp=n,ct=0,sum=0;
 while(n){
  ct++;
  n/=10;
 }
 n=temp;
 while(n){
  int r=n%10;
  sum+=pow(r,ct);
  n=n/10;
 }
 return sum;
}
int main(){
 int n;
 cout<<"Enter the number to check"<<endl;
 cin>>n;
 if(n==isArmstrong(n))
  cout<<"Armstrong Number"<<endl;
 else cout<<"Not an Armstrong Number"<<endl;
return 0;
}
