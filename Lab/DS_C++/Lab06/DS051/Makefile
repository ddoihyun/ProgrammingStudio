CC = g++
SRC = DS051.cpp MyCircularQueue.cpp
OBJ = $(SRC:.c=.o)
EXEC = DS051

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c %.h
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)
