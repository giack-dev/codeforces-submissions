CC = g++
CFLAGS = -Wall -O2
LDFLAGS =

SRC = src/watermelon.cxx
TARGET = bin/watermelon

run:
	./$(TARGET)

build:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
