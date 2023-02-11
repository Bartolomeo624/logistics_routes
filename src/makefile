CC = g++
CFLAGS = -Wall -g

logistics_routes: logistics_routes.o input_output_parser.o graph.o args_parser.o
	$(CC) $(CFLAGS) -o logistics_routes logistics_routes.o input_output_parser.o graph.o args_parser.o
	mv logistics_routes ..


logistics_routes.o: logistics_routes.cpp input_output_parser.h graph.h args_parser.h strings.h
	$(CC) $(CFLAGS) -c logistics_routes.cpp

input_output_parser.o: input_output_parser.h

graph.o: graph.h node.h

args_parser.o: args_parser.h

clean:
	rm *.o ../logistics_routes





