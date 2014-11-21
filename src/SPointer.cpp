/*
*	  Spointer.cpp
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

#include "SPointer.h"

template <class T>
T& SPointer<T>::operator*(){
	return pData;
}

template <class T>
SPointer<T> & SPointer<T>::operator =(SPointer<T> &obj) {
	cout << "Assignment Operator" << endl;
//	self memory check
	if (this == &obj) {
		return *this;
	} else {
		if(ref->ReleaseRef() == 0){
			delete pData;
			delete ref;
		}
		this->pData = obj.pData;
		ref = obj.ref;
		ref->AddRef();
	}
	return *this;
}

template <class T>
T* SPointer<T>::operator ->() {
	return pData;
}

template <class T>
SPointer<T>::~SPointer() {
	cout << "Starting to call SmartPointer Destructor."<<endl;
	if(ref->ReleaseRef() == 0){
		delete pData;
		delete ref;
	}
	cout << "End of calling SmartPointer."<<endl;
}

