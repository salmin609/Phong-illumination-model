a. How to use parts of your user interface that is NOT specified in the assignment description. 

You can press SPACE to rotate camera with mouse, WASD to move camera position.
Also, you can change position by click & drag objects in screen.

b. Any assumption that you make on how to use the application that, if violated, might cause the application to fail.

None. But when I performed in my friend's low-spec laptop, the shader linking failed.

c. Which part of the assignment has been completed?

Multiple Lights with types & Texture.

I also implement GPU & CPU calculation to UV.
On CPU : Based on example code, implemented on Mesh.cpp
On GPU : Same implementation way with CPU implemented on vertex shader. 
	 Calculate uv based on the vertex position for each vertex.

d. Which part of the assignment has NOT been completed (not done, not working, etc.) and explanation on why those parts are not completed?

None.

e. Where the relevant source codes (both C++ and shaders) for the assignment are located.
Specify the file path (folder name), file name, function name (or line number). 

I put all source codes in Source Folder, all shader codes are in Shader folder, all obj file is in Objs folder. Out source lib files are in third_party folder.

f. Which machine did you test your application on.
ii. If remote – specify OS, GPU, and OpenGL Driver version. Tip: You can use the
OpenGL Extensions Viewer to get this information readily. 

OS - Window
GPU - RTX 2060 SUPER
Opengl - 4.3 version
Driver version - 4.6

g. The number of hours you spent on the assignment, on a weekly basis

I put 6~7 days to complete this assignment. Almost 80 + a hours I guess.

h. Any other useful information pertaining to the application 

If you want to look detail code in my project, main, as1.cpp, as1.h files are main files for this assignment.
Also, there are helper classes I made a years ago, some of manager codes are also main files.