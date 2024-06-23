CC = g++
CFLAGS = -Wall -O2
LDFLAGS =

SRC = src/football.cxx
TARGET = bin/football

run:
	./$(TARGET)

build:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
