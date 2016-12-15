#ifndef __MODEL_H__
#define __MODEL_H__

#include "observable.h"
#include "observer.h"
#include <cstddef>

class Model : public Observable
{
public:
		    		 Model ();
	virtual 		~Model ();
	void    		 setData ( char * data, size_t dataLen );
	char *  		 getData () const;
	virtual void 	 notifyObservers () const;
	virtual void 	 registerObserver ( Observer * o );

private:
	Observer **  observers;
	size_t 		 observerCnt;
	size_t		 observerSize;
	char *		 data;
	size_t 		 dataLen;
};

#endif /* __MODEL_H__ */