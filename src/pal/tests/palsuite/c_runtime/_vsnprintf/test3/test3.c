//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information. 
//

/*=====================================================================
**
** Source:    test3.c
**
** Purpose:   Test #3 for the _vsnprintf function.
**
**
**===================================================================*/ 

#include <palsuite.h>
#include "../_vsnprintf.h"

/*
 * Notes: memcmp is used, as is strlen.
 */

int __cdecl main(int argc, char *argv[])
{

    if (PAL_Initialize(argc, argv) != 0)
    {
        return(FAIL);
    }

    DoWStrTest("foo %S", convert("bar"), "foo bar");
    DoStrTest("foo %hS", "bar", "foo bar");
    DoWStrTest("foo %lS", convert("bar"), "foo bar");
    DoWStrTest("foo %wS", convert("bar"), "foo bar");
    DoWStrTest("foo %LS", convert("bar"), "foo bar");
    DoWStrTest("foo %I64S", convert("bar"), "foo bar");
    DoWStrTest("foo %5S", convert("bar"), "foo   bar");
    DoWStrTest("foo %.2S", convert("bar"), "foo ba");
    DoWStrTest("foo %5.2S", convert("bar"), "foo    ba");
    DoWStrTest("foo %-5S", convert("bar"), "foo bar  ");
    DoWStrTest("foo %05S", convert("bar"), "foo 00bar");
    
    PAL_Terminate();
    return PASS;
}
