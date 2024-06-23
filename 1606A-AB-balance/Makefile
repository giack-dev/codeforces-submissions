CC = g++
CFLAGS = -Wall -O2
LDFLAGS =

SRC = src/ab.cxx
TARGET = bin/ab

run:
	./$(TARGET)

build:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
