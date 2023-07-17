// stack.h
// 2023 JUL 15
// Tershire


#ifndef TERSHIRE_STACK_H
#define TERSHIRE_STACK_H

typedef unsigned long unsigned_long;


namespace tershire
{

class Stack
{
public:
	// constructor & destructor -----------------------------------------------
	Stack();

	// ------------------------------------------------------------------------
	bool is_empty() const;
	bool is_full() const;

	bool push(const unsigned_long& item);
	bool pop(unsigned_long& item);

private:
	// constant ---------------------------------------------------------------
	// symbolic constants in class scope 
	static const short MAX_NUM_ITEMS = 20;

	// field ------------------------------------------------------------------
	unsigned_long items_[MAX_NUM_ITEMS];

	short num_items_ = 0;
};

} // namespace tershire

#endif // TERSHIRE_STACK_H
