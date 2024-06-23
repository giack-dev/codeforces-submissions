CC = g++
CFLAGS = -Wall -O2
LDFLAGS =

SRC = src/wordCapitalization.cxx
TARGET = bin/wordCapitalization

run:
	./$(TARGET)

build:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
