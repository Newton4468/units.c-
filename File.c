
// simple c program prompting the user to key  in personal information
/*
Name: kipsemian Newton
Reg no: pa106/g/28743/25
Description:simple c program to display personal information 
*/

int main(){
char id_number;
float balance;
float height;
char github_email;
    printf("what is your id number?");
    scanf("%d",& id_number);
    printf("what is your bank account balance?");
    scanf("%d",&balance);
    printf("what is your height?");
    scanf("%fl",&height);
    printf("what is your github email");
    scanf("%s",github_email);
    return 0;
}