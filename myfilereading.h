#ifndef MYFILEREADING_H
#define MYFILEREADING_H

#include "main.h"
#include "dataoperations.h"
#include <QMessageBox>
#include "exception"


class CannotOpenFileException
{
public:

    CannotOpenFileException(const char* message):
      msg_(message)
      {
      }


    CannotOpenFileException(const std::string& message):
      msg_(message)
      {}

   //virtual ~CannotOpenFileException(){}

   const char* what() const noexcept {
       return msg_.c_str();
    }

protected:

    std::string msg_;
};

class FileReading : Storage
{
public:

    int i = 0;
    Storage s;
    //CannotOpenFileException e;
    std::ifstream OpenedFile;
    FileReading()
    {

            std::string FileToOpen(DATABASE_LOCATION);
            try
            {
                //CannotOpenFileException ex("file is not opened");
                OpenedFile.open(FileToOpen);
                if(!OpenedFile.good()) {throw(CannotOpenFileException("file is not opened"));}
                while (!OpenedFile.eof())
                {
                    OpenedFile >> s.items[i].Item;
                    OpenedFile >> s.items[i].Much;
                    OpenedFile >> s.items[i].Place;
                    i++;
                }
            }
            catch (CannotOpenFileException& ex)
            {
                QMessageBox msgBox;
                msgBox.setText(ex.what());
                msgBox.setText("There is an error in file. Please create file WorkshopDatabase.txt in application directory.");
                msgBox.exec();
            }
        OpenedFile.close();
        s.NumberOfAllPositions = i - 1;
    }
    class::Storage getStorage()
    {
        return this->s;
    }
};

#endif // MYFILEREADING_H
