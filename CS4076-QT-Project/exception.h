#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <QString>

class Exception {
private:
    QString error;

public:
    Exception(const QString& msg) : error(msg) {}
    ~Exception() {}

    QString getMessage() const {
        return error;
    }
};

#endif // EXCEPTION_H
