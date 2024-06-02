#include<bits/stdc++.h>
using namespace std;
int main(){
	int y;
	int ace=1;
	cout<<"Hello welcome to tic tac toe. \n";
	cout<<"You are player and you are going to play with computer. This game is for your life. Be careful. \n";
	cout<<"| 1 | 2 | 3 | \n";
	cout<<"|___|___|___|\n";
	cout<<"| 4 | 5 | 6 | \n";
	cout<<"|___|___|___|\n";
	cout<<"| 7 | 8 | 9 | \n";
	cout<<"|___|___|___|\n";
	cout<<"Press the number where you want to place 'X' \n";
	char again='y';
	while (again=='y'){
	char arr[3][3]={};
    char n=' ';
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			arr[i][j]=n;
			
		}
	}
	cout<<endl;
	//player turn
	char place;
	for (int j=0;j<1000;j++){
	cout<<"Enter your choice \n";
	cin>>place;
	if(place=='1'&&arr[0][0]==' '){
		arr[0][0]='X';
	}
	 else if(place=='2'&&arr[0][1]==' '){
					arr[0][1]='X';
	}
	else if(place=='3'&&arr[0][2]==' '){
					arr[0][2]='X';
	}
		else if(place=='4'&&arr[1][0]==' '){
					arr[1][0]='X';
	}
		else if(place=='5'&&arr[1][1]==' '){
					arr[1][1]='X';
	}
		else if(place=='6'&&arr[1][2]==' '){
					arr[1][2]='X';
	}
		else if(place=='7'&&arr[2][0]==' '){
					arr[2][0]='X';
	}
		else if(place=='8'&&arr[2][1]==' '){
					arr[2][1]='X';
	}
	else if(place=='9'&&arr[2][2]==' '){
					arr[2][2]='X';
	}
	else
	{
		cout<<" Invalid or place already taken \n";
		continue;
	}

       //computer turn
       int acp =0;
        if (arr[0][0] ==arr[0][1] && arr[0][1]=='O'&&arr[0][2]==' '){
         	arr[0][2]='O';
         	acp = 1;
		 }
		else if(arr[0][1] ==arr[0][2] && arr[0][2]=='O'&&arr[0][0]==' '){
		 	arr[0][0]='O';
		 	acp = 1;
		 }
		else if(arr[0][0] ==arr[0][2] && arr[0][2]=='O'&&arr[0][1]==' '){
		 	arr[0][1]='O';
		 	acp = 1;
		 }
		 
		 
        else if (arr[1][0] == arr[1][1] && arr[1][1]=='O'&&arr[1][2]==' '){
         	arr[1][2]='O';
         	acp = 1;
		 }
		else if(arr[1][1] ==arr[1][2] && arr[1][2]=='O'&&arr[1][0]==' '){
		 	arr[1][0]='O';
		 	acp = 1;
		 }
		else if(arr[1][0] ==arr[1][2]&&arr[1][2]=='O'&&arr[1][1]==' '){
		 	arr[1][1]='O';
		 	acp = 1;
		 }
		 
		 
		 else if (arr[2][0] == arr[2][1] && arr[2][1]=='O'&&arr[2][2]==' '){
         	arr[2][2]='O';
         	acp = 1;
		 }
		else if(arr[2][1] ==arr[2][2] && arr[2][2]=='O'&&arr[2][0]==' '){
		 	arr[2][0]='O';
		 	acp = 1;
		 }
		else if(arr[2][0] == arr[2][2] && arr[2][2]=='O'&&arr[2][1]==' '){
		 	arr[2][1]='O';
		 	acp = 1;
		 }
		 
		 
		 else if (arr[0][0] == arr[1][0] && arr[1][0]=='O'&&arr[2][0]==' '){
         	arr[2][0]='O';
         	acp = 1;
		 }
		else if(arr[0][0] == arr[2][0] && arr[2][0]=='O'&&arr[1][0]==' '){
		 	arr[1][0]='O';
		 	acp = 1;
		 }
		 else if(arr[1][0] == arr[2][0] && arr[2][0]=='O'&&arr[0][0]==' '){
		 	arr[0][0]='O';
		 	acp = 1;
		 }
		 
		 
		  else if (arr[0][1] ==arr[1][1] && arr[1][1]=='O'&&arr[2][1]==' '){
         	arr[2][1]='O';
         	acp = 1;
		 }
		 else if(arr[0][1] == arr[2][1] && arr[2][1]=='O'&&arr[1][1]==' '){
		 	arr[1][1]='O';
		 	acp = 1;
		 }
		else if(arr[2][1] == arr[1][1] && arr[1][1]=='O'&&arr[0][1]==' '){
		 	arr[0][1]='O';
		 	acp = 1;
		 }
		 
		 
		 else if (arr[0][2] == arr[1][2] && arr[1][2]=='O'&&arr[2][2]==' '){
         	arr[2][2]='O';
         	acp = 1;
		 }
		else if(arr[1][2] ==arr[2][2] && arr[2][2]=='O'&&arr[0][2]==' '){
		 	arr[0][2]='O';
		 	acp = 1;
		 }
		else if(arr[0][2] == arr[2][2] && arr[2][2]=='O'&&arr[1][2]==' '){
		 	arr[1][2]='O';
		 	acp = 1;
		 }
		 
		 
		 else if (arr[0][0] == arr[1][1] && arr[1][1]=='O'&&arr[2][2]==' '){
         	arr[2][2]='O';
         	acp = 1;
		 }
		else if(arr[0][0] ==arr[2][2] && arr[2][2]=='O'&&arr[1][1]==' '){
		 	arr[1][1]='O';
		 	acp = 1;
		 }
		else if(arr[1][1] == arr[2][2] && arr[2][2]=='O'&&arr[0][0]==' '){
		 	arr[0][0]='O';
		 	acp = 1;
		 }
		 
		 
		else if (arr[0][2] == arr[1][1] && arr[1][1]=='O'&&arr[2][0]==' '){
         	arr[2][0]='O';
         	acp = 1;
		 }
		else if(arr[1][1] == arr[2][0] && arr[2][0]=='O'&&arr[0][2]==' '){
		 	arr[0][2]='O';
		 	acp = 1;
		 }
		 else if(arr[0][2] == arr[2][0] && arr[2][0]=='O'&&arr[1][1]==' '){
		 	arr[1][1]='O';
		 	break;
		 }
       
       ////////////////////////////////////////////////////////////////////
       ///////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////
         if (arr[0][0] ==arr[0][1] && arr[0][1]=='X'&&arr[0][2]==' '){
         	arr[0][2]='O';
		 }
		else if(arr[0][1] ==arr[0][2] && arr[0][2]=='X'&&arr[0][0]==' '){
		 	arr[0][0]='O';
		 }
		else if(arr[0][0] ==arr[0][2] && arr[0][2]=='X'&&arr[0][1]==' '){
		 	arr[0][1]='O';
		 }
		 
		 
        else if (arr[1][0] == arr[1][1] && arr[1][1]=='X'&&arr[1][2]==' '){
         	arr[1][2]='O';
		 }
		else if(arr[1][1] ==arr[1][2] && arr[1][2]=='X'&&arr[1][0]==' '){
		 	arr[1][0]='O';
		 }
		else if(arr[1][0] ==arr[1][2]&&arr[1][2]=='X'&&arr[1][1]==' '){
		 	arr[1][1]='O';
		 }
		 
		 
		 else if (arr[2][0] == arr[2][1] && arr[2][1]=='X'&&arr[2][2]==' '){
         	arr[2][2]='O';
		 }
		else if(arr[2][1] ==arr[2][2] && arr[2][2]=='X'&&arr[2][0]==' '){
		 	arr[2][0]='O';
		 }
		else if(arr[2][0] == arr[2][2] && arr[2][2]=='X'&&arr[2][1]==' '){
		 	arr[2][1]='O';
		 }
		 
		 
		 else if (arr[0][0] == arr[1][0] && arr[1][0]=='X'&&arr[2][0]==' '){
         	arr[2][0]='O';
		 }
		else if(arr[0][0] == arr[2][0] && arr[2][0]=='X'&&arr[1][0]==' '){
		 	arr[1][0]='O';
		 }
		 else if(arr[1][0] == arr[2][0] && arr[2][0]=='X'&&arr[0][0]==' '){
		 	arr[0][0]='O';
		 }
		 
		 
		  else if (arr[0][1] ==arr[1][1] && arr[1][1]=='X'&&arr[2][1]==' '){
         	arr[2][1]='O';
		 }
		 else if(arr[0][1] == arr[2][1] && arr[2][1]=='X'&&arr[1][1]==' '){
		 	arr[1][1]='O';
		 }
		else if(arr[2][1] == arr[1][1] && arr[1][1]=='X'&&arr[0][1]==' '){
		 	arr[0][1]='O';
		 }
		 
		 
		 else if (arr[0][2] == arr[1][2] && arr[1][2]=='X'&&arr[2][2]==' '){
         	arr[2][2]='O';
		 }
		else if(arr[1][2] ==arr[2][2] && arr[2][2]=='X'&&arr[0][2]==' '){
		 	arr[0][2]='O';
		 }
		else if(arr[0][2] == arr[2][2] && arr[2][2]=='X'&&arr[1][2]==' '){
		 	arr[1][2]='O';
		 }
		 
		 
		 else if (arr[0][0] == arr[1][1] && arr[1][1]=='X'&&arr[2][2]==' '){
         	arr[2][2]='O';
		 }
		else if(arr[0][0] ==arr[2][2] && arr[2][2]=='X'&&arr[1][1]==' '){
		 	arr[1][1]='O';
		 }
		else if(arr[1][1] == arr[2][2] && arr[2][2]=='X'&&arr[0][0]==' '){
		 	arr[0][0]='O';
		 }
		 
		 
		else if (arr[0][2] == arr[1][1] && arr[1][1]=='X'&&arr[2][0]==' '){
         	arr[2][0]='O';
		 }
		else if(arr[1][1] == arr[2][0] && arr[2][0]=='X'&&arr[0][2]==' '){
		 	arr[0][2]='O';
		 }
		 else if(arr[0][2] == arr[2][0] && arr[2][0]=='X'&&arr[1][1]==' '){
		 	arr[1][1]='O';
		 }
		else
		{
			for(int u=0;u<100;u++){
				ace=(rand()%9)+1;
		   //ace= ((ace * 37 + 13) % 100)%9+1;
		  	if(place==1&&arr[0][0]==' '){
		arr[0][0]='O';
		break;
	}
	 else if(ace==2&&arr[0][1]==' '){
					arr[0][1]='O';
					break;
	}
	else if(ace==3&&arr[0][2]==' '){
					arr[0][2]='O';
					break;
	}
		else if(ace==4&&arr[1][0]==' '){
					arr[1][0]='O';
					break;
	}
		else if(ace==5&&arr[1][1]==' '){
					arr[1][1]='O';
					break;
	}
		else if(ace==6&&arr[1][2]==' '){
					arr[1][2]='O';
					break;
	}
		else if(ace==7&&arr[2][0]==' '){
					arr[2][0]='O';
					break;
	}
		else if(ace==8&&arr[2][1]==' '){
					arr[2][1]='O';
					break;
	}
	else if(ace==9&&arr[2][2]==' '){
					arr[2][2]='O';
					break;
	}
	else
	{
	  continue;   
	}
}
		   	
		   }
		 for (int z=0;z<3;z++){
		 	for(int k=0;k<3;k++){
		 		cout<<"| "<<arr[z][k];
		 		if(k==2){
		 			cout<<"|";
				 }
		 		
			 }
			 cout<<endl;
			 			 cout<<"|__|__|__|"<<endl;
		 }
		 //to check who wins or tie
		  if ((arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2] && arr[0][0] == 'X') ||
            (arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][0] == 'X') ||
            (arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] && arr[2][0] == 'X') ||
            (arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0] && arr[0][0] == 'X') ||
            (arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] && arr[0][1] == 'X') ||
            (arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] && arr[0][2] == 'X') ||
            (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] == 'X') ||
            (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] == 'X')) {
            cout << "Player wins" << endl;
            break;
        }
          else if ((arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2] && arr[0][0] == 'O') ||
            (arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][0] == 'O') ||
            (arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] && arr[2][0] == 'O') ||
            (arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0] && arr[0][0] == 'O') ||
            (arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] && arr[0][1] == 'O') ||
            (arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] && arr[0][2] == 'O') ||
            (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] == 'O') ||
            (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] == 'O')) {
            cout << "computer wins" << endl;
            break;
        }
           else if((arr[0][0]=='X'||arr[0][0]=='O')&&(arr[0][1]=='X'||arr[0][1]=='O')&&(arr[0][2]=='X'||arr[0][2]=='O')&&
		        (arr[1][0]=='X'||arr[1][0]=='O')&&(arr[1][1]=='X'||arr[1][1]=='O')&&(arr[1][2]=='X'||arr[1][2]=='O')&&
				(arr[2][0]=='X'||arr[2][0]=='O')&&(arr[2][1]=='X'||arr[2][1]=='O')&&(arr[2][2]=='X'||arr[2][2]=='O')){
					cout<<"Its a tie "<<endl;
				} 
			
            
        }
	cout<<"Would You like to play it again. pres 'y' for yes or 'n' for no and press enter ";
	cin>>again;
}


    return 0;
}

