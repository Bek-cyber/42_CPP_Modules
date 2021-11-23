#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		std::cout << BOLDBLUE << "--------------TEST_1--------------" << RESET << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
//		Animal norm;
		delete j;//should not create a leak
		delete i;
	}
	
	{
		std::cout << std::endl;
		std::cout << BOLDBLUE << "--------------TEST_2--------------" << RESET << std::endl;
		
		Cat barsik;
		Cat mursik(barsik);
		mursik.setIdea("lulu_mursik");
		std::cout << mursik.getIdea(1) << std::endl;
		barsik.setIdea("lulu_barsik");
		std::cout << barsik.getIdea(1) << std::endl;
		barsik.makeSound();
	}
	
	{
		std::cout << std::endl;
		std::cout << BOLDBLUE << "--------------TEST_3--------------" << RESET << std::endl;
		
		Dog barsik;
		Dog mursik;
		{
			mursik = barsik;
		}
		mursik.setIdea("lulu_mursik");
		std::cout << mursik.getIdea(1) << std::endl;
		barsik.setIdea("lulu_barsik");
		std::cout << barsik.getIdea(1) << std::endl;
		barsik.makeSound();
	}
	
	{
		std::cout << std::endl;
		std::cout << BOLDBLUE << "--------------TEST_4--------------" << RESET << std::endl;
		
		Cat *barsik = new Cat();
		barsik->setIdea("whoooo");
		std::cout << barsik->getIdea(0) << std::endl;
		std::cout << barsik->getIdea(1) << std::endl;
		
		delete barsik;//should not create a leak
	}
}