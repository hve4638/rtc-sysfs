CC=gcc
CFLAGS=-g -Wall
OBJS=main.o rtc.o
TARGET=rtc

all: $(TARGET)
$(TARGET): $(OBJS)

main.o: main.c rtc.h
rtc.o: rtc.c rtc.h

clean:
	rm -rf *.o
	rm rtc