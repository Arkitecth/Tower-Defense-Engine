tde: 
	g++ -std=c++11 -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL libraylib.a main.cpp -o main

clean: 
	rm main
