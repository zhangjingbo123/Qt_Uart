#include "database.h"


//建立一个数据库连接
bool DataBase::createConnection()
{
    //以后就可以用"sqlite1"与数据库进行连接了
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "sqlite1");
    db.setDatabaseName(".//qtDb.db");
    if( !db.open())
    {
        qDebug() << "无法建立数据库连接";
        return false;
    }
    return true;
}

//创建数据库表
bool DataBase::createTable()
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    QStringList tableNameList   = db.tables();
    foreach (QString name, tableNameList)
    {
        if ( QString("Para") == name)
        {
            qDebug() << QObject::tr("数据库表已存在！\n");
            return true;
        }
    }
    bool success = query.exec("CREATE TABLE Para ("
                              "id INTEGER primary key, "
                              "name VARCHAR(40) , "
                              "num INTEGER)");
    if(success)
    {
        qDebug() << QObject::tr("数据库表创建成功！\n");
        return true;
    }
    else
    {
        qDebug() << QObject::tr("数据库表创建失败！\n");
        return false;
    }
}

//读取数据库的数据
int DataBase::ReadSomeOne(int num)
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    QString Query_sql = QString("select * FROM Para WHERE  id = %1").arg(num);//查询当前的索引为1的数据
    query.exec(Query_sql);
    while(query.next())
    {
        return query.value(2).toInt();
    }
}

//更新数据库
void DataBase::queryone(int num,QString string,int data)
{
    int DataNum = 0,NowDate = 0;
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    QString Query_sql = QString("select * FROM Para WHERE  id = %1").arg(num);//查询当前的索引为1的数据
    query.exec(Query_sql);
    while(query.next())
    {
        DataNum =1;
        NowDate = query.value(2).toInt();
    }
    if(!DataNum)//当前没数据
    {
        qDebug() <<  QString(QObject::tr("无当前数据，生成新数据"));
        QString create_sql = QString("insert into Para(id, name, num) values('%1', '%2', '%3')").arg(num).arg(string).arg(data);
        query.exec(create_sql);
    }
    else//有数据检查是否一致
    {
        if(NowDate != data)
        {
           qDebug()<<"change "<<data<<" "<<num;
           QString Change_sql = QString("update Para set name = '%1', num = '%2'WHERE id = '%3'").arg(string).arg(data).arg(num);
           query.prepare(Change_sql);
           if( !query.exec() )
             qDebug() << query.lastError();
           else
             qDebug( "Updated!" );
        }
    }
}
