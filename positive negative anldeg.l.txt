%{
int positive_count = 0;
int negative_count = 0;
%}

%%

[+-]?[0-9]+   {
                int num = atoi(yytext);
                if (num > 0) {
                    positive_count++;
                } else if (num < 0) {
                    negative_count++;
                }
              }

%%
int yywrap(){}
int main() {
    yylex();
    printf("Positive count: %d\n", positive_count);
    printf("Negative count: %d\n", negative_count);
    return 0;
}
