
LDFLAGS+=-lstack -L/home/mcl/Micklo/c/ds/stack
LDFLAGS+=-lqueue -L/home/mcl/Micklo/c/ds/queue

change:change.c
	@gcc -o $@ $^ $(LDFLAGS)

ball:ball.c
	@gcc -o $@ $^ $(LDFLAGS)

clean:
	@rm change ball
