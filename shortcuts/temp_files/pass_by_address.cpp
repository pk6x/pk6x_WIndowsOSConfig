#include <iostream>

struct first_struct
{
	int full_length;
	bool status = true;
};

int main()
{

	first_struct fs = {};

	first_struct* p_to_fs;

	p_to_fs = &fs;

	std::cout << "Before: " << fs.full_length << "\n";

	if(p_to_fs)

	{

	p_to_fs->full_length = 100;

	std::cout << "After: " << fs.full_length << "\n"; 
}

	return 0;
}
