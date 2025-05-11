CC = g++
SRC = DS032.cpp MyStack.cpp
OBJ = $(SRC:.c=.o)
EXEC = DS032

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c %.h
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)
