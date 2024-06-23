CC = g++
CFLAGS = -Wall -O2
LDFLAGS =

SRC = src/hq9+.cxx
TARGET = bin/hq9+

run:
	./$(TARGET)

build:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
