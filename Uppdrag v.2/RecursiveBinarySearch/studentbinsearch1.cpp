#include "studentbinsearch1.h"

#include "ragnarstest.h"
#include <assert.h>

#include <iostream>
#include <stdio.h>

#define NOT_FOUND false

using namespace std;

const char* nameOfStudent1(){
    return "Linus Jönsson";
}


/****************************************************************
ANROP:    bool exist = contains(pBegin, pEnd, x);
VERSION:  ...
UPPGIFT:  Returnerar true omm *p==x för något p i
          intervallet [pBegin, pEnd), dvs pBegin <= p < pEnd
          (observera att pEnd skall peka på första elementet efter arrayen)
OBS:      Alla tal mellan pBegin och pEnd måste vara sorterade i
          stigande ordning
*****************************************************************/
bool contains(const int* pBegin, const int* pEnd, int x)
{  
    int size = pEnd - pBegin;

    const int* pMid = pBegin + (size / 2);

    if (size == 1)
        if (x == *pBegin)
            return true;
        else
            return false;

    if (x == *pMid)
        return true;

    else if (x < *pMid)
        return contains(pBegin, pMid, x);

    else
        return contains(pMid, pEnd, x);

} // contains

void studentsTest1(){

   printf("Har borde studentens testresultat synas\n\n");

   int arr[10] = {1,3,8,11,16,19,23,37,41,99,},x;

   cout << "Input Number\n";
   cin >> x;

   if (contains(&arr[0], &arr[10], x))

        cout << "The array contains the number";

    else

        cout << "They array does not contain the number";

}
