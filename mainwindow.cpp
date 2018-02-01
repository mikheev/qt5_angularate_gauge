#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QImage>
#include <QPixmap>
#include <QtCore/QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->resize(640, 480);
    QPixmap pixmap;
    QLabel *label= new QLabel(this);
    pixmap.load("D:/tmp_proj/angularspeedgauge/velocitymeter_out.png");
    label->show();
    label->resize(640,480);
    label->setPixmap(pixmap.scaled(640, 480, Qt::KeepAspectRatio));

//    QPixmap shipPixels(":/new/prefix1/img.bmp");
//    QPixmap rotatePixmap(shipPixels.size());
//    rotatePixmap.fill(Qt::transparent);

//    QPainter p(&rotatePixmap);
//    p.setRenderHint(QPainter::Antialiasing); // сглаживание
//    p.setRenderHint(QPainter::SmoothPixmapTransform);
//    p.setRenderHint(QPainter::HighQualityAntialiasing);
//    p.translate(rotatePixmap.size().width() / 2, rotatePixmap.size().height() / 2);
//    p.rotate(30); // градус
//    p.translate(-rotatePixmap.size().width() / 2, -rotatePixmap.size().height() / 2);
//    p.drawPixmap(0, 0, shipPixels);
//    p.end();
//    shipPixels = rotatePixmap;

//    ui->label->setPixmap(shipPixels);


}

MainWindow::~MainWindow()
{
    delete ui;
}
