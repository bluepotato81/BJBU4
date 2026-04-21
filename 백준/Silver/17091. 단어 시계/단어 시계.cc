#include <stdio.h>

int main() {
    int h,m;
    scanf("%d\n%d", &h, &m);
    
    if(m==0) {
        if(h==1) {
            printf("one");
        }if(h==2) {
            printf("two");
        }if(h==3) {
            printf("three");
        }if(h==4) {
            printf("four");
        }if(h==5) {
            printf("five");
        }if(h==6) {
            printf("six");
        }if(h==7) {
            printf("seven");
        }if(h==8) {
            printf("eight");
        }if(h==9) {
            printf("nine");
        }if(h==10) {
            printf("ten");
        }if(h==11) {
            printf("eleven");
        }if(h==12) {
            printf("twelve");
        }
        printf(" o' clock");
    }
    else if(m==15) {
        printf("quarter past ");
        if(h==1) {
            printf("one");
        }if(h==2) {
            printf("two");
        }if(h==3) {
            printf("three");
        }if(h==4) {
            printf("four");
        }if(h==5) {
            printf("five");
        }if(h==6) {
            printf("six");
        }if(h==7) {
            printf("seven");
        }if(h==8) {
            printf("eight");
        }if(h==9) {
            printf("nine");
        }if(h==10) {
            printf("ten");
        }if(h==11) {
            printf("eleven");
        }if(h==12) {
            printf("twelve");
        }
    }
    
    else if(m==30) {
        printf("half past ");
        if(h==1) {
            printf("one");
        }if(h==2) {
            printf("two");
        }if(h==3) {
            printf("three");
        }if(h==4) {
            printf("four");
        }if(h==5) {
            printf("five");
        }if(h==6) {
            printf("six");
        }if(h==7) {
            printf("seven");
        }if(h==8) {
            printf("eight");
        }if(h==9) {
            printf("nine");
        }if(h==10) {
            printf("ten");
        }if(h==11) {
            printf("eleven");
        }if(h==12) {
            printf("twelve");
        }
    }   
    else if(m==45) {
        printf("quarter to ");
        if(h==12) {
            printf("one");
        }if(h+1==2) {
            printf("two");
        }if(h+1==3) {
            printf("three");
        }if(h+1==4) {
            printf("four");
        }if(h+1==5) {
            printf("five");
        }if(h+1==6) {
            printf("six");
        }if(h+1==7) {
            printf("seven");
        }if(h+1==8) {
            printf("eight");
        }if(h+1==9) {
            printf("nine");
        }if(h+1==10) {
            printf("ten");
        }if(h+1==11) {
            printf("eleven");
        }if(h+1==12) {
            printf("twelve");
        }
    }
    else if(m==1) {
        printf("one minute past ");
        if(h==1) {
            printf("one");
        }if(h==2) {
            printf("two");
        }if(h==3) {
            printf("three");
        }if(h==4) {
            printf("four");
        }if(h==5) {
            printf("five");
        }if(h==6) {
            printf("six");
        }if(h==7) {
            printf("seven");
        }if(h==8) {
            printf("eight");
        }if(h==9) {
            printf("nine");
        }if(h==10) {
            printf("ten");
        }if(h==11) {
            printf("eleven");
        }if(h==12) {
            printf("twelve");
        }
    }
    else if(m==59) {
        printf("one minute to ");
        if(h==12) {
            printf("one");
        }if(h+1==2) {
            printf("two");
        }if(h+1==3) {
            printf("three");
        }if(h+1==4) {
            printf("four");
        }if(h+1==5) {
            printf("five");
        }if(h+1==6) {
            printf("six");
        }if(h+1==7) {
            printf("seven");
        }if(h+1==8) {
            printf("eight");
        }if(h+1==9) {
            printf("nine");
        }if(h+1==10) {
            printf("ten");
        }if(h+1==11) {
            printf("eleven");
        }if(h+1==12) {
            printf("twelve");
        }
    } 
    else if(m<30) {
        
        if(m==2) {
            printf("two ");
        }if(m==3) {
            printf("three ");
        }if(m==4) {
            printf("four ");
        }if(m==5) {
            printf("five ");
        }if(m==6) {
            printf("six ");
        }if(m==7) {
            printf("seven ");
        }if(m==8) {
            printf("eight ");
        }if(m==9) {
            printf("nine ");
        }if(m==10) {
            printf("ten ");
        }if(m==11) {
            printf("eleven ");
        }if(m==12) {
            printf("twelve ");
        }if(m==13) {
            printf("thirteen ");
        }if(m==14) {
            printf("fourteen ");
        }if(m==15) {
            printf("fifteen ");
        }if(m==16) {
            printf("sixteen ");
        }if(m==17) {
            printf("seventeen ");
        }if(m==18) {
            printf("eighteen ");
        }if(m==19) {
            printf("nineteen ");
        }if(m==20) {
            printf("twenty ");
        }if(m==21) {
            printf("twenty one ");
        }if(m==22) {
            printf("twenty two ");
        }if(m==23) {
            printf("twenty three ");
        }if(m==24) {
            printf("twenty four ");
        }if(m==25) {
            printf("twenty five ");
        }if(m==26) {
            printf("twenty six ");
        }if(m==27) {
            printf("twenty seven ");
        }if(m==28) {
            printf("twenty eight ");
        }if(m==29) {
            printf("twenty nine ");
        }
        printf("minutes past ");
        if(h==1) {
            printf("one");
        }if(h==2) {
            printf("two");
        }if(h==3) {
            printf("three");
        }if(h==4) {
            printf("four");
        }if(h==5) {
            printf("five");
        }if(h==6) {
            printf("six");
        }if(h==7) {
            printf("seven");
        }if(h==8) {
            printf("eight");
        }if(h==9) {
            printf("nine");
        }if(h==10) {
            printf("ten");
        }if(h==11) {
            printf("eleven");
        }if(h==12) {
            printf("twelve");
        }
    }
    else if(m>30) {
        if(60-m==1) {
            printf("one ");
        }
        if(60-m==2) {
            printf("two ");
        }if(60-m==3) {
            printf("three ");
        }if(60-m==4) {
            printf("four ");
        }if(60-m==5) {
            printf("five ");
        }if(60-m==6) {
            printf("six ");
        }if(60-m==7) {
            printf("seven ");
        }if(60-m==8) {
            printf("eight ");
        }if(60-m==9) {
            printf("nine ");
        }if(60-m==10) {
            printf("ten ");
        }if(60-m==11) {
            printf("eleven ");
        }if(60-m==12) {
            printf("twelve ");
        }if(60-m==13) {
            printf("thirteen ");
        }if(60-m==14) {
            printf("fourteen ");
        }if(60-m==15) {
            printf("fifteen ");
        }if(60-m==16) {
            printf("sixteen ");
        }if(60-m==17) {
            printf("seventeen ");
        }if(60-m==18) {
            printf("eighteen ");
        }if(60-m==19) {
            printf("nineteen ");
        }if(60-m==20) {
            printf("twenty ");
        }if(60-m==21) {
            printf("twenty one ");
        }if(60-m==22) {
            printf("twenty two ");
        }if(60-m==23) {
            printf("twenty three ");
        }if(60-m==24) {
            printf("twenty four ");
        }if(60-m==25) {
            printf("twenty five ");
        }if(60-m==26) {
            printf("twenty six ");
        }if(60-m==27) {
            printf("twenty seven ");
        }if(60-m==28) {
            printf("twenty eight ");
        }if(60-m==29) {
            printf("twenty nine ");
        }
        printf("minutes to ");
        if(h==12) {
            printf("one");
        }if(h+1==2) {
            printf("two");
        }if(h+1==3) {
            printf("three");
        }if(h+1==4) {
            printf("four");
        }if(h+1==5) {
            printf("five");
        }if(h+1==6) {
            printf("six");
        }if(h+1==7) {
            printf("seven");
        }if(h+1==8) {
            printf("eight");
        }if(h+1==9) {
            printf("nine");
        }if(h+1==10) {
            printf("ten");
        }if(h+1==11) {
            printf("eleven");
        }if(h+1==12) {
            printf("twelve");
        }
    }
    
    return 0;
}