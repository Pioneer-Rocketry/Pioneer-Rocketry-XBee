#include "Arduino.h"

#define DEFAULT_QUEUE_SIZE 60

class Queue
{

public:

	Queue();

	Queue(int size);

	void add(uint8_t byte);

	bool remove(uint8_t& byte);

	bool isFull();

	bool isEmpty();

private:

	uint8_t * array;

	uint8_t * front;

	uint8_t * back;

	int size;

	int count;


};
