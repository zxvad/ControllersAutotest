/*
 * FacadeBD.h
 *
 *  Created on: 02 марта 2014 г.
 *      Author: Вилсер
 */

#ifndef FACADEBD_H_
#define FACADEBD_H_
#include <map>

namespace BDdriver {

class FacadeBD {
public:
	FacadeBD();
	virtual ~FacadeBD();
	std::map <int, char> tagsCodes();
	void onNewValue (char* A_name, char* A_data, int A_lenght);
	void onNewError (char* A_error);
};

} /* namespace BDdriver */

#endif /* FACADEBD_H_ */
