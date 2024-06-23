CC = g++
CFLAGS = -Wall -O2
LDFLAGS =

SRC = src/keyboard.cxx
TARGET = bin/keyboard

run:
	./$(TARGET)

build:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
