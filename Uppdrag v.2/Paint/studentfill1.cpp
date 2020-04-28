
#include "studentfill1.h"
#include <QDebug>

#include <algorithm>

void recursiveFull(int r, int k, IDrawingParent *im, QColor colorOld, QColor colorNew){
   // behöver ej implementeras
}


void recursiveFill(int r, int k, IDrawingParent *im, QColor colorOld, QColor colorNew){

    if (!im->isInside(r,k) || im->pixel(r,k)!=colorOld || colorOld==colorNew)
        return;
    im->setPixel(r,k, colorNew);

    // TODO


}
