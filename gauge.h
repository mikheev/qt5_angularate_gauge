#ifndef GAUGE_H
#define GAUGE_H
#include <QLabel>

class Gauge : public QLabel
{
    Q_OBJECT

//signals:
//    void getData(const QByteArray &data);

public:
    explicit Gauge(QWidget *parent = nullptr);
//    QLabel *label;
//    QPixmap *image;

};

#endif // GAUGE_H
