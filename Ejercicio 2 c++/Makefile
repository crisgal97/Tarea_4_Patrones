#
# Makefile for the server socket programming
#



###
#COMPILAR = make fabrica
#EJECUTAR = make run_fabrica
##
FILE_SRC= src/Main.cpp src/Antenas.cpp src/Vehiculos.cpp
INCLUDE_FOLDERS=-Iinclude
BIN_EXE=bin/FabricaVehiculos

.PHONY: all
all: FabricaVehiculos

#
# This will run the server
# if the project is not compiled then this will fail
#
run_fabrica:
	./${BIN_EXE}

bin_folder:
	mkdir -p bin

#
# This will create the server binary file
# It is located at the bin folder
#
fabrica: $(bin_folder)
	g++ ${INCLUDE_FOLDERS} -o ${BIN_EXE} ${FILE_SRC}

.PHONY: clean
clean:
	rm -f bin/
