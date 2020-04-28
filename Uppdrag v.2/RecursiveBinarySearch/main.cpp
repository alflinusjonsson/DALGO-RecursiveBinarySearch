
#include "studentbinsearch1.h"
#include "studentbinsearch2.h"
#include "ragnarstest.h"




int  main()
{

    studentsTest1();
    bool ok = ragnarsTest1();


    bool didImplementPointerToFirstGreaterorequalThanX = true;
    if (didImplementPointerToFirstGreaterorequalThanX){
        studentsTest2();
        ok = ragnarsFloatTest();
    }
    else printf("\n\nDen frivilliga uppgiften ar ej implementerad!\n\n");




}

void studentsTest1();
