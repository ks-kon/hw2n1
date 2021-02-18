#include <iostream>
#include <vector>

int main()
{
	std::vector <int> v{ 1,2,3,4,5,6,7,8 };
	std::cout << v.capacity() << std::endl;
	v.push_back(1);
	std::cout << v.capacity() << std::endl;
	std::cout << std::endl;
	/* добавили один элемент емкость увеличилась на 4*/

	std::vector <int> c{ 1,2,3,4,5,6,7,8 };
	c.reserve(9);
	std::cout << c.capacity() << std::endl;
	c.push_back(1);
	std::cout << c.capacity() << std::endl;
	c.push_back(1);
	std::cout << c.capacity() << std::endl;
	std::cout << std::endl;
	/*емкость остается такой какая указана в reserve; 
	после добавления нового элемента и если тогда емкость превышает reserve то она тоже увеличивается на 4*/

	std::vector <int> d;
	d.reserve(d.max_size());
	std::cout << d.capacity() << std::endl;
	d.reserve(d.max_size() + 123);
	std::cout << d.capacity() << std::endl;
	/* не можем сделать емкость массива больше чем max_size*/

	return EXIT_SUCCESS;
}