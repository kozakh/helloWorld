#ifndef __OBSERVABLE_H__
#define __OBSERVABLE_H__
#include "observer.h"

class Observable
{
public:
	virtual void	 notifyObservers () const = 0;
	virtual void	 registerObserver ( Observer * o ) = 0;
};

#endif /* __OBSERVABLE_H__ */