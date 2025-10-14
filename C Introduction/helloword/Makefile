CC = gcc
CFLAGS = -Wall -Werror -std=c11
LDFLAGS = -lcs50

all: $(helloworld)

$(helloworld): $(TARGET).c
	$(CC) $(CFLAGS) $(helloworld).c -o $(TARGET) $(LDFLAGS)

clean:
	rm -f $(helloworld)

