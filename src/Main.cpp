/*
 * Main.cpp
 *
 *  Created on: 13 Jul 2019
 *      Author: Dave
 */

#include<iostream>
#include"Cat.h"
#include"Animals.h"

using namespace std;
using namespace ddg;

int main()
{
	Cat cat;

	cat.speak();

	ddg::Cat cat2;
	cat.speak();

	cats::Cat cat3;
	cat3.speak();

	cout << ddg::CATNAME << endl;
	cout << cats::CATNAME << endl;

	cout << CATNAME << endl;


	return 0;
}


