/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:30:29 by lpeeters          #+#    #+#             */
/*   Updated: 2024/04/19 02:50:44 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

// Testing
int	main(void)
{
	Character* Jean = new Character("Jean");
	IMateriaSource* spells = new MateriaSource();
	AMateria* ice_spell = new Ice();
	spells->learnMateria(ice_spell);
	AMateria* cure_spell = new Cure();
	spells->learnMateria(cure_spell);
	AMateria* ice;
	ice = spells->createMateria("ice");
	Jean->equip(ice);
	AMateria* fire;
	fire = spells->createMateria("fire");
	Jean->equip(fire);
	AMateria* lightning;
	lightning = spells->createMateria("lightning");
	Jean->equip(lightning);
	Character* target = new Character(*Jean);
	Jean->use(0, *target);
	//Jean->unequip(0);
	//Jean->unequip(1);
	target->unequip(0);
	//target->unequip(1);
	delete spells;
	//delete ice_spell; //already get deleted by spell's destrucctor
	//delete cure_spell; //already get deleted by spell's destrucctor
	delete Jean;
	delete target;
}

//int main()
//{
	//IMateriaSource* src = new MateriaSource();
	//src->learnMateria(new Ice());
	//src->learnMateria(new Cure());
	//ICharacter* me = new Character("me");
	//AMateria* tmp;
	//tmp = src->createMateria("ice");
	//me->equip(tmp);
	//tmp = src->createMateria("cure");
	//me->equip(tmp);
	//ICharacter* bob = new Character("bob");
	//me->use(0, *bob);
	//me->use(1, *bob);
	//delete bob;
	//delete me;
	//delete src;
	//return 0;
//}

//void ft_tests()
//{
	//// Constructors
	//std::cout << std::endl;
	//std::cout << "CONSTRUCTORS:" << std::endl;
	//std::cout << "-----------------------" << std::endl;
	//IMateriaSource* src = new MateriaSource();
	//src->learnMateria(new Ice());
	//src->learnMateria(new Cure());
	//ICharacter* me = new Character("me");
	//std::cout << std::endl;

	//// Create Materia
	//std::cout << "CREATE MATERIA:" << std::endl;
	//std::cout << "-----------------------" << std::endl;
	//AMateria	*tmp;
	//AMateria	*tmp1;
	//AMateria	*tmp2;
	//AMateria	*tmp3;
	//AMateria	*tmp4;

	//tmp = src->createMateria("ice");
	//me->equip(tmp);
	//tmp1 = src->createMateria("cure");
	//me->equip(tmp1);
	//tmp = src->createMateria("fire"); // null
	//me->equip(tmp);
	//std::cout << std::endl;

	//// Use on a new character
	//std::cout << "USE ON A NEW CHARACTER:" << std::endl;
	//std::cout << "-----------------------" << std::endl;
	//ICharacter* bob = new Character("bob");
	//me->use(0, *bob);
	//me->use(1, *bob);
	//std::cout << std::endl;
	//me->use(2, *bob); // Use an empty / non existing slot in inventory
	//me->use(-4, *bob);
	//me->use(18, *bob);
	//std::cout << std::endl;

	//// Deep copy character
	//std::cout << "DEEP COPY CHARACTER:" << std::endl;
	//std::cout << "-----------------------" << std::endl;
	//Character	*charles = new Character("Charles");
	//tmp2 = src->createMateria("cure");
	//charles->equip(tmp2);
	//tmp3 = src->createMateria("ice");
	//charles->equip(tmp3);
	//tmp = src->createMateria("earth");
	//charles->equip(tmp);
	//Character	*charles_copy = new Character(*charles);
	//std::cout << std::endl;

	//// Deep copy vs its source character
	//std::cout << "DEEP COPY VS SOURCE:" << std::endl;
	//std::cout << "-----------------------" << std::endl;
	//charles->unequip(0); // this shows that they have different materia pointers equipped
	//tmp4 = charles_copy->getMateriaFromInventory(1);
	//charles_copy->unequip(1); //this will produce a leak if we don't store the address somewhere else before
	
	//delete tmp4;
	//tmp = src->createMateria("cure");
	//charles_copy->equip(tmp);
	//tmp = src->createMateria("ice");
	//charles_copy->equip(tmp);
	//std::cout << std::endl;

	//charles->use(0, *bob);
	////charles->use(1, *bob);
	//charles->use(2, *bob);
	//charles->use(3, *bob);
	//std::cout << std::endl;
	//charles_copy->use(0, *bob);
	////charles_copy->use(1, *bob);
	//charles_copy->use(2, *bob);
	//charles_copy->use(3, *bob);
	//std::cout << std::endl;

	//// Unequip tests:
	//std::cout << "UNEQUIP:" << std::endl;
	//std::cout << "-----------------------" << std::endl;
	//me->unequip(-1); // unequip an empty / non existing slot in inventory
	//me->unequip(18);
	//me->unequip(3);
	//std::cout << std::endl;
	//me->use(1, *charles);
	//me->unequip(1); // Unequip a valid slot in inventory (cure unequipped)
	//me->use(1, *charles); // try to use it
	//std::cout << std::endl;

	//// Destructors
	//std::cout << "DESTRUCTORS:" << std::endl;
	//std::cout << "-----------------------" << std::endl;
	//delete bob;
	//delete me;
	//delete src;
	//delete charles;
	//delete charles_copy;
	//delete tmp1;
	//delete tmp2;
	//std::cout << std::endl;
	////system("leaks ex03");
//}

//int main()
//{
	//ft_tests();
	//// Leaks check
	//std::cout << "LEAKS:" << std::endl;
	//std::cout << "-----------------------" << std::endl;
	////system("leaks ex03");
	//return (0);
//}
