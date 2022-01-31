#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include "mainwindow.h"
#include "dataoperations.h"
#include "myfilereading.h"

//class CannotOpenFileException;

class ClearDatabase : Storage
{
public:
    ClearDatabase()
    {
        std::string FileToOpen(DATABASE_LOCATION);
        std::ofstream OutFile(FileToOpen);
        for(int i = 0; i < this->NumberOfAllPositions; i++)
        {
            if (this->items[i].Much < 0) this->items[i].Much = 0;
            OutFile << this->items[i].Item << "\t" << this->items[i].Much << "\t" << this->items[i].Place << "\n";
        }
        OutFile.close();
    }
};

std::string Storage::searchObject(std::string ImSearchingFor)
{
    int FoundSth = 0;
    std::string finalMessage;
    for (int i = 0; i < this->NumberOfAllPositions; i++) {
        if (ImSearchingFor == this->items[i].Item) {
            finalMessage += ("Obiect: " + this->items[i].Item + "\tQuantity: " + std::to_string(this->items[i].Much) + "\tLocation: " + this->items[i].Place + "\n");
            FoundSth++;
        }
        else { i++; }
    }
    if (FoundSth == 0) { finalMessage += "There is no such object in this database\t"; }
    return finalMessage;
}

std::string Storage::searchLocation(std::string ImSearchingFor)
{
    int FoundSth = 0;
    std::string finalMessage;
    for (int i = 0; i < this->NumberOfAllPositions; i++) {
        if (ImSearchingFor == this->items[i].Place) {
            finalMessage += ("Obiect: " + this->items[i].Item + "\tQuantity: " + std::to_string(this->items[i].Much) + "\tLocation: " + this->items[i].Place + "\n");
            FoundSth++;
        }
        else { i++; }
    }
    if (FoundSth == 0) { finalMessage += "There is no such location in this Database\t";}
    return finalMessage;
}

std::string Storage::showObject()
{
    std::string finalMessage;
    for (int i = 0; i < this->NumberOfAllPositions; i++)
    {
        if (this->items[i].Much > 0) {
            finalMessage += ("Obiekt: " + this->items[i].Item + "\tW ilosci: " + std::to_string(this->items[i].Much) + "\tZnajduje sie w: " + this->items[i].Place + "\n");
        }
    }
    return finalMessage;
}

std::string Storage::showRawObject()
{
    std::string finalMessage;
    for (int i = 0; i < this->NumberOfAllPositions; i++)
    {
        finalMessage += (this->items[i].Item + "\t" + std::to_string(this->items[i].Much) + "\t" + this->items[i].Place + "\n");
    }
    return finalMessage;
}

std::string Storage::showLocation()
{
    std::string finalMessage = "";
    for(int i = 0; i < this->NumberOfAllPositions; i++)
    {
        int FoundSth = 0;
        for(int x = 0; x < i; x++)
        {
            if (this->items[i].Place == this->items[x].Place) { FoundSth++; }
        }
        if (FoundSth == 0) { finalMessage += this->items[i].Place + "\n"; }
    }
    if (finalMessage == "") {finalMessage += "There are no location in your databases\n"; }
    return finalMessage;
}

void Storage::addObject(std::string ObjectSwitch, std::string LocationSwitch, int QuantitySwitch)
{
    for (int i = 0; i <= this->NumberOfAllPositions; i++)
    {
        if (this->items[i].Item == ObjectSwitch) {
            if (this->items[i].Place == LocationSwitch) {
                this->items[i].Much = this->items[i].Much + QuantitySwitch;
            }
        }
    }
}

void Storage::substractObject(std::string ObjectSwitch, std::string LocationSwitch, int QuantitySwitch)
{
    for(int i = 0; i <= NumberOfAllPositions; i++)
    {
        if (items[i].Item == ObjectSwitch)
        {
            if (items[i].Place == LocationSwitch)
            {
                items[i].Much = items[i].Much - QuantitySwitch;
            }
        }
    }
}

void Storage::createObject(std::string ObjectSwitch, std::string LocationSwitch, int QuantitySwitch)
{
    items[NumberOfAllPositions].Item = ObjectSwitch;
    items[NumberOfAllPositions].Much = QuantitySwitch;
    items[NumberOfAllPositions].Place = LocationSwitch;
    NumberOfAllPositions ++;
}

void Storage::saveStorage()
{
    std::string FileToOpen(DATABASE_LOCATION);
    std::ofstream OutFile(FileToOpen);
    for(int i = 0; i < NumberOfAllPositions; i++)
    {
        if (items[i].Much < 0) items[i].Much = 0;
        OutFile << items[i].Item << "\t" << items[i].Much << "\t" << items[i].Place << "\n";
    }
    OutFile.close();
}

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    FileReading f = FileReading();
    s = f.getStorage();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString TextCopied = ui->textEdit->toPlainText();
    std::string TextCopied_Converted = TextCopied.toUtf8().constData();
    QString str = QString::fromUtf8(s.searchObject(TextCopied_Converted).c_str());
    ui->textEdit_4->setText(str);
}

void MainWindow::on_pushButton_2_clicked()
{
    QString TextCopied = ui->textEdit_3->toPlainText();
    std::string TextCopied_Converted = TextCopied.toUtf8().constData();
    QString str = QString::fromUtf8(s.searchLocation(TextCopied_Converted).c_str());
    ui->textEdit_4->setText(str);
}

void MainWindow::on_pushButton_3_clicked()
{
    QString str = QString::fromUtf8(s.showObject().c_str());
    ui->textEdit_4->setText(str);
}

void MainWindow::on_pushButton_4_clicked()
{
    QString str = QString::fromUtf8(s.showLocation().c_str());
    ui->textEdit_4->setText(str);
}

void MainWindow::on_pushButton_5_clicked()
{
    QString objectCopied = ui->textEdit->toPlainText();
    std::string objectCopied_Converted = objectCopied.toUtf8().constData();
    QString locationCopied = ui->textEdit_3->toPlainText();
    std::string locationCopied_Converted = locationCopied.toUtf8().constData();
    QString quantityCopied = ui->textEdit_2->toPlainText();
    std::string quantityCopied_Converted = quantityCopied.toUtf8().constData();
    s.addObject(objectCopied_Converted, locationCopied_Converted, atoi(quantityCopied_Converted.c_str()));
}

void MainWindow::on_pushButton_6_clicked()
{
    QString objectCopied = ui->textEdit->toPlainText();
    std::string objectCopied_Converted = objectCopied.toUtf8().constData();
    QString locationCopied = ui->textEdit_3->toPlainText();
    std::string locationCopied_Converted = locationCopied.toUtf8().constData();
    QString quantityCopied = ui->textEdit_2->toPlainText();
    std::string quantityCopied_Converted = quantityCopied.toUtf8().constData();
    s.substractObject(objectCopied_Converted, locationCopied_Converted, atoi(quantityCopied_Converted.c_str()));
}

void MainWindow::on_pushButton_7_clicked()
{
    QString objectCopied = ui->textEdit->toPlainText();
    std::string objectCopied_Converted = objectCopied.toUtf8().constData();
    QString locationCopied = ui->textEdit_3->toPlainText();
    std::string locationCopied_Converted = locationCopied.toUtf8().constData();
    QString quantityCopied = ui->textEdit_2->toPlainText();
    std::string quantityCopied_Converted = quantityCopied.toUtf8().constData();
    s.createObject(objectCopied_Converted, locationCopied_Converted, atoi(quantityCopied_Converted.c_str()));
}

void MainWindow::on_pushButton_8_clicked()
{
    QString str = QString::fromUtf8(s.showRawObject().c_str());
    ui->textEdit_4->setText(str);
    //FileSaving Fs = FileSaving();
    s.saveStorage();
}

void MainWindow::on_pushButton_9_clicked()
{
    ClearDatabase Cl = ClearDatabase();
}
