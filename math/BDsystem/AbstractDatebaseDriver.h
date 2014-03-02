/*
 * AbstractDatebaseDriver.h
 *
 *  Created on: 02 марта 2014 г.
 *      Author: Вилсер
 */

#ifndef ABSTRACTDATEBASEDRIVER_H_
#define ABSTRACTDATEBASEDRIVER_H_

namespace BDdriver {

class AbstractDatebaseDriver {
public:
	AbstractDatebaseDriver();
	virtual ~AbstractDatebaseDriver();
	void SaveMessage (char* A_name, char* A_data, int A_lenght);
	void SaveErrorMessage (char* A_error);

private:
	bool performSQL (char* A_query);
};

} /* namespace BDdriver */

#endif /* ABSTRACTDATEBASEDRIVER_H_ */
