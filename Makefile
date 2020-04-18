CC = gcc
CFLAGS = -W -Wall
TARGET = test
DTARGET = test_debug
OBJECTS = main.c product.o manager.o

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

$(DTARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -DDEBUG -o $@ $^

product.o : product.c product.h
	$(CC) $(CFLAGS) -c -o product.o $<

manager.o : manager.c manager.h
	$(CC) $(CFLAGS) -c -o manager.o $<

clean :
	rm *.o $(TARGET) $(DTARGET)


