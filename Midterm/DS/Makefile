CC = g++
SRC = main.cpp MyStringStack.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = main
#EXEC = main.exe 

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.cpp %.h
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)