CC = g++
CFLAGS = -Wall -O2
LDFLAGS =

SRC = src/evenOdds.cxx
TARGET = bin/evenOdds

run:
	./$(TARGET)

build:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
