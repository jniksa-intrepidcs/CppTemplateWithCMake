cmake_minimum_required(VERSION 3.2)

#set the project name
project(JoesTutorial CXX)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 17)

#name the compiled object and choose the file to compile
add_executable(HelloWorld sizeTtoIntCheck.cpp)

########################EXAMPLES#########################################

#brings in other targets (the libicsneo targets)
###add_subdirectory("libicsneo")

#add the executable
###add_executable(main main.cpp)
###add_executable(Transfer Tx.cpp)
###add_executable(Receive Rx.cpp)



###target_link_libraries(libicsneocpp-example icsneocpp)
###Replace the libicsneocpp-example template with "main" like below
###target_link_libraries(main icsneocpp)
###target_link_libraries(Transfer icsneocpp)
###target_link_libraries(Receive icsneocpp)

########################################################################