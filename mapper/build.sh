gcc $(pkg-config --cflags gtk4) -o main.o main.c -I. $(pkg-config --libs gtk4)
