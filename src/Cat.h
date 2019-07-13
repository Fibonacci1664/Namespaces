/*
 * Cat.h
 *
 *  Created on: 13 Jul 2019
 *      Author: Dave
 */

#ifndef CAT_H_
#define CAT_H_

#include<iostream>
using namespace std;

/*
 * As a general rule of thumb, 'using namespace' should not be declared in the .h file as this defeats
 * the purpose of having namespaces which are contained in the .h file anyway.
 *
 * The exception would be the std namespace for use of things like inline functions, cout print
 * statements and global variables.
 */

//Start cats namespace
namespace cats
{

const string CATNAME = "Freddie";

class Cat
{
public:
	Cat();
	virtual ~Cat();

	void speak();
};
}
//End cats namespace

#endif /* CAT_H_ */
