all: compile link clean

mainFiles = main.c
mainOutputs = main.o

dataTypesFiles = dataTypes/dataTypes.c
dataTypesOutputs = dataTypes.o

allFiles = $(mainFiles) $(dataTypesFiles)
allOutputs = $(mainOutputs) $(dataTypesOutputs)

compile:
	gcc -c $(allFiles)

link:
	gcc -o main $(allOutputs)

clean:
	rm -r *.o
