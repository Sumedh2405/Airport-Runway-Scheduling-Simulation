CC=gcc

all:
	$(CC) src/controller.c -o controller
	$(CC) src/plane_generator.c -o plane_generator
	$(CC) src/weather.c -o weather
	$(CC) src/logger.c -o logger
	$(CC) src/main.c -o main

run:
	./main

clean:
	rm -f controller plane_generator weather logger main airport_log.txt