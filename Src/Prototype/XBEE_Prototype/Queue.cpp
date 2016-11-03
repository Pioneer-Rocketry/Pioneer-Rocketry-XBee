#include "Queue.h"

Queue::Queue()
{
	array = new uint8_t[DEFAULT_QUEUE_SIZE];

	back = front = array; 

	count = 0;

}

Queue::Queue(int s)
{
	size = s;
	
	array = new uint8_t[size];

	back = front = array; 

	count = 0;

}

void Queue::add(uint8_t byte)
{
	if(!isFull())
	{	
		*front = byte;

		int index = front - array;

		if(index >= size - 1)
		{
			front = array;
		}
		else
			front++;
		
		count ++;
	}
}

bool Queue::remove(uint8_t& byte)
{

	if(!isEmpty())
	{
		byte = *back;
		
		int index = back - array;

		if(index >= size - 1)
		{
			back = array;
		}
		else
			back++;

		count --;

		return true;

	}

	return false;

}

bool Queue::isFull()
{

	return back == front && count > 0;

}

bool Queue::isEmpty()
{
	return back == front && count == 0;
}