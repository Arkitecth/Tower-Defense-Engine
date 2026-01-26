

FILES= $(shell find './' -maxdepth 1 -name '*.cpp')
tde: 

	g++ -std=c++11 -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL libraylib.a ${FILES} -o main -g

clean: 
	rm main
