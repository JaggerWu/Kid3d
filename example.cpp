#include <GLXW/glxw.h>
#include <GLFW/glfw3.h>

struct Ball
{
    int radius;
    std::vector<int> pos;
};

#include <iostream>

int main() {
    int width = 640;
    int height = 480;

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwCreateWindow(640, 480, "Hello World", NULL, NULL );



    return 0;

    
}

    // select opengl version
    // glxwInit();
    // glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    // glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    // glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

    // create a window
    // GLFWwindow *window;
    // if((window = glfwCreateWindow(width, height, "00skeleton", 0, 0)) == 0) {
    //     std::cerr << "failed to open window" << std::endl;
    //     glfwTerminate();
    //     return 1;
    // }
    
    // glfwMakeContextCurrent(window);

    // if(glxwInit()) {
    //     std::cerr << "failed to init GL3W" << std::endl;
    //     glfwDestroyWindow(window);
    //     glfwTerminate();
    //     return 1;
    // }

    // // creation and initialization of stuff goes here
    // // ...

    // while(!glfwWindowShouldClose(window)) {
    //     glfwPollEvents();

    //     // drawing etc goes here
    //     // ...

    //     // check for errors
    //     GLenum error = glGetError();
    //     if(error != GL_NO_ERROR) {
    //         std::cerr << error << std::endl;
    //         break;
    //     }

    //     // finally swap buffers
    //     glfwSwapBuffers(window);
    // }

    // glfwDestroyWindow(window);
    // glfwTerminate();

//    return 0;
//}
