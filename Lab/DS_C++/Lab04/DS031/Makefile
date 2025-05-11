CC = g++
SRC = DS031.cpp MyStack.cpp
OBJ = $(SRC:.c=.o)
EXEC = DS031

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c %.h
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)
