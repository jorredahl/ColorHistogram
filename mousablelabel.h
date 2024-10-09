#ifndef MOUSABLELABEL_H
#define MOUSABLELABEL_H

#include <QLabel>

class MousableLabel : public QLabel
{
    Q_OBJECT
public:
    MousableLabel();

protected:
    void mousePressEvent(QMouseEvent *evt) override;

signals:
    void mouseClicked(QPoint pos);
};

#endif // MOUSABLELABEL_H
