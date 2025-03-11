#include <GL/gl.h>
#include <GLFW/glfw3.h>
#include <leif/leif.h>
int main(){
	glfwInit();
	
	GLFWwindow * window =glfwCreateWindow(800, 600,"Todo" ,NULL,NULL );
	
	glfwMakeContextCurrent(window);
	
	lf_init_glfw(800,600,window);


	while (!glfwWindowShouldClose(window)) {
		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0.1f,0.1f,0.1f,0.1f);
		
		lf_begin();
		lf_text("hello world");
		lf_end();
		
		glfwPollEvents();
		glfwSwapBuffers(window);
		
	}
	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}
