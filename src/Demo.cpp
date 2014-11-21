/*
*	  Demo.cpp
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
#include "SPointer.h"
//Implementation file is included in order to avoid compiling error at linking stage
#include "SPointer.cpp"

int main() {
	char * metal1 = "Gold";
	char * metal2 = "Silver";
	Cube *c1 = new Cube(metal1, 12, 0.1, 2, 5, 10.5);
	SPointer<Cube> obj1(c1);
	{
		Cube *c2 = new Cube(metal2, 1.2, 0.1, 2.5, 5.0, 10.5);
		SPointer<Cube> obj2(c2);
		obj2 = obj1;
		obj2->determinePurity();
	}
	obj1->determinePurity();
	return 0;
}
