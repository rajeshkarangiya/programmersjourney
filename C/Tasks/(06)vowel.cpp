#include<stdio.h>
int main()
{
	char a;

       printf("Enter the Alphabate : ");
       scanf("%c",&a);
       switch(a)
       {
       	   case 'a':
       	     case 'A':
       	      case 'e':
       	       case 'E':
       	        case 'i':
       	         case'I':
       	          case'o':
       	           case 'O':
       	            case 'u':
       	             case 'U':
       	             printf("Vowel");
       	             break;
     
     
      default:
      	printf("consonant");
      	break;
      	  	 
	   }
	
	
	return 0;
}




