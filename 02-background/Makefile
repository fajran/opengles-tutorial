CFLAGS=$(shell sdl-config --cflags)
LIBS=$(shell sdl-config --libs) -lGLESv2
SOURCES=02-background.cc
BIN=02-background
OBJS=$(SOURCES:.cc=.o)
CC=g++

all : $(BIN)

clean :
	rm $(OBJS) $(BIN)

$(BIN) : $(OBJS)
	$(CC) -o $@ $+ $(LIBS)

.cc.o :
	$(CC) -c $< $(CFLAGS)

