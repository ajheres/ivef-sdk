
#include "IVEF1logout.h"

Logout::Logout() {

}

Logout::Logout(const Logout &val) : QObject() {

}

Logout & Logout::operator=(const Logout &val) {

    return *this;
}

QString Logout::toXML() {

    QString xml = "<Logout";
    xml.append(">\n");
    xml.append( "</Logout>\n");
    return xml;
}

QString Logout::toString(QString lead) {

    QString str = lead + "Logout\n";
    return str;
}

