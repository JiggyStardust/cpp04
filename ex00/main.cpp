/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:22:26 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/17 12:49:41 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "\n-------------------------------" << std::endl;
	std::cout << "CREATING ANIMALS\n" << std::endl;
	std::cout << "const Animal* meta = new Animal();" << std::endl;
	const Animal* meta = new Animal();
	std::cout << "\n";
	std::cout << "const Animal* j = new Dog();" << std::endl;
	const Animal* j = new Dog();
	std::cout << "\n";
	std::cout << "const Animal* i = new Cat();" << std::endl;
	const Animal* i = new Cat();
	std::cout << "\n";

	std::cout << "\n-------------------------------" << std::endl;
	std::cout << "OUTPUTTING ANIMAL SOUNDS\n" << std::endl;

	std::cout << "std::cout << j->getType() << ': ' " << std::endl;
	std::cout << "j->makeSound();" << std::endl;
	std::cout << j->getType() << ": ";
	j->makeSound();
	std::cout << "\n";

	std::cout << "\nstd::cout << i->getType() << ': ' " << std::endl;
	std::cout << "i->makeSound();" << std::endl;
	std::cout << i->getType() << ": ";
	i->makeSound();
	std::cout << "\n";

	std::cout << "std::cout << meta->getType() << ': ' " << std::endl;
	std::cout << "meta->makeSound();" << std::endl;
	std::cout << meta->getType() << ": ";
	meta->makeSound();
	std::cout << "\n";

	std::cout << "\n-------------------------------" << std::endl;
	std::cout << "ANIMAL POINTERS\n" << std::endl;
	std::cout << "1: Convert Animal pointer back to Cat pointer:\n";
	std::cout << "Animal *kitty = (Cat*) i;\n";
	std::cout << "std::cout << kitty->getType() << std::endl;\n" << std::endl;
	// Convert Animal pointer back to Cat pointer
	Animal *kitty = (Cat*) i;
	std::cout << kitty->getType() << std::endl;

	std::cout << "\n2: Convert Animal pointer back to Dog pointer:\n";
	std::cout << "Animal *doggy = (Dog*) i;\n";
	std::cout << "std::cout << doggy->getType() << std::endl;\n" << std::endl;
// Convert Animal pointer back to Dog pointer
	Animal *doggy = (Dog*) j;
	std::cout << doggy->getType() << std::endl;

	std::cout << "\n-------------------------------" << std::endl;
	std::cout << "COPY CONS AND ASS OP\n" << std::endl;
	
	std::cout << "Dog john;" << std::endl;
	Dog john;

	std::cout << "\nDog bob;" << std::endl;
	Dog bob;

	std::cout << "john = bob; // assignement operator" << std::endl;
	john = bob; // assignement operator

	std::cout << "\nCat mailis;" << std::endl;
	Cat mailis;
	std::cout << "\nCat minttu(mailis);; // copy constructor" << std::endl;
	Cat minttu(mailis); // copy constructor
	std::cout << "\nstd::cout << minttu.getType() << " " << std::endl;" << std::endl;
	std::cout << minttu.getType() << " " << std::endl;

	std::cout << "\n-------------------------------" << std::endl;
	std::cout << "DELETING ANIMALS\n\ndelete meta;\ndelete j;\ndelete i;\n" << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << "\nmain ending soon, will the destructors be called..?" << std::endl;
	
	return 0;
}