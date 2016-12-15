CC=g++
CFLAGS=-Wall -pedantic -O3
DEPS = application.h model.h view.h observer.h observable.h
OBJ = application.o model.o view.o main.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hello: $(OBJ)
	g++ -o $@ $^ $(CFLAGS)

clean:
	rm *.o hello

run: hello
	./hello