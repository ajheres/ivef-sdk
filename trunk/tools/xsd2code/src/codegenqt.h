/*
 *  codegenqt.h
 *
 *  xsd2code is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Foobar is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  Created by Lukassen on 11/06/08.
 *  Copyright 2008
 *
 */

#ifndef __CODEGENQT_H__
#define __CODEGENQT_H__

#include <iostream>
#include <QtCore>

#include "codegen.h"

class CodeGenQT : public QObject, public CodeGen {
    Q_OBJECT

public:
	CodeGenQT();
	void setObjects(QVector<XSDObject*>objects);
	void setOutputDir(QString outDir);
        void setPrefix(QString prefix) { m_prefix = prefix; };
	void go();

protected:
	bool knownType(QString type);
	QString localType(QString type);
        QString fileBaseName(QString name);	

private:
        QString m_prefix;
	QString m_outDir;
	QVector<XSDObject*>m_objects;
};

#endif
