CC = g++
SRC = DS041.cpp MyLinkedStack.cpp
OBJ = $(SRC:.c=.o)
EXEC = DS041

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c %.h
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)
