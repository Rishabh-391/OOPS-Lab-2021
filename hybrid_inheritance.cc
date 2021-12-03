// Hybrid inheritance
// 3-12-2021
#include<iostream>
using namespace std;
class student{
  protected:
  int rollno;
  public:
  student(){
      rollno=10;
  }
  void getRollno(){
      cout<<"Enter Your RollNo:";
      cin>>rollno;
  }
  void putRollno(){
      cout<<"RollNo: "<<rollno;
  }
};
class test:public student{
  protected:
  int m1,m2;
  public:
  test(){
      m1=m2=10;
  }
  void getMarks(){
      cout<<"Enter Your Marks:";
      cin>>m1>>m2;
  }
  void putMarks(){
      cout<<"Marks: "<<m1<<" "<<m2;
  }
};
class sports:public student{
  protected:
  int sp;
  public:
  sports(){
      sp=10;
  }
  void getsport(){
      cout<<"Enter Your favourite Sport:";
      cin>>sp;
  }
  void putSport(){
      cout<<"Sport: "<<sp;
  }
};
class result:public test,public sports{
  protected:
  int total;
  public:
  void display(){
      total=sports::rollno+m2+m1+sp;
      cout<<"Total: "<<total<<endl;
  }
};

int main(){
    result obj;
    obj.display();
    return 0;
}
