CC = g++
CFLAGS = -Wall -O2
LDFLAGS =

SRC = src/newYearNumber.cxx
TARGET = bin/newYearNumber

run:
	./$(TARGET)

build:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
