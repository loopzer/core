/*
 *	Loader Library by Parra Studios
 *	Copyright (C) 2016 Vicente Eduardo Ferrer Garcia <vic798@gmail.com>
 *
 *	A library for loading executable code at run-time into a process.
 *
 */

#ifndef LOADER_PATH_H
#define LOADER_PATH_H 1

#include <loader/loader_api.h>

#include <loader/loader_naming.h>

#ifdef __cplusplus
extern "C" {
#endif

LOADER_API int loader_path_get_name(const loader_naming_path path, loader_naming_name name);

LOADER_API int loader_path_get_extension(const loader_naming_path path, loader_naming_extension extension);

#ifdef __cplusplus
}
#endif

#endif /* LOADER_PATH_H */