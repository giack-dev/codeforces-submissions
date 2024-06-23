CC = g++
CFLAGS = -Wall -O2
LDFLAGS =

SRC = src/dubstep.cxx
TARGET = bin/dubstep

run:
	./$(TARGET)

build:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
