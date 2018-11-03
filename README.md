# Kid3d

This is a playgroud for computer graphics. I supply some examples for 3D graphics.

## Required Libraries

- [glfw](http://www.glfw.org/)
- [glxw](http://glew.sourceforge.net/)
- [glm](https://glm.g-truc.net/0.9.9/index.html)
- [glad](https://github.com/Dav1dde/glad)

### Installing Libraries(except `glad`)
```
cd ${lib}
cmake .
```
Then `Makeflie` will be generated. `make install` will make libs installed.

#### Examples
```c++
#include <GLXW/glxw.h>
#include <GLFW/glfw3.h>
```

### Run in terminel
```
gcc -o play example.cpp -lglfw -framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo -framework GLUT -lGLEW -lglfw3 -v
```