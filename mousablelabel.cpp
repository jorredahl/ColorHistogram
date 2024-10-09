#include "mousablelabel.h"
#include <QtGui/qevent.h>

MousableLabel::MousableLabel() {}

void MousableLabel::mousePressEvent(QMouseEvent *evt) {
    emit mouseClicked(evt->pos());
}
