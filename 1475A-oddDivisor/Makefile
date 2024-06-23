CC = g++
CFLAGS = -Wall -O2
LDFLAGS =

SRC = src/oddDivisor.cxx
TARGET = bin/oddDivisor

run:
	./$(TARGET)

build:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
