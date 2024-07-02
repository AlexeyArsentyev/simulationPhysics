#ifndef SIMULATION_CLASSES_GLFW_CALLBACK_H_
#define SIMULATION_CLASSES_GLFW_CALLBACK_H_

#include <glad/glad.h>
#include <GLFW/glfw3.h>

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void scroll_callback(GLFWwindow* window, double xoffset, double yoffset);

#endif //SIMULATION_CLASSES_GLFW_CALLBACK_H_