/*
 * TaggedMessage.h
 *
 *  Created on: 27.01.2014
 *      Author: timon
 */

#ifndef TAGGEDMESSAGE_H_
#define TAGGEDMESSAGE_H_

namespace TagsProcessor
{

class TaggedMessage
{
public:
	TaggedMessage();
	virtual ~TaggedMessage();
	void setTag(const char* body, const uint length);
	uint getTag(char *body, const uint maxLength);
	void setMsg(const char* body, const uint length);
	uint getMsg(char *body, const uint maxLength);

private:
	char *m_tag;
	char *m_msg;
	uint m_msgLen;
};

} /* namespace TagsProcessor */
#endif /* TAGGEDMESSAGE_H_ */
