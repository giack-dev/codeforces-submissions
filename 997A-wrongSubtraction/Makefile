CC = g++
CFLAGS = -Wall -O2
LDFLAGS =

SRC = src/wrongSub.cxx
TARGET = bin/wrongSub

run:
	./$(TARGET)

build:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
