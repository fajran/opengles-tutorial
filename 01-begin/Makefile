CFLAGS=$(shell sdl-config --cflags)
LIBS=$(shell sdl-config --libs)
SOURCES=01-begin.cc
BIN=01-begin
OBJS=$(SOURCES:.cc=.o)
CC=g++

all : $(BIN)

clean :
	rm $(OBJS) $(BIN)

$(BIN) : $(OBJS)
	$(CC) -o $@ $+ $(LIBS)

.cc.o :
	$(CC) -c $< $(CFLAGS)

