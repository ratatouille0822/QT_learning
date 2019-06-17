#include <QCoreApplication>
#include <QFile>
#include <QDebug>
#include <QString>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QFile file_to_write("D:/in.txt");

    int ret = file_to_write.open(QIODevice::WriteOnly | QIODevice::Text);
    if(!ret)
    {
        qDebug()<< "Failed to open file_to_write";
        return 1;
    }

    file_to_write.write("Deutschland ueber alles ist scheisse!\n");
    file_to_write.write("Deutschland ueber alles ist scheisse!\n");
    file_to_write.write("Deutschland ueber alles ist scheisse!\n");
    file_to_write.write("Deutschland ueber alles ist scheisse!\n");
    file_to_write.write("Deutschland ueber alles ist scheisse!\n");
    file_to_write.close();

    QFile file_to_read("D:/in.txt");
    bool ret_read = file_to_read.open(QIODevice::ReadOnly | QIODevice::Text);
    if(!ret_read)
    {

        qDebug()<< "Failed to open file";
        return 1;
    }

    while(!file_to_read.atEnd())
    {
        cout<<file_to_read.readLine().toStdString();
    }

    return a.exec();
}
