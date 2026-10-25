// SPDX-License-Identifier: Unlicense
// Statement_Utils.h

#pragma once

// repeat
#define su_repeat(count, varname) \
    for (int varname = 0; varname < (count); ++varname)
#ifndef repeat
    #define repeat(count, varname) \
    su_repeat(count, varname)
#endif

// sfor
#define su_sfor(varname, count, interval) \
    for (int varname = 0; varname < (count); varname += interval)
#ifndef sfor
    #define sfor(varname, count, interval) \
    su_sfor(varname, count, interval)
#endif


// forever
#define su_forever \
    for (;;)
#ifndef forever
    #define forever \
    su_forever
#endif

// whilever
#define su_whilever \
    while (1)
#ifndef whilever
    #define whilever \
    su_whilever
#endif

// unless, ifnot, and ifn
#define su_unless(statement) \
    if(!(statement))
#ifndef unless
    #define unless(statement) \
    su_unless(statement)
#endif
#define su_ifnot(statement) \
    su_unless(statement)
#ifndef ifnot
    #define ifnot(statement) \
    su_ifnot(statement)
#endif
#define su_ifn(statement) \
    su_unless(statement)
#ifndef ifn
    #define ifn(statement) \
    su_ifn(statement)
#endif

// until
#define su_until(statement) \
    while(!(statement))
#ifndef until
    #define until(statement) \
    su_until(statement)
#endif

// when
#define su_when(statement) \
    if((statement))
#ifndef when
    #define when(statement) \
    su_when(statement)
#endif

// PascalCase True, False
#ifndef True
    #define True 1
#endif
#ifndef False
    #define False 0
#endif

// elif and elsif
#define su_elif else if
#ifndef elif
    #define elif else if 
#endif
#define su_elsif else if
#ifndef elsif
    #define elsif else if 
#endif

// C++ only

// function and variable declaration alternatives (auto return) C++ only
// this technically allows for some cursed stuff like su_func var = "Hello World" or su_var func() {} but I'll ignore that
#ifdef __cplusplus
    #if __cplusplus >= 201402L
        #define su_def      auto
        #define su_fn       auto
        #define su_fun      auto
        #define su_func     auto
        #define su_function auto
        #ifndef function
            #define function su_function
        #endif
    #endif
    #if __cplusplus >= 201103L
        #define su_var auto
        #define su_let auto
    #endif
#endif
