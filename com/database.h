#ifndef DATABASE_H

#include <QSqlDatabase>
#include <QTime>
#include <QtDebug>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QSqlError>

#define checkbit 2   
#define datasum  4  
#define Change16 6  
class DataBase
{
    public:
        bool createTable();       
        void queryone(int ,QString ,int );
        bool deleteById(int id);
        bool createConnection();
        int ReadSomeOne(int num);
};
#endif 
