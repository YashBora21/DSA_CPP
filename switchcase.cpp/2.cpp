#include<iostream>
using namespace std;
int main()
{
    int n;
    int rupees;
    cin>>n;
    cin>>rupees;
    int count100=0, count50=0, count20=0, count1=0;

    if (rupees >=100){
        n=100;
    }
    else if (rupees >=50){
        n=50;
    }
    else if (rupees >=20) {
        n=20;

    }
     else if (rupees >=1) {
        n=1;

    }
    switch( n ){
        case 100: 
        coun100t=rupees/100;
        rupees=rupees%100;
        case 50 :
         count50=rupees/50;
        rupees=rupees%50;
        case 20:
         count20=rupees/100;
        rupees=rupees%100;
        case 1:
         count1=rupees/1;
        rupees=rupees%1;


        

        }
       
        cout<<"no. of hundreds notes;"<<count100<<endl;
         cout<<"no. offifty notes;"<<count50<<endl;
         cout<<"no. of twenty  notes;"<<count20>>endl;
         cout<<"no. of one notes;"<<count1<<endl;
         

         



        
    }

}