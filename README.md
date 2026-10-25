# Statement_Utils.h

Small collection of QoL statements such as repeat(count, varname)

# All statements
## General
#### su_repeat / repeat
syntax: su_repeat(count, varname)
syntax: repeat(count, varname)
```c
repeat(5, i) {
    printf("%d\n", i);
}
su_repeat(5, i) {
    printf("%d\n", i);
}
// identical to:
for(int i = 0; i < 5; ++i) {
    printf("%d\n", i);
}
```

#### su_sfor / sfor
syntax: su_sfor(count, varname, interval)
syntax: sfor(count, varname, interval)
```c
sfor(10, i, 2) {
    printf("%d\n", i);
}
su_sfor(10, i, 2) {
    printf("%d\n", i);
}
// identical to:
for(int i = 0; i < 10; i += 2) {
    printf("%d\n", i);
}
```

#### su_forever / forever
syntax: su_forever
syntax: forever
```c
forever {
    // runs forever
}
su_forever {
    // runs forever
}
// identical to:
for(;;) {
    // runs forever
}
```

#### su_whilever / whilever
syntax: su_whilever
syntax: whilever
```c
whilever {
    // runs while true
}
su_whilever {
    // runs while true
}
// identical to:
while(1) {
    // runs while true
}
```

#### su_unless / unless, su_ifnot / ifnot, su_ifn / ifn
syntax: su_unless(statement)
syntax: unless(statement)
syntax: su_ifnot(statement)
syntax: ifnot(statement)
syntax: su_ifn(statement)
syntax: ifn(statement)
```c
unless(x > 0) {
    printf("not positive\n");
}
// identical to:
if(!(x > 0)) {
    printf("not positive\n");
}
```

#### su_until / until
syntax: su_until(statement)
syntax: until(statement)
```c
until(x > 0) {
    // loop until condition becomes true
}
su_until(x > 0) {
    // loop until condition becomes true
}
// identical to:
while(!(x > 0)) {
    // loop until condition becomes true
}
```

#### su_when / when
syntax: su_when(statement)
syntax: when(statement)
```c
when(x > 0) {
    printf("positive\n");
}
su_when(x > 0) {
    printf("positive\n");
}
// identical to:
if((x > 0)) {
    printf("positive\n");
}
```

#### True, False
syntax: True
syntax: False
```c
int flag = True;   // 1
int flag2 = False; // 0
```

#### su_elif / elif, su_elsif / elsif
syntax: su_elif
syntax: elif
syntax: su_elsif
syntax: elsif
```c
if(x > 0) {
    // positive
} elif(x < 0) {
    // negative
} else {
    // zero
}
// identical to:
if(x > 0) {
    // positive
} else if(x < 0) {
    // negative
} else {
    // zero
}
```

## C++ only
### C++14+ Only
#### su_def, su_fn, su_fun, su_func, su_function / function
syntax: su_def funcname()
syntax: su_fn funcname()
syntax: su_fun funcname()
syntax: su_func funcname()
syntax: su_function funcname()
syntax: function funcname()
```cpp
function add(int a, int b) {
    return a + b;
}
// identical to:
auto add(int a, int b) {
    return a + b;
}
```

### C++11+ Only
#### su_var, su_let
syntax: su_var varname
syntax: su_let varname
```cpp
su_var x = 5;
su_let y = "hello";
// identical to:
auto x = 5;
auto y = "hello";
```
