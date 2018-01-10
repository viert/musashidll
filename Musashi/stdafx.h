// stdafx.h: включаемый файл для стандартных системных включаемых файлов
// или включаемых файлов для конкретного проекта, которые часто используются, но
// не часто изменяются
//

#pragma once

#ifdef _WIN32
#define _CRT_SECURE_NO_WARNINGS
#include "targetver.h"
#include <windows.h>
#endif // _WIN32

// Файлы заголовков Windows:
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "m68k.h"
#include "m68kops.h"
#include "m68kcpu.h"


// TODO: Установите здесь ссылки на дополнительные заголовки, требующиеся для программы
