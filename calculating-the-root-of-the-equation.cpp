#include <iostream>
#include <math.h>


using namespace std;



int main()
{
    
    
    double a;
    double b;
    double c;
    double delta;
    cout<<"(ax²+bx+c) olmak üzere a, b ve c sıralanacak şekilde sayıları ekrana giriniz    :  " <<endl;
    cout<<"a  sayısını giriniz :";
    cin >> a;
    
    cout<<"b  sayısını giriniz :";
    cin >> b    ;
    
    cout<<"c  sayısını giriniz :";
    cin >> c    ;
    
    
    
    delta = (b*b)-(4*a*c);
    
    
    
    if(delta > 0 )
    {
        double x1 = ((-1 * b) - sqrt(delta)) / (2 * a);
            double x2 = ((-1 * b) + sqrt(delta)) / (2 * a);
            cout<<"x1 in değeri   : "<<x1<< endl<< "x2 nin değeri  : "<<x2<<endl;
        
        
    }
    
    if(delta ==0)
    {
        double x = (-1 * b) / (2 * a);
            cout<<"çakışan iki kök var ------>x1=x2:"<<x<<endl;
    }
    
    if(delta < 0)
        {
        cout<<"denklemin reel kökü yok :"<<endl;
    }
    
    return 0;
}