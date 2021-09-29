#include<iostream>
#include<cstdio>
using namespace std;
struct studentDetails{
 char name[21],college[51],branch[21],address[101];
 int rollno;
};
int main(){
int n;
cout<<"Enter the number of students\n"; cin>>n;
studentDetails obj[n];
int flag=0;
char s[10];
for(int i=0;i<n;i++){
 cout<<"Enter the details for "<<i+1<<" student:\n\t";
  
 if(flag==0){
  fgets(s,10,stdin);
  flag=1;
 } 
 cout<<"Enter the Name :\n\t"; 
 fflush(stdin); 
 fgets(obj[i].name,21,stdin);
 cout<<"Enter the College Name:\n\t "; 
 fflush(stdin); 
 fgets(obj[i].college,51,stdin);
 cout<<"Enter the Branch:\n\t"; 
 fflush(stdin); 
 fgets(obj[i].branch,21,stdin);
 cout<<"Enter the Rollno:\n\t"; 
 cin>>obj[i].rollno;
 cout<<"Enter the Address:\n\t"; 
 fflush(stdin); 
 fgets(obj[i].address,101,stdin);
}
for(int i=0;i<n;i++){
 cout<<" Details of "<<i+1<<" student\n\t:";
 cout<<"Name :\n\t"; cout<<obj[i].name;
 cout<<"College Name: \n\t"; cout<<obj[i].college;
 cout<<"Branch:\n\t"; cout<<obj[i].branch;
 cout<<"Rollno:\n\t"; cout<<obj[i].rollno;
 cout<<"Address:\n\t"; cout<<obj[i].address;
}
return 0;
}
