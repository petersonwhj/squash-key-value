#include "data_block.h"

class SimpleDataBlock : public DataBlock {
public:
	SimpleDataBlock();

	SimpleDataBlock(const char* data, int size);

	~SimpleDataBlock();

	virtual void setData(const char* data, int size);

	virtual int getData(char *dest);

	virtual int getSize();

private:
	char * m_data;
	int m_size;
};
