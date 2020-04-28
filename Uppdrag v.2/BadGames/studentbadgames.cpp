#include "studentbadgames.h"
#include <iostream>
#include <string>

using namespace std;

bool ragnarsTest();

const char* nameOfStudent(){
    return "Linus Jönsson";
}

/**********************************************************
ANROP:   uint elva = oneMore( tio );
UPPGIFT: Returnerar inparametern+1
***********************************************************/
int oneMore(int a){
   return a+1;
}
/**********************************************************
ANROP:   uint nio = oneLess( tio );
UPPGIFT: Returnerar inparametern-1
***********************************************************/
int oneLess(int a){
   return a-1;
}

/**********************************************************
ANROP:   int s = sum(a,b);
UPPGIFT: Returnerar a+b;
***********************************************************/
int sum(int a, int b){
    if(b==0)
        return a;
    return oneMore(sum(a, oneLess(b)) );
}

/**********************************************************
ANROP:   int d = diff(a,b);
UPPGIFT: Returnerar a-b;
***********************************************************/
int diff(int a, int b){
    if(b==0)
        return 0;
    return oneMore(diff(a, oneLess(b)) );

}

/**********************************************************
ANROP:   int prod = product(a,b);
UPPGIFT: Returnerar a*b;
***********************************************************/
int product(int a, int b){
    if(a==0 || b==0)
        return 0;
    return sum(product(oneLess(a),(b)),b);

    // a*b = (a-1)*b+b
}

/**********************************************************
ANROP:   int result = pow(a,b);
UPPGIFT: Returnerar a^b;
***********************************************************/
int pow(int a, int b){
    if (b==0)
        return 1;
    return product(pow(a,oneLess(b)),a);

    // pow(a,b) = pow(a,b-1)*a

}

/**********************************************************
ANROP:   int factorial = fac(a);
UPPGIFT: Returnerar a!
***********************************************************/
int fac(int a){
    if (a==0 || a==1)
        return 1;
    return product(a, fac(oneLess(a)) );

// n! = n x (n-1)!

}

int main()
{
    ragnarsTest();


    int a,b;
    // Obs knappa in mycket små tal, annars kan programmet krascha
    // pga stack overflow

    cout << "Input a:";
    cin >> a;
    cout << "Input b:";
    cin >> b;

    cout << "sum(" << a <<", "<< b << ") = " << sum(a,b) << endl;
    cout << "diff(" << a <<", "<< b << ") = " << diff(a,b) << endl;
    cout << "product(" << a <<", "<< b << ") = " << product(a,b) << endl;
    cout << "pow(" << a <<", "<< b << ") = " << pow(a,b) << endl;
    cout << "fac( " << a <<" ) = " << fac(a) << endl;




}

