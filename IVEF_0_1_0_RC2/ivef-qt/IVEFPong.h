/* 
 *  Pong
 *
 *  Pong is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Foobar is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY ); without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 **********************************************************************************
 *  WARNING: THIS CODE WAS GENERATED DO NOT MODIFY, CHANGE THE XSD INSTEAD
 *  Generated by xsd2code on Fri Oct 31 17:00:35 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#ifndef __PONG_H__
#define __PONG_H__

#include <QtCore>

class Pong : public QObject { 
    Q_OBJECT

public:
    Pong();
    Pong(const Pong&);
    Pong & operator=(const Pong&/*val*/);

    /* TimeStamp:
       Date and time in ISO 8601 UTC format (YYYY-MM-DDThh:mm:ss.sss) of the time this message is sent. */
    void setTimeStamp(QDateTime val);
    QDateTime getTimeStamp() const;

    /* MsgId:
       Corresponds to the original MsgRefId from the Ping.xml message */
    void setMsgId(QString val);
    QString getMsgId() const;

    /* SourceId:
       The identification of the node who created this message */
    void setSourceId(int val);
    int getSourceId() const;
    QString toXML();
    QString toString(QString lead);

private:
    QDateTime m_timeStamp;
    QString m_msgId;
    int m_sourceId;

}; 

#endif

