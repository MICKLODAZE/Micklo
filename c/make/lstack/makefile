LDFLAGS+=-ldynamiclist -L/home/mcl/Micklo/c/ds/llist

lstack:main.o lstack.o
	gcc -o $@ $^ $(LDFLAGS)

clean:
	rm *.o lstack
