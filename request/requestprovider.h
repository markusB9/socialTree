#ifndef REQUESTPROVIDER_H
#define REQUESTPROVIDER_H

#include <QObject>
#include "requestmanager.h"
#include "request.h"

class RequestProvider : public QObject
{
    Q_OBJECT
public:
    explicit RequestProvider(QObject *parent = 0);
    RequestProvider(RequestManager* _reqManager);

private:
    ull time;
    RequestManager* reqManager;
signals:

public slots:
    void onTimer();
};

#endif // REQUESTPROVIDER_H
