#ifndef __VIEW_H__
#define __VIEW_H__

#include <iostream>
#include "observer.h"
#include "model.h"

class View : public Observer
{
public:
					 View ( Model * model );
	virtual 		~View ();
	virtual void	 notify ();
	void 			 printData () const;

private:
	Model * 		 model;
};

#endif /* __VIEW_H__ */