/*
 * Animals.h
 *
 *  Created on: 13 Jul 2019
 *      Author: Dave
 */

#ifndef ANIMALS_H_
#define ANIMALS_H_
#include<iostream>

using namespace std;


//Start namespace ddg
namespace ddg
{

const string CATNAME = "Bob";

class Cat
{
public:
	Cat();
	virtual ~Cat();

	void speak();
};
}
//End namespace ddg

#endif /* ANIMALS_H_ */
