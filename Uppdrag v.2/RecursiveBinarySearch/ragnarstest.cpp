#include "ragnarstest.h"

#include <iostream>

#include "studentbinsearch1.h"
#include "studentbinsearch2.h"

#include <QElapsedTimer>
#include <assert.h>

float  GLOBAL = 0;

using namespace std;



bool verify(const float* pBegin, const float *pEnd, float searched, const float* pResult){


    if (pResult<pBegin || pResult>pEnd){
        cerr << "felaktig pekare utanför området returnerades !\n";
        return false;
    }
    if (pResult == pEnd){
        if (searched <= *(pEnd - 1)){
            cerr << "pEnd returnerades felaktigt !\n";
            return false;
        }
        return true;
    }

    if (pResult == pBegin){
        if (searched > *pBegin){
            cerr << "pBegin returnerades felaktigt !\n";
            return false;
        }
        return true;
    }

    bool ok1 = (*pResult >= searched);
    bool ok2 = (*(pResult - 1) < searched);
    if (!ok1 || !ok2){
        cerr << "felaktig pResult, ok1 = " << ok1 << " ok2 = " << ok2 << endl;

        int ix = pResult - pBegin;
        cerr << "pResult motsvarar index " << ix << endl;
        return false;
    }

    if (*pResult==0)
        GLOBAL += 1;

    return true;

}


bool ragnarsSecondFloatTest(){
    const int M = 10000000;


    float *ptr = new float[M+1];

    float lastValue = -1000;

    int index = 0;
    while (index<M){
        lastValue += 1;
        for (int i=0; i<100000 && index<M ; i+=1)
            ptr[index++] = lastValue;
    }

    QElapsedTimer myTimer;
    myTimer.start();

    bool ok = true;
    for (int i = 0; ok && i < M; i+=10){
        const float *pResult = pointerToFirstGreaterorequalThanX(ptr, ptr+M, ptr[i]);
        verify(ptr, ptr+M, ptr[i], pResult);
        unsigned long timeElapsed = myTimer.elapsed();
        if (timeElapsed > 10000){
            std::cerr << "BUG 4:  din funktionen är för långsam!!\n(förmodligen ej rekursiv på rätt sätt) \7\n";
            ok = false;
        }

    }
    unsigned long timeElapsed = myTimer.elapsed();
    std::cerr << "(secondFloatTest avslutades inom " << timeElapsed << " ms.)\n";

    delete [] ptr;
    return ok;



}


//***********************************************************************
// ANROP:   ragnarsFloatTest()
// VERSION: 2010-01-15
// UPPFIFT: Testar en eller flera rutiner som studenten har skrivit.
//***********************************************************************
bool ragnarsFloatTest(){

    cout << endl << endl << "ragnarsFoatTest" << endl;

    assert( string("Homer Simpson") != nameOfStudent2() );


    const int len = 100000;
    float* ptr = new float[len];
    ptr[0] = -1000;
    for (int i = 1; i < len; ++i)
        ptr[i] = ptr[i - 1] + (rand() % 4) / 4.0f;

    // ptr är nu en sorterad array av längd len med flera dubletter

    QElapsedTimer myTimer;
    myTimer.start();
    bool ok = true;
    int notImplemented = 0;
    const float *pBegin = ptr;
    const float *pEnd = ptr + len;

    for (int i = 0; ok && i < len; ++i){
        const float* pf1 = pointerToFirstGreaterorequalThanX(pBegin, pEnd, ptr[i]);
        const float* pf2 = pointerToFirstGreaterorequalThanX(ptr, ptr + len, ptr[i] + 0.1f);

        if (pf1 == nullptr && pf2 == nullptr){
            notImplemented += 1;
            continue;
        }

        ok = verify(pBegin, pEnd, ptr[i], pf1) && verify(pBegin, pEnd, ptr[i] + 0.1, pf2);

        unsigned long timeElapsed = myTimer.elapsed();

        if (timeElapsed > 1000){
            std::cerr << "BUG 4:  din funktionen är för långsam!!\n(förmodligen ej rekursiv på rätt sätt) \7\n";
            ok = false;
        }
    }
    if (notImplemented > 0)
        ok = false;

    unsigned long eclapsed = myTimer.elapsed();

    if (notImplemented == len && eclapsed < 100){
        delete[] ptr;
        std::cerr << "float search not implemented!!\n";
        return true;
    }

    ok = ok && ragnarsSecondFloatTest();

    if (ok)
        std::cerr << "ragnarsFloatTest lyckades på " << eclapsed << " millisekunder\n";
    else std::cerr << "ragnarsFloatTest MISSLYCKADES!!\7\n";

    delete[]ptr;
    return ok;
}// ragnarsFloatTest



//***********************************************************************
// ANROP:   ragnarsTest1(  );
// VERSION: 2010-01-15
// UPPFIFT: Testar en eller flera rutiner som studenten har skrivit.
//***********************************************************************
bool ragnarsTest1(){


    cout << endl << endl << "ragnarsTest" << endl;

    assert( string("Homer Simpson") != nameOfStudent1() );


    bool debugging = false;



#ifdef QT_DEBUG
    debugging = true;
#endif


    if (debugging)
        cout << "du bor aven kora denna test i release-mode!\n\n";

    const int len = 100000;
    int* ptr = new int[len];
    ptr[0] = -1000;
    for (int i = 1; i < len; ++i)
        ptr[i] = ptr[i - 1] + 4 * (rand() % 10);
    // ptr är nu en sorterad array av längd len

    QElapsedTimer myTimer;
    myTimer.start();

    bool ok = true;
    for (int i = 1; ok && i < len; ++i){
        if (!contains(ptr, ptr + len, ptr[i])){
            std::cerr << "BUG:  talet " << ptr[i] << " finns (pÂ pos " << i << ") men hittades ej! \7\n";
            ok = false;
        }
        else
        if (ptr[i - 1] != ptr[i] && contains(ptr, ptr + len, (ptr[i - 1] + ptr[i]) / 2)){
            std::cerr << "BUG:  talet " << (ptr[i - 1] + ptr[i]) / 2 << " finns ej men hittades felaktigt!\7\n ";
            ok = false;
        }

        unsigned long eclapsed = myTimer.elapsed();

        if (eclapsed > 1000){
            ok = false;

            if (debugging){
                std::cerr << "BUG?? Din funktion är lååångsam. Kompilera i RELEASE-mode så kanske det går snabbare.\n";
            }
            else {
                std::cerr << "BUG:  din funktionen är för långsam!!\n(förmodligen ej rekursiv på rätt sätt) \7\n";
            }
        }
    }
    unsigned long eclapsed = myTimer.elapsed();



    if (ok){
        if (debugging)
            std::cerr << "ragnarsTest kräver att du kompilerar i RELEASE-mode!! \7\n";
        else std::cerr << "ragnarsTest lyckades på " << eclapsed << " millisekunder\n";
    }
    else std::cerr << "ragnarsTest MISSLYCKADES!!\7\n";

    delete[]ptr;

    return ok;
}// ragnarsTest1
