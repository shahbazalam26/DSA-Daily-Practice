#include<iostream>
using namespace std;

#define PI 3.14 //macros

#define LIMIT 5

#define AREA(l, b) (l * b)

#define DATE 31

#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138

// Multi-line Macro definition
#define ELE 1, \
            2, \
            3

// Function-like Macro definition
#define min(a, b) (((a) < (b)) ? (a) : (b))


#define  PIE  3.1416
#define  AREA2(r)  (PIE*(r)*(r))



int main(){


    //ex-1---->

    int r=5;
    double pi=3.14;

    // int area = 3.14*r*r;
    // int area = pi*r*r;
    // pi = pi + 1; //we can change

    int area = PI*r*r;
    // PI = PI + 1 //cannot chnage
    cout<<"Area is: " <<area<<endl;




    // ex-2--->
    cout<<"The value of limit is: "<<LIMIT<<endl;



    // ex-3--->
    int l1 = 10, l2 = 5, Newarea;
    Newarea = AREA(l1, l2);
    cout<<"Area of rectangle is: "<<Newarea<<endl;



    //ex-4--->
    cout<<"Lockdown will be extended upto "<<DATE<<"-MAY-2020"<<endl;



    //ex-5--->
    cout<<"Geeks for Geeks have "<<INSTAGRAM<<"K followers on Instagram"<<endl;



    //ex-6 --->
    int arr[] = { ELE };
    cout<<"Elements of Array are:"<<endl;
 
    for (int i = 0; i < 3; i++) {
        cout<<arr[i]<<" ";
    }



    //ex-7---->
    int a = 18;
    int b = 76;
    cout<<"Minimum value between "<<a<<" and "<<b<<" is "<<min(a,b)<<endl;


    //ex-8---->
    float s = 7;
    cout<<"Area of Circle with radius "<<s<<" is: "<<AREA2(s)<<endl;

    

    return 0;
}