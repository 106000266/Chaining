//namespace moving{
class Student{
    public:
        void makeMove(int Record[5][6], int Max[5][6], Color color[5][6], Color inputColor)
        {
            if(Record[0][0]<1 && color[0][0]==White && Record[0][0]!=Max[0][0])
            {
                x=0,y=0;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if(((color[1][0]!=inputColor && color[1][0]!=White && color[1][0]!=Black)
                    || (color[0][1]!=inputColor && color[0][1]!=White && color[0][1]!=Black)) && color[0][0]==inputColor)
            {
                x=0,y=0;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if(Record[0][5]<1 && color[0][5]==White && Record[0][5]!=Max[0][5])
            {
                x=0,y=5;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if(((color[1][5]!=inputColor && color[1][5]!=White && color[1][5]!=Black)
                    || (color[0][4]!=inputColor && color[0][4]!=White && color[0][4]!=Black))  && color[0][5]==inputColor)
            {
                x=0,y=5;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if(Record[4][0]<1 && color[4][0]==White && Record[4][0]!=Max[4][0])
            {
                x=4,y=0;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if(((color[4][1]!=inputColor && color[4][1]!=White && color[4][1]!=Black)
                    || (color[3][0]!=inputColor && color[3][0]!=White && color[3][0]!=Black)) && color[4][0]==inputColor)
            {
                x=4,y=0;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if(Record[4][5]<1 && color[4][5]==White && Max[4][5]!=Record[4][5])
            {
                x=4,y=5;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if(((color[3][5]!=inputColor && color[3][5]!=White && color[3][5]!=Black)
                    || (color[4][4]!=inputColor && color[4][4]!=White && color[4][4]!=Black)) && Max[4][5]!=Record[4][5])
            {
                x=4,y=5;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if(Record[0][2]<2 && (color[0][2]==White || color[0][2]==inputColor) && Record[0][2]!=Max[0][2])
            {
                x=0,y=2;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if((((Max[0][1]-Record[0][1])==1 && (color[0][1]!=White && color[0][1]!=inputColor && color[0][1]!=Black))
                    || ((Max[0][3]-Record[0][3])==1 && (color[0][3]!=White && color[0][3]!=inputColor && color[0][3]!=Black))
                    || ((Max[1][2]-Record[1][2])==1 && (color[1][2]!=White && color[1][2]!=inputColor && color[1][1]!=Black)))
                    && (Record[0][2]!=Max[0][2]) && (color[0][2]==inputColor))
            {
                x=0,y=2;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if(Record[4][2]<2 && (color[4][2]==White || color[4][2]==inputColor) && Record[4][2]!=Max[4][2])
            {
                x=4,y=2;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if((((Max[4][3]-Record[4][3])==1 && (color[4][3]!=White && color[4][3]!=inputColor && color[4][3]!=Black))
                    || ((Max[4][1]-Record[4][1])==1 && (color[4][1]!=White && color[4][1]!=inputColor && color[4][1]!=Black))
                    || ((Max[3][2]-Record[3][2])==1 && (color[3][2]!=White && color[3][2]!=inputColor && color[3][2]!=Black)))
                    && (Record[4][2]!=Max[4][2]) && (color[4][2]==inputColor))
            {
                x=4,y=2;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if(Record[2][0]<2 && (color[2][0]==White || color[2][0]==inputColor) && Record[2][0]!=Max[2][0])
            {
                x=2,y=0;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if((((Max[1][0]-Record[1][0])==1 && color[1][0]!=White && color[1][0]!=inputColor && color[1][0]!=Black)
                    || ((Max[3][0]-Record[3][0])==1 && color[3][0]!=White && color[3][0]!=inputColor && color[3][0]!=Black)
                    || ((Max[2][1]-Record[2][1])==1 && color[2][1]!=White && color[2][1]!=inputColor && color[2][1]!=Black))
                    && (Record[2][0]!=Max[2][0]) && (color[2][0]==inputColor))
            {
                x=2,y=0;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if(Record[2][5]<2 && (color[2][5]==White || color[2][5]==inputColor) && Record[2][5]!=Max[2][5])
            {
                x=2,y=5;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if((((Max[1][5]-Record[1][5])==1 && (color[1][5]!=White && color[1][5]!=inputColor && color[1][5]!=Black))
                    || ((Max[3][5]-Record[3][5])==1 && (color[3][5]!=White && color[3][5]!=inputColor && color[3][5]!=Black))
                    || ((Max[2][4]-Record[2][4])==1 && (color[2][4]!=White && color[2][4]!=inputColor && color[2][4]!=Black)))
                    && (Record[2][5]!=Max[2][5]) && (color[2][5]==inputColor))
            {
                x=2,y=5;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if(Record[1][1]<1 && (color[1][1]==White || color[1][1]==inputColor) && Record[1][1]!=Max[1][1]
                    && (((Max[1][2]-Record[1][2])!=1 && (color[1][2]!=White && color[1][2]!=inputColor && color[1][2]!=Black))
                    || ((Max[1][0]-Record[1][0])!=1 && (color[1][0]!=White && color[1][0]!=inputColor && color[1][0]!=Black))
                    || ((Max[2][1]-Record[2][1])!=1 && (color[2][1]!=White && color[2][1]!=inputColor && color[2][1]!=Black))
                    || ((Max[0][1]-Record[0][1])!=1 && (color[0][1]!=White && color[0][1]!=inputColor && color[0][1]!=Black))))
            {
                x=1,y=1;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if((((Max[1][2]-Record[1][2])==1 && (color[1][2]!=White && color[1][2]!=inputColor && color[1][2]!=Black))
                    || ((Max[1][0]-Record[1][0])==1 && (color[1][0]!=White && color[1][0]!=inputColor && color[1][0]!=Black))
                    || ((Max[2][1]-Record[2][1])==1 && (color[2][1]!=White && color[2][1]!=inputColor && color[2][1]!=Black))
                    || ((Max[0][1]-Record[0][1])==1 && (color[0][1]!=White && color[0][1]!=inputColor && color[0][1]!=Black)))
                    && (Record[1][1]!=Max[1][1]) && (color[1][1]==inputColor))
            {
                x=1,y=1;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if(Record[1][3]<1 && (color[1][3]==White || color[1][3]==inputColor) && Record[1][3]!=Max[1][3]
                    && (((Max[1][2]-Record[1][2])!=1 && (color[1][2]!=White && color[1][2]!=inputColor && color[1][2]!=Black))
                    || ((Max[1][4]-Record[1][4])!=1 && (color[1][4]!=White && color[1][4]!=inputColor && color[1][4]!=Black))
                    || ((Max[2][3]-Record[2][3])!=1 && (color[2][3]!=White && color[2][3]!=inputColor && color[2][3]!=Black))
                    || ((Max[0][3]-Record[0][3])!=1 && (color[0][3]!=White && color[0][3]!=inputColor && color[0][3]!=Black))))
            {
                x=1,y=3;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if((((Max[1][2]-Record[1][2])==1 && (color[1][2]!=White && color[1][2]!=inputColor && color[1][2]!=Black))
                    || ((Max[1][4]-Record[1][4])==1 && (color[1][4]!=White && color[1][4]!=inputColor && color[1][4]!=Black))
                    || ((Max[2][3]-Record[2][3])==1 && (color[2][3]!=White && color[2][3]!=inputColor && color[2][3]!=Black))
                    || ((Max[0][3]-Record[0][3])==1 && (color[0][3]!=White && color[0][3]!=inputColor && color[0][3]!=Black)))
                    && (Record[1][3]!=Max[1][3]) && (color[1][3]==inputColor))
            {
                x=1,y=3;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if(Record[2][2]<1 && (color[2][2]==White || color[2][2]==inputColor) && Record[2][2]!=Max[2][2]
                    && (((Max[2][1]-Record[2][1])!=1 && (color[2][1]!=White && color[2][1]!=inputColor && color[2][1]!=Black))
                    || ((Max[2][3]-Record[2][3])!=1 && (color[2][3]!=White && color[2][3]!=inputColor && color[2][3]!=Black))
                    || ((Max[1][2]-Record[1][2])!=1 && (color[1][2]!=White && color[1][2]!=inputColor && color[1][2]!=Black))
                    || ((Max[3][2]-Record[3][2])!=1 && (color[3][2]!=White && color[3][2]!=inputColor && color[3][2]!=Black))))
            {
                x=2,y=2;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if((((Max[2][1]-Record[2][1])==1 && (color[2][1]!=White && color[2][1]!=inputColor && color[2][1]!=Black))
                    || ((Max[2][3]-Record[2][3])==1 && (color[2][3]!=White && color[2][3]!=inputColor && color[2][3]!=Black))
                    || ((Max[1][2]-Record[1][2])==1 && (color[1][2]!=White && color[1][2]!=inputColor && color[1][2]!=Black))
                    || ((Max[3][2]-Record[3][2])==1 && (color[3][2]!=White && color[3][2]!=inputColor && color[3][2]!=Black)))
                    && (Record[2][2]!=Max[2][2]) && (color[2][2]==inputColor))
            {
                x=2,y=2;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if(Record[3][1]<1 && (color[3][1]==White || color[3][1]==inputColor) && Record[3][1]!=Max[3][1]
                    && (((Max[3][2]-Record[3][2])!=1 && (color[3][2]!=White && color[3][2]!=inputColor && color[3][2]!=Black))
                    || ((Max[3][0]-Record[3][0])!=1 && (color[3][0]!=White && color[3][0]!=inputColor && color[3][0]!=Black))
                    || ((Max[2][1]-Record[2][1])!=1 && (color[2][1]!=White && color[2][1]!=inputColor && color[2][1]!=Black))
                    || ((Max[4][1]-Record[4][1])!=1 && (color[4][1]!=White && color[4][1]!=inputColor && color[4][1]!=Black))))
            {
                x=3,y=1;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if((((Max[3][2]-Record[3][2])==1 && (color[3][2]!=White && color[3][2]!=inputColor && color[3][2]!=Black))
                    || ((Max[3][0]-Record[3][0])==1 && (color[3][0]!=White && color[3][0]!=inputColor && color[3][0]!=Black))
                    || ((Max[2][1]-Record[2][1])==1 && (color[2][1]!=White && color[2][1]!=inputColor && color[2][1]!=Black))
                    || ((Max[4][1]-Record[4][1])==1 && (color[4][1]!=White && color[4][1]!=inputColor && color[4][1]!=Black)))
                    && (Record[3][1]!=Max[3][1]) && (color[3][1]==inputColor))
            {
                x=3,y=1;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if(Record[3][3]<1 && (color[3][3]==White || color[3][3]==inputColor) && Record[3][3]!=Max[3][3]
                    && (((Max[3][2]-Record[3][2])!=1 && (color[3][2]!=White && color[3][2]!=inputColor && color[3][2]!=Black))
                    || ((Max[3][4]-Record[3][4])!=1 && (color[3][4]!=White && color[3][4]!=inputColor && color[3][4]!=Black))
                    || ((Max[2][3]-Record[2][3])!=1 && (color[2][3]!=White && color[2][3]!=inputColor && color[2][3]!=Black))
                    || ((Max[4][3]-Record[4][3])!=1 && (color[4][3]!=White && color[4][3]!=inputColor && color[4][3]!=Black))))
            {
                x=3,y=3;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if((((Max[3][2]-Record[3][2])==1 && (color[3][2]!=White && color[3][2]!=inputColor && color[3][2]!=Black))
                    || ((Max[3][4]-Record[3][4])==1 && (color[3][4]!=White && color[3][4]!=inputColor && color[3][4]!=Black))
                    || ((Max[2][3]-Record[2][3])==1 && (color[2][3]!=White && color[2][3]!=inputColor && color[2][3]!=Black))
                    || ((Max[4][3]-Record[4][3])==1 && (color[4][3]!=White && color[4][3]!=inputColor && color[4][3]!=Black)))
                    && (Record[3][3]!=Max[3][3]) && (color[3][3]==inputColor))
            {
                x=3,y=3;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if(Record[1][4]<1 && (color[1][4]==White || color[1][4]==inputColor) && Record[1][4]!=Max[1][4]
                    && (((Max[1][3]-Record[1][3])!=1 && (color[1][3]!=White && color[1][3]!=inputColor && color[1][3]!=Black))
                    || ((Max[1][5]-Record[1][5])!=1 && (color[1][5]!=White && color[1][5]!=inputColor && color[1][5]!=Black))
                    || ((Max[2][4]-Record[2][4])!=1 && (color[2][4]!=White && color[2][4]!=inputColor && color[2][4]!=Black))
                    || ((Max[0][4]-Record[0][4])!=1 && (color[0][4]!=White && color[0][4]!=inputColor && color[0][4]!=Black))))
            {
                x=1,y=4;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if((((Max[1][3]-Record[1][3])==1 && (color[1][3]!=White && color[1][3]!=inputColor && color[1][3]!=Black))
                    || ((Max[1][5]-Record[1][5])==1 && (color[1][5]!=White && color[1][5]!=inputColor && color[1][5]!=Black))
                    || ((Max[2][4]-Record[2][4])==1 && (color[2][4]!=White && color[2][4]!=inputColor && color[2][4]!=Black))
                    || ((Max[0][4]-Record[0][4])==1 && (color[0][4]!=White && color[0][4]!=inputColor && color[0][4]!=Black)))
                    && (Record[1][4]!=Max[1][4]) && (color[1][4]==inputColor))
            {
                x=1,y=4;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if(Record[1][2]<1 && (color[1][2]==White || color[1][2]==inputColor) && Record[1][2]!=Max[1][2]
                    && (((Max[1][3]-Record[1][3])!=1 && (color[1][3]!=White && color[1][3]!=inputColor && color[1][3]!=Black))
                    || ((Max[1][1]-Record[1][1])!=1 && (color[1][1]!=White && color[1][1]!=inputColor && color[1][1]!=Black))
                    || ((Max[2][2]-Record[2][2])!=1 && (color[2][2]!=White && color[2][2]!=inputColor && color[2][2]!=Black))
                    || ((Max[0][2]-Record[0][2])!=1 && (color[0][2]!=White && color[0][2]!=inputColor && color[0][2]!=Black))))
            {
                x=1,y=2;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if((((Max[1][3]-Record[1][3])==1 && (color[1][3]!=White && color[1][3]!=inputColor && color[1][3]!=Black))
                    || ((Max[1][1]-Record[1][1])==1 && (color[1][1]!=White && color[1][1]!=inputColor && color[1][1]!=Black))
                    || ((Max[2][2]-Record[2][2])==1 && (color[2][2]!=White && color[2][2]!=inputColor && color[2][2]!=Black))
                    || ((Max[0][2]-Record[0][2])==1 && (color[0][2]!=White && color[0][2]!=inputColor && color[0][2]!=Black)))
                    && (Record[1][2]!=Max[1][2]) && (color[1][2]==inputColor))
            {
                x=1,y=2;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if(Record[2][3]<1 && (color[2][3]==White || color[2][3]==inputColor) && Record[2][3]!=Max[2][3]
                    && (((Max[2][2]-Record[2][2])!=1 && (color[2][2]!=White && color[2][2]!=inputColor && color[2][2]!=Black))
                    || ((Max[2][4]-Record[2][4])!=1 && (color[2][4]!=White && color[2][4]!=inputColor && color[2][4]!=Black))
                    || ((Max[1][3]-Record[1][3])!=1 && (color[1][3]!=White && color[1][3]!=inputColor && color[1][3]!=Black))
                    || ((Max[3][3]-Record[3][3])!=1 && (color[3][3]!=White && color[3][3]!=inputColor && color[3][3]!=Black))))
            {
                x=2,y=3;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if((((Max[2][2]-Record[2][2])==1 && (color[2][2]!=White && color[2][2]!=inputColor && color[2][2]!=Black))
                    || ((Max[2][4]-Record[2][4])==1 && (color[2][4]!=White && color[2][4]!=inputColor && color[2][4]!=Black))
                    || ((Max[1][3]-Record[1][3])==1 && (color[1][3]!=White && color[1][3]!=inputColor && color[1][3]!=Black))
                    || ((Max[3][3]-Record[3][3])==1 && (color[3][3]!=White && color[3][3]!=inputColor && color[3][3]!=Black)))
                    && (Record[2][3]!=Max[2][3]) && (color[2][3]==inputColor))
            {
                x=2,y=3;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if(Record[3][2]<1 && (color[3][2]==White || color[3][2]==inputColor) && Record[3][2]!=Max[3][2]
                    && (((Max[3][3]-Record[3][3])!=1 && (color[3][3]!=White && color[3][3]!=inputColor && color[3][3]!=Black))
                    || ((Max[3][1]-Record[3][1])!=1 && (color[3][1]!=White && color[3][1]!=inputColor && color[3][1]!=Black))
                    || ((Max[2][2]-Record[2][2])!=1 && (color[2][2]!=White && color[2][2]!=inputColor && color[2][2]!=Black))
                    || ((Max[4][2]-Record[4][2])!=1 && (color[4][2]!=White && color[4][2]!=inputColor && color[4][2]!=Black))))
            {
                x=3,y=2;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if((((Max[3][3]-Record[3][3])==1 && (color[3][3]!=White && color[3][3]!=inputColor && color[3][3]!=Black))
                    || ((Max[3][1]-Record[3][1])==1 && (color[3][1]!=White && color[3][1]!=inputColor && color[3][1]!=Black))
                    || ((Max[2][2]-Record[2][2])==1 && (color[2][2]!=White && color[2][2]!=inputColor && color[2][2]!=Black))
                    || ((Max[4][2]-Record[4][2])==1 && (color[4][2]!=White && color[4][2]!=inputColor && color[4][2]!=Black)))
                    && (Record[3][2]!=Max[3][2]) && (color[3][2]==inputColor))
            {
                x=3,y=2;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if(Record[3][4]<1 && (color[3][4]==White || color[3][4]==inputColor) && Record[3][4]!=Max[3][4]
                    && (((Max[3][5]-Record[3][5])!=1 && (color[3][5]!=White && color[3][5]!=inputColor && color[3][5]!=Black))
                    || ((Max[3][3]-Record[3][3])!=1 && (color[3][3]!=White && color[3][3]!=inputColor && color[3][3]!=Black))
                    || ((Max[2][4]-Record[2][4])!=1 && (color[2][4]!=White && color[2][4]!=inputColor && color[2][3]!=Black))
                    || ((Max[4][4]-Record[4][4])!=1 && (color[4][4]!=White && color[4][4]!=inputColor && color[4][4]!=Black))))
            {
                x=3,y=4;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else if((((Max[3][5]-Record[3][5])==1 && (color[3][5]!=White && color[3][5]!=inputColor && color[3][5]!=Black))
                    || ((Max[3][3]-Record[3][3])==1 && (color[3][3]!=White && color[3][3]!=inputColor && color[3][3]!=Black))
                    || ((Max[2][4]-Record[2][4])==1 && (color[2][4]!=White && color[2][4]!=inputColor && color[2][3]!=Black))
                    || ((Max[4][4]-Record[4][4])==1 && (color[4][4]!=White && color[4][4]!=inputColor && color[4][4]!=Black)))
                    && (Record[3][4]!=Max[3][4]) && (color[3][4]==inputColor))
            {
                x=3,y=4;
                Record[x][y]+=1;
                color[x][y]=inputColor;
            }
            else
            {
                int i,j,en=0;
                for(i=1;i<4;i++)
                {
                    if((color[i][0]==inputColor) && ((Max[i][0]-Record[i][0])==1
                        && ((Max[i+1][0]-Record[i+1][0])==1 || (Max[i-1][0]-Record[i-1][0])==1 || (Max[i][1]-Record[i][1])==1)))
                    {
                        x=i,y=0;
                        Record[x][y]+=1;
                        en=1;
                        break;
                    }
                    else if((color[i][5]==inputColor) && ((Max[i][5]-Record[i][5])==1
                        && ((Max[i+1][5]-Record[i+1][5])==1 || (Max[i-1][5]-Record[i-1][5])==1 || (Max[i][4]-Record[i][4])==1)))
                    {
                        x=i,y=5;
                        Record[x][y]+=1;
                        en=1;
                        break;
                    }
                }
                if(i==4)
                {
                    for(j=1;j<5;j++)
                    {
                        if((color[0][j]==inputColor) && ((Max[0][j]-Record[0][j])==1
                        && ((Max[0][j+1]-Record[0][j+1])==1 || (Max[0][j-1]-Record[0][j-1])==1 || (Max[1][j]-Record[1][j])==1)))
                        {
                            x=0,y=j;
                            Record[x][y]+=1;
                            en=1;
                            break;
                        }
                        else if((color[4][j]==inputColor) && ((Max[4][j]-Record[4][j])==1
                        && ((Max[4][j+1]-Record[4][j+1])==1 || (Max[4][j-1]-Record[4][j-1])==1 || (Max[3][j]-Record[3][j])==1)))
                        {
                            x=4,y=j;
                            Record[x][y]+=1;
                            en=1;
                            break;
                        }
                    }
                }
                if(i==4 && j==5)
                {
                    en=0;
                    for(i=1;i<4;i++)
                    {
                        for(j=1;j<5;j++);
                        {
                            if((Max[i][j]-Record[i][j])==1 && color[i][j]==inputColor
                               && ((((Max[i+1][j]-Record[i+1][j])==1) && (color[i+1][j]!=White && color[i+1][j]!=inputColor && color[i+1][j]!=Black))
                               || (((Max[i-1][j]-Record[i-1][j])==1) && (color[i-1][j]!=White && color[i-1][j]!=inputColor && color[i-1][j]!=Black))
                               || (((Max[i][j+1]-Record[i][j+1])==1) && (color[i][j+1]!=White && color[i][j+1]!=inputColor && color[i][j+1]!=Black))
                               || (((Max[i][j-1]-Record[i][j-1])==1) && (color[i][j-1]!=White && color[i][j-1]!=inputColor && color[i][j-1]!=Black))))
                            {
                                x=i,y=j;
                                Record[x][y]+=1;
                                color[x][y]=inputColor;
                                en=1;
                                break;
                            }
                            else if(Record[i][j]<4 && (color[i][j]==White || color[i][j]==inputColor)
                               && (((Max[i+1][j]-Record[i+1][j])!=1) && (color[i+1][j]!=White && color[i+1][j]!=inputColor && color[i+1][j]!=Black))
                               && (((Max[i-1][j]-Record[i-1][j])!=1) && (color[i-1][j]!=White && color[i-1][j]!=inputColor && color[i-1][j]!=Black))
                               && (((Max[i][j+1]-Record[i][j+1])!=1) && (color[i][j+1]!=White && color[i][j+1]!=inputColor && color[i][j+1]!=Black))
                               && (((Max[i][j-1]-Record[i][j-1])!=1) && (color[i][j-1]!=White && color[i][j-1]!=inputColor && color[i][j-1]!=Black)))
                            {
                                x=i,y=j;
                                Record[x][y]+=1;
                                color[x][y]=inputColor;
                                en=1;
                                break;
                            }
                        }
                        if(en) break;
                    }
                    if(i==4 && j==5)
                    {
                        en=0;
                        for(i=1;i<4;i++)
                        {
                            if(color[i][0]==inputColor && (Max[i][0]!=Record[i][0])
                               && (color[i+1][0]!=Black || color[i-1][0]!=Black || color[i][1]!=Black))
                            {
                                x=i,y=0;
                                Record[x][y]+=1;
                                en=1;
                                break;
                            }
                            else if(color[i][5]==inputColor && (Max[i][5]!=Record[i][5])
                                && (color[i+1][5]!=Black || color[i-1][5]!=Black || color[i][4]!=Black))
                            {
                                x=i,y=5;
                                Record[x][y]+=1;
                                en=1;
                                break;
                            }
                        }
                        if(i==4)
                        {
                            en=0;
                            for(j=1;j<5;j++)
                            {
                                if(color[0][j]==inputColor && (Max[0][j]!=Record[0][j])
                                   && (color[0][j+1]!=Black || color[0][j-1]!=Black || color[1][j]!=Black))
                                {
                                    x=0,y=j;
                                    Record[x][y]+=1;
                                    en=1;
                                    break;
                                }
                                else if(color[4][j]==inputColor && (Max[4][j]!=Record[4][j])
                                    && (color[4][j+1]!=Black || color[4][j-1]!=Black || color[4][j]!=Black))
                                {
                                    x=4,y=j;
                                    Record[x][y]+=1;
                                    en=1;
                                    break;
                                }
                            }
                        }
                        if(j==5)
                        {
                            //en=0;
                            for(i=1;i<4;i++)
                            {
                                for(j=1;j<5;j++)
                                {
                                    if(color[i][j]==inputColor && (Max[i][j]!=Record[i][j]))
                                    {
                                        x=i,y=j;
                                        Record[x][y]+=1;
                                        en=1;
                                        break;
                                    }
                                }
                                if(en) break;
                            }
                        }
                    }
                }
            }
        }
        int getX()
        {
            return x;
        }
        int getY()
        {
            return y;
        }
    private:
        int x;
        int y;
};
//};


