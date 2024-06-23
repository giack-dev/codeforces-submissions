CC = g++
CFLAGS = -Wall -O2
LDFLAGS =

SRC = src/divMod.cxx
TARGET = bin/divMod

run:
	./$(TARGET)

build:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
