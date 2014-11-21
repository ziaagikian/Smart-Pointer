/*
*	  CubeSample.h
*
*	  Copyright 2014 ziaagikian <https://github.com/ziaagikian>
*
*	   Licensed under the Apache License, Version 2.0 (the "License");
*	   you may not use this file except in compliance with the License.
*	   You may obtain a copy of the License at
*
*		   http://www.apache.org/licenses/LICENSE-2.0
*
*	   Unless required by applicable law or agreed to in writing, software
*	   distributed under the License is distributed on an "AS IS" BASIS,
*	   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*	   See the License for the specific language governing permissions and
*	   limitations under the License.
*/

#ifndef CUBE_H_
#define CUBE_H_
#include <iostream>
#include <cstring>
using namespace std;

class Cube {
private:
	char * metal_type;
	float length;
	float width;
	float height;
	float mass;
	float accurate_density;

	inline float getVolume(){
		return length * width * height;
	}

	inline float getDensity(float vol){
		return mass/vol;
	}
public:
	Cube(char * n, float l,float w,float h,float m, float a);
	void determinePurity();
	~Cube();
};

#endif /* CUBE_H_ */
