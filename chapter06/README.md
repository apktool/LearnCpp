
# Flex

[Flex](https://westes.github.io/flex/manual/)

```plaintext
definitions
%%
rules
%%
user code 
```

```text
%{
/* code block */
%}

/* Definitions Section */
%x STATE_X

%%
/* Rules Section */
ruleA   /* after regex */ { /* code block */ } /* after code block */
        /* Rules Section (indented) */

<STATE_X>{
ruleC   ECHO;
ruleD   ECHO;
%{
/* code block */
%}
}

%%
/* User Code Section */
```

# Bison

[Bison](https://www.gnu.org/software/bison/manual/html_node/index.html)

```plaintext
%{
Prologue
%}

Bison declarations

%%
Grammar rules
%%
Epilogue
```
