#include<iostream>

using namespace std;

class abc{
    public:
    int a;
    int b;
    int c;
};

class ab : public abc{
	
    public:
    void inputData(){
        cout<<"Enter value of a:";
        cin>>this->a;
        cout<<"Enter value of b:";
        cin>>this->b;
        cout<<"Enter value of c:";
        cin>>this->c;
    }
    void setData(){
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void getData(){
        int d = a+b+c;
        int e = d*d*d;
        int f = (a*a*a)+(b*b*b)+(c*c*c);
        cout<<"Sum of all three number :- "<<d<<endl;
        cout<<"Sum of all three number’s cubes is:- "<<e<<endl;
        cout<<"All three numbers cube's sum is:- "<<f<<endl;
    }
};
int main (){
	
    ab obj;
    obj.inputData();
    obj.setData();
    obj.getData();
    return 0;
}
