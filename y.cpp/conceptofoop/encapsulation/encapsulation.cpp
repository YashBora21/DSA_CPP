#include<iostream>
using namespace std;
class students{
    private:
    string name="yash";
    int rollno;
    int height;
    public:
    string getname(){
        return this->name;

    }
    int getrollno(){
        return this->rollno;
    }
    int getheight(){
        return this->height;
    }

};
int main(){
    students obj;
    cout<<"student name:"<<obj.getname()<<endl;

}