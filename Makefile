CC=gcc
CFLAGS=-I.

default: task.o tasklist.o main.o
	$(CC) -o taskScheduler task.o tasklist.o main.o
