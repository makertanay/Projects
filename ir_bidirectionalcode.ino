int led=11;
int s1_in=10;
int s2_out=9;
int count=0;
int a,b;
int i=1;
boolean flag=true;
void IN()
//function used when a person enters the rooms.
{
  while(count++)
   { if (count>=5)
      {count=5;
      break;}
     else
    {     
      analogWrite(led,count*51);//it is multiplied with 51 because the maximum no. of person 
                                //in a room can be 5 and 5*51 is 255 which is the maximum limit of value.  
    } 
   break;
   }
}

void OUT()
//function used when people exit the room
{
   while(count--)
   { if (count<=0)
      {count=0;
      }
     else
    {     
      analogWrite(led,count*51);   //it is multiplied with 51 because the maximum no. of person 
                                //in a room can be 5 and 5*51 is 255 which is the maximum limit of value.
     } 
    break;
   }
}

void setup() {
  pinMode(led,OUTPUT);
  pinMode(s1_in,INPUT);
  pinMode(s2_out,INPUT);

}

void loop() {
 if (flag){
  flag=not flag;
  if(digitalRead(in))
    IN();
  else if(digitalRead(out));
    OUT();
 }
 else
  flag=not flag;  

}
