/*
*	  CubeSample.cpp
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


#include "CubeSample.h"

Cube::Cube(char * n, float l, float w, float h, float m, float a) {
	if (n) {
		metal_type = new char[sizeof(n) + 1];
		strcpy(metal_type, n);
	} else {
		metal_type = new char[1];
		metal_type = "\0";
	}
	length = l;
	width = w;
	height = h;
	mass = m;
	accurate_density = a;
}

void Cube::determinePurity() {
//	float vol = getVolume();
	float density = getDensity();
	char * str = " is not pure.";
	if (density == accurate_density) {
		str = " is pure.";
	}
	cout << "Metal type " << metal_type << str << endl;
}

Cube::~Cube() {
	delete metal_type;
}
