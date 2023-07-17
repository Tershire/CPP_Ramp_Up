// stack.cpp
// 2023 JUL 15
// Tershire


#include <cmath>

#include "stack.h"


namespace tershire
{
	// Public Member Function =================================================
	// constructor & destructor -----------------------------------------------
	Stack::Stack()
	{
		num_items_ = 0;

		for (short i = 0; i < MAX_NUM_ITEMS; i++)
		{
			items_[i] = 0;
		}
	}

	// ------------------------------------------------------------------------
	bool Stack::is_empty() const
	{
		return num_items_ == 0;
	}

	bool Stack::is_full() const
	{
		return num_items_ == MAX_NUM_ITEMS;
	}

	bool Stack::push(const unsigned_long& item)
	{
		if (num_items_ < MAX_NUM_ITEMS)
		{
			items_[num_items_++] = item;
			return true;
		}
		else
			return false;
	}

	bool Stack::pop(unsigned_long& item)
	{
		if (num_items_ > 0)
		{
			item = items_[--num_items_];
			return true;
		}
		else
			return false;
	}

} // namespace tershire
