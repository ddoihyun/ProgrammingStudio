CC = g++
SRC = DS043.cpp MyLinkedStack.cpp
OBJ = $(SRC:.c=.o)
EXEC = DS043

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c %.h
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)
