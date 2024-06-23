CC = g++
CFLAGS = -Wall -O2
LDFLAGS =

SRC = src/boyOrGirl.cxx
TARGET = bin/boyOrGirl

run:
	./$(TARGET)

build:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
