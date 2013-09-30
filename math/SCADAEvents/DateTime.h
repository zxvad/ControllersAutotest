/*
 * DateTime.h
 *
 *  Created on: 11.12.2012
 *      Author: timon
 */

#ifndef DATETIME_H_
#define DATETIME_H_

// TODO: implement DateTime class
#include <time.h>

class DateTime
{
public:
	DateTime();
	virtual ~DateTime();
	bool operator ==(const DateTime &other) const;

private:
	time_t m_time;
};

#endif /* DATETIME_H_ */
