# cpp04
---------------------------------------
This module is  all about polymorphism.
---------------------------------------

According to the subjest, he Classes must be designed in the Orthodox Canonical Form, except when explicitely stated otherwise.
	- This means we need to implement Constructor, Destructor, Copy constructor and Copy 	 assignment operator for every class.

----------------
ex00
----------------
- We have a base class called Animal, which has one protected
attribute:
	• std::string type;

- Type of Animal class can be left empty or set to a desired value.
-Animal also has a member function:
	• makeSound()
...but animals don't make common universal sounds (but for example Dogs and Cats do).


- We also have to classes which inherit from Animal:
	• Dog class
	• Cat class

- These two derived classes must set their type field depending on their name.
- Every animal must be able to use the member function makeSound() which prints an appropriate sound (cats don’t bark).

Cat and Dog classes certain functions must override Animal classes'.
If an animal was created as class Cat, calling makeSound for that animal would output cat sounds. 


To make sure we can control and unerstand the concept of virtuality and overriding, we had to demonstrate it's absence. This happens with two classes:
	• WrongAnimal (base class)
	• WrongCat class
If a WrongAnimal was created as WrongCat, calling makeSound for that animal wouldn't output WrongCats sounds, as WrongCat doesn't override WrongAnimal.
