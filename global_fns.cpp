int pow(int base, int exp)
{
  int res=1;
  for (int i=0; i<exp; i++) 
	res *= base;
  return res;
}

char i_to_ch(int i)
{
  //  if(isprint(i) == 0)
  if(i == 0)
    {return '0';}
  if(i == 1)
    {return '1';}
  if(i == 2)
    {return '2';}
  if(i == 3)
    {return '3';}
  if(i == 4)
    {return '4';}
  if(i == 5)
    {return '5';}
  if(i == 6)
    {return '6';}
  if(i == 7)
    {return '7';}
  else
    {return 'Z';}
}

int get_port_no(int Qi)
{
  int port_no;
  if (Qi == 0)      // BRANCH
    {port_no = 9;}
  else if (Qi == 1) // INC1
    {port_no = 5;}
  else if (Qi == 2) // INC2
    {port_no = 6;}
  else if (Qi == 3) // SHIFT
    {port_no = 8;}
  else if (Qi == 4) // BOOLEAN
    {port_no = 7;}
  else if (Qi == 5) // DIV
    {port_no = 3;}
  else if (Qi == 6) // MUL1
    {port_no = 1;}
  else if (Qi == 7) // MUL2
    {port_no = 2;}
  else if (Qi == 14) // FX_ADD
    {port_no = 4;}
  else if (Qi == 15) // ADD
    {port_no = 0;}
  return port_no;
}

bool is_a_function (int F)
{
  if ( (F == 00) || (F == 02) || (F == 03) ||(F == 04) || (F == 05)
       || (F == 06) || (F == 07) || ( (F >= 10) && (F < 18) ) 
       || (F == 20) ||(F == 21) ||(F == 22) ||(F == 23)
       || (F == 30) ||(F == 31)
       || (F == 36) ||(F == 37)
       || (F == 40) || (F == 44) || (F == 46) || (F == 47)
       || (F == 50) || (F == 51) || (F == 52) || (F == 53)
       || (F == 54) || (F == 55) || (F == 56) || (F == 57)
       || (F == 60) || (F == 61) || (F == 62) || (F == 63)
       || (F == 64) || (F == 65) || (F == 66) || (F == 67)
       || (F == 70) || (F == 71) || (F == 72) || (F == 73)
       || (F == 74) || (F == 75) || (F == 76) || (F == 77)
       )
    return true;
  return false;
}
