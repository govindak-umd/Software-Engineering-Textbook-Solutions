WEEK 3 Assignment - Software Development for Robotics - ENPM808X
Name : Govind Ajith Kumar
UID  : 116699488

The directory structure is as follows:
GovindAjithKumar_116699488_week2
	AcceleratedCPP_3_5
	AcceleratedCPP_4_5
	AcceleratedCPP_4_7
	AcceleratedCPP_6_9
	SoftwareEngineering_3_10
	Week_2_Written_Govind.pdf
	README.md

The cpp-boilerplate is taken from:

https://github.com/thedancomplex/cpp-boilerplate

Create a new folder in the same directory as this folder to Cmake. This new folder can then be imported into the eclipse workspace.
To do this for this project you can run the following commands.

mkdir -p TestFolder
cd TestFolder
cmake -G "Eclipse CDT4 - Unix Makefiles" -D CMAKE_BUILD_TYPE=Debug -D CMAKE_ECLIPSE_VERSION=4.7.0 -D CMAKE_CXX_COMPILER_ARG1=-std=c++14 ../SoftwareEngineering_9_4/

The Readme has been edited to account for the deleted folders and changed directories.

Open Eclipse, go to File -> Import -> General -> Existing Projects into Workspace -> Select "boilerplate-eclipse" directory created previously as root directory -> Finish

Build and Run


