#include<iostream>
using namespace std;
class complex{
    int re,img;
public:
    complex(int r=0,int i=0){ // paramaterized constructor with default values
        img=i;re=r;
    }
    void operator +(complex &obj){ // + binary operator overloading 
        complex ans;
        ans.re=re+obj.re;
        ans.img=img+obj.img;
        cout<<ans.re<<" + i"<<ans.img<<endl;
    }
    void operator ++(int){    // int should be passed as argument to perform postfix
      img++;re++;
    }
    friend void operator -(complex &obj1,complex &obj2); // operator overloading using friend function
};
void operator -(complex &obj1,complex &obj2){
        complex ans;
        ans.re=obj1.re+obj2.re;
        ans.img=obj1.img+obj2.img;
        cout<<ans.re<<" + i"<<ans.img<<endl;
}

int main(){
    complex c1(1,2);
    complex c2(1,2);
    c1+c2;   // both are similar //c1.operator+(c2);
    c1++;
    c1+c2;
    c1-c2;
    return 0;
}
