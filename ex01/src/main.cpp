/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:22:26 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/24 11:30:39 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

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
	std::cout << "1: Convert Animal pointer to Cat pointer:\n";
	std::cout << "Animal *kitty = (Cat*) i;\n";
	std::cout << "std::cout << kitty->getType() << std::endl;\n" << std::endl;

// Convert Animal pointer to Cat pointer
	Animal *kitty = (Cat*) i;
	std::cout << kitty->getType() << std::endl;

	std::cout << "\n2: Convert Animal pointer to Dog pointer with copy assignment operator:\n";
	std::cout << "kitty = (Dog*) i;\n";
	std::cout << "std::cout << kitty->getType() << std::endl;\n" << std::endl;
// Convert Animal pointer to Dog pointer with copy assignment operator
	kitty = (Dog*) j;
	std::cout << kitty->getType() << std::endl;

	std::cout << "\n-------------------------------" << std::endl;
	std::cout << "MORE COPY CONS AND ASS OP\n" << std::endl;
	
	std::cout << "Dog john;" << std::endl;
	Dog john;

	std::cout << "\nDog bob;" << std::endl;
	Dog bob;

	std::cout << "john = bob; // assignement operator" << std::endl;
	john = bob; // assignement operator

	std::cout << "\nCat mailis;" << std::endl;
	Cat mailis;
	std::cout << "\nCat minttu(mailis); // copy constructor" << std::endl;
	Cat minttu(mailis); // copy constructor
	std::cout << "\nstd::cout << minttu.getType() << std::endl;" << std::endl;
	std::cout << minttu.getType() << std::endl;

	//If you try to assign Cats to Dogs and Vice Versa, it doesnt compile.
	//Also can't copy construct a Cat out of an Animal.


	std::cout << "\n-------------------------------" << std::endl;
	std::cout << "WRONGANIMAL AND WRONGCAT\n" << std::endl;

	std::cout << "const WrongAnimal *fraud = new WrongCat();\n";
	const WrongAnimal *fraud = new WrongCat();
	std::cout << "\nWrongCat unrealKitty;\n";
	WrongCat	unrealKitty;

	std::cout << "std::cout << fraud.getType << ': '" << std::endl;
	std::cout << "fraud.makeSound();" << std::endl;
	std::cout << fraud->getType() << ": ";
	fraud->makeSound();

	std::cout << "\nstd::cout << unrealKitty.getType << ': '" << std::endl;
	std::cout << "unrealKitty.makeSound();" << std::endl;
	std::cout << unrealKitty.getType() << ": ";
	unrealKitty.makeSound();


	std::cout << "\n------------------------------------------------" << std::endl;
	std::cout << "CREATING AND FILLING AN ARRAY OF ANIMAL OBJECTS\n" << std::endl;
	std::cout << "Animal **Horde = new Animal*[size]; // size = 10.\n";

	int size = 10;
	Animal **Horde = new Animal*[size];

	std::cout << "\nNow we are filling the Animal Horde with Dogs and Cats." << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << "\n" << i + 1 << ".";
		if (i < size/2)
			Horde[i] = new Dog();
		else
			Horde[i] = new Cat();
	}
	std::cout << "\nNow we are deleting the Hordes members one by one in a loop.\n" << std::endl;
	for (int i = 0;  i < size; i++)
	{
		std::cout << "\n" << i + 1 << ". deleting a " << Horde[i]->getType() << "\n" << std::endl;
		delete Horde[i];
	}
	std::cout << "\nNow we are deleting the **Horde\n";
	delete[] Horde;

	std::cout << "\n---------------------------------" << std::endl;
	std::cout << "DELETING ANIMALS and WRONGANIMALS\n"
				<< "\ndelete meta; // Animal"
				<< "\ndelete j; // Dog"
				<< "\ndelete i; // Cat"
				<< "\ndelete fraud; // WrongCat"
				<< "\n" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete fraud;

	std::cout << "\n\nmain ending soon, will the destructors be called in reverse..?\n" << std::endl;
	
	return 0;
}