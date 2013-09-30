/*
 * Utils.cpp
 *
 *  Created on: 11.12.2012
 *      Author: timon
 */

#include "Utils.h"
#include <sstream>

size_t Utils::strlcpy(char* dst, const char* src, size_t siz)
{
	char *d = dst;
	const char *s = src;
	size_t n = siz;

	/* Copy as many bytes as will fit */
	if (n != 0)
	{
		while (--n != 0)
		{
			if ((*d++ = *s++) == '\0')
				break;
		}
	}

	/* Not enough room in dst, add NUL and traverse rest of src */
	if (n == 0)
	{
		if (siz != 0)
			*d = '\0'; /* NUL-terminate dst */
		while (*s++)
			;
	}

	return (s - src - 1); /* count does not include NUL */

}

double Utils::fabs(double value)
{
	if (value >= 0)
		return value;
	return -value;
}

std::vector<std::string> Utils::split(const std::string& s, char delim)
{
	std::stringstream ss(s);
	std::vector<std::string> elems;
	std::string item;
	while (std::getline(ss, item, delim))
	{
		elems.push_back(item);
	}
	return elems;
}

