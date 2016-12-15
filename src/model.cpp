#include "model.h"

Model::Model ()
{
	observerCnt = 0;
	observerSize = 10;
	observers = new Observer* [observerSize];
	dataLen = 0;
	data = NULL;
}
Model::~Model ()
{
	delete[] observers;
	if ( data )
		delete[] data;
}
void Model::setData ( char * data, size_t dataLen )
{
	this -> dataLen = dataLen;
	if ( this -> data )
	{
		delete[] data;
		data = NULL;
	}
	this -> data = new char [dataLen];
	for ( size_t i = 0; i < dataLen; i++ )
		this -> data [i] = data [i];
	notifyObservers ();
}
char * Model::getData () const
{
	return data;
}
void Model::notifyObservers () const
{
	for ( size_t i = 0; i < observerCnt; i++ )
		observers[i] -> notify ();
}
void Model::registerObserver ( Observer * o )
{
	observers [observerCnt++] = o;
}