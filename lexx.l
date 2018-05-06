
%%
"for" {return key;}
" " {return sp;}
"{" {return {;}
"int" {return ty;}
[0-9]*{return digit;
}
[a-za-Z0-9]* {return id;}
"="return"=";}
"<"|">"|">="|"<="|"==" {return reop;}
"++"|"--"{return op;}
";" {return';'';'}
%%
