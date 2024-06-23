CC = g++
CFLAGS = -Wall -O2
LDFLAGS =

SRC = src/nextRound.cxx
TARGET = bin/nextRound

run:
	./$(TARGET)

build:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
