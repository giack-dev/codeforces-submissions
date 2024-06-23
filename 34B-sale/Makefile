CC = g++
CFLAGS = -Wall -O2
LDFLAGS =

SRC = src/sale.cxx
TARGET = bin/sale

run:
	./$(TARGET)

build:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
