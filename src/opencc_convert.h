/*
* Open Chinese Convert
*
* Copyright 2010 BYVoid <byvoid1@gmail.com>
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef __OPENCC_CONVERT_H_
#define __OPENCC_CONVERT_H_

#include "opencc_utils.h"

#define SEGMENT_BUFF_SIZE 1048576

wchar_t * words_segmention(wchar_t * dest, const wchar_t * text);
wchar_t * simp_to_trad(wchar_t * dest, const wchar_t * text);

#endif /* __OPENCC_CONVERT_H_ */