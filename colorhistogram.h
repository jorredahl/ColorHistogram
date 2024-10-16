#ifndef COLORHISTOGRAM_H
#define COLORHISTOGRAM_H

#include "mousablelabel.h"

#include <QtWidgets>

class ColorHistogram : public QWidget
{
    Q_OBJECT;

    QImage image;
    QLabel *colorClicked;
    QLabel *xTitle;
    QLabel *yTitle;
    MousableLabel *chart;
    QComboBox *scale;
    QSlider *slider;
    QLabel *sliderLabel;
    QComboBox *colors;

    QVector<int> counts;
    QVector<QPixmap> slices;
public:
    ColorHistogram(QImage newImage);

    void processImage();
    void changeColor();
    void sliderMoved(int x);

public slots:
    void mouseClicked(QPoint pos);
};

#endif // COLORHISTOGRAM_H
