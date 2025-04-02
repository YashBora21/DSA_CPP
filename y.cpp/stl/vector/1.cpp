#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> a(5,1);
      cout<<"size:"<<v.capacity()<<endl;
      v.push_back(1);
      cout<<"size:"<<v.capacity()<<endl;
      v.push_back(2);
       cout<<"size:"<<v.capacity()<<endl;
       v.push_back(3);
        cout<<"size:"<<v.capacity()<<endl;
//it it is full it create new and get size doubled it is dynamic type
cout<<"size"<<v.size()<<endl;
v[1]=3;
cout<<v[1];
cout<<"element:"<<v.at(2)<<endl;
cout<<"enpty or not:"<<v.empty()<<endl;
cout<<v.front()<<endl;
cout<<v.back()<<endl
;v.pop_back();
for (int i = 0; i <v.size(); i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
v.clear();
cout<<"size after clear:"<<v.size()<<endl;
for (int i = 0; i <a.size(); i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
vector<int> last(a);
for (int i = 0; i <last.size(); i++)
{
    cout<<last[i]<<" ";
}

}