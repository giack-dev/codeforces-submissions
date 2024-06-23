CC = g++
CFLAGS = -Wall -O2
LDFLAGS =

SRC = src/magicNum.cxx
TARGET = bin/magicNum

run:
	./$(TARGET)

build:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
