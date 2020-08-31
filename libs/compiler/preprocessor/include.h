/*
 *	Copyright 2020 Andrey Terekhov, Egor Anikin
 *
 *	Licensed under the Apache License, Version 2.0 (the "License");
 *	you may not use this file except in compliance with the License.
 *	You may obtain a copy of the License at
 *
 *		http://www.apache.org/licenses/LICENSE-2.0
 *
 *	Unless required by applicable law or agreed to in writing, software
 *	distributed under the License is distributed on an "AS IS" BASIS,
 *	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *	See the License for the specific language governing permissions and
 *	limitations under the License.
 */

#pragma once

#include "context.h"
#include "context_var.h"


#ifdef __cplusplus
extern "C" {
#endif

void include_relis(preprocess_context *context, data_files *fs);
int open_p_faile(preprocess_context *context, const char *file_way);
void file_read(preprocess_context *context);
void cur_failes_next(data_files *fs, int old_cur, preprocess_context *context);
void set_old_cur(data_files *fs, int old, preprocess_context *context);
void include_fclose(preprocess_context *context);

#ifdef __cplusplus
} /* extern "C" */
#endif