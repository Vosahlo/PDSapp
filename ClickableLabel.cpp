#include "clickablelabel.h"
#include <QMouseEvent>

ClickableLabel::ClickableLabel(QWidget* parent, Qt::WindowFlags f)
        : QLabel(parent) {

}

ClickableLabel::~ClickableLabel() {}

void ClickableLabel::mousePressEvent(QMouseEvent* event) {
    emit clicked();
}

void ClickableLabel::mouseDoubleClickEvent(QMouseEvent *event) {
    //QWidget::mouseDoubleClickEvent(event);
    if ( event->button() == Qt::LeftButton )
    {
        emit doubleClicked();
    }
}

