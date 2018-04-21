PROG = geometrica

#Compilador
CC=g++

RM = rm -f core

CPPFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

#Variaveis para os subdiretorios
INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./build
BIN_DIR = ./bin

OBJ = ./build/Lab02Q01_main.o ./build/Lab02Q01.o
$(PROG) : $(OBJ)
	$(CC) $(CPPFLAGS) -o $(BIN_DIR)/$@ $^
$(OBJ_DIR)/Lab02Q01.o:
	$(CC) -c $(CPPFLAGS) $(SRC_DIR)/Lab02Q01.cpp -o $@
$(OBJ_DIR)/Lab02Q01_main.o:
	$(CC) -c $(CPPFLAGS) $(SRC_DIR)/Lab02Q01_main.cpp -o $@

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*