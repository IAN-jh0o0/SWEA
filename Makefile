NAME = 2072
CC = g++
CXXFLAGS = -g -Wall $(INCLUDES)
$(NAME):
$(NAME).o: 
.PHONY: clean
clean:
	rm *.o $(NAME)
