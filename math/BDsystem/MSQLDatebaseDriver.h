/*
 * MSQLDatebaseDriver.h
 *
 *  Created on: 02 ����� 2014 �.
 *      Author: ������
 */

#ifndef MSQLDATEBASEDRIVER_H_
#define MSQLDATEBASEDRIVER_H_

#include "AbstractDatebaseDriver.h"

namespace BDdriver {

class MSQLDatebaseDriver: public AbstractDatebaseDriver {
public:
	MSQLDatebaseDriver();
	virtual ~MSQLDatebaseDriver();
};

} /* namespace BDdriver */

#endif /* MSQLDATEBASEDRIVER_H_ */
