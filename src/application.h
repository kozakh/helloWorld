#ifndef __APPLICATION_H__
#define __APPLICATION_H__

#include "model.h"
#include "view.h"
#include <cstring>

class Application
{
public:
			 Application ( int argc, char * argv [] );
	virtual ~Application ();
	int 	 run ();

private:
	Model *  m;
	View *   v;
	int      argc;
	char **  argv;
};

#endif /* __APPLICATION_H__ */