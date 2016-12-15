#include "view.h"

View::View ( Model * model )
{
	this -> model = model;	
}
View::~View ()
{
}
void View::notify ()
{
	printData ();
}
void View::printData () const
{
	std::cout << model -> getData () << std::endl;
}