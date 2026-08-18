class Solution {
public:
    bool validatebox(vector<vector<char>>&board,int a,int b, int c, int d){
            unordered_set<char>s1;
        for (int i=a ;i<=b;i++){
            for (int j=c;j<=d;j++){
                      if(board[i][j]=='.'){
                    continue;
                }

                if (s1.find(board[i][j])!= s1.end()){
                    return false; 
                }
                else{
                    s1.insert(board[i][j]);
                }
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
       
        int row=board.size();
        int cols=board[0].size();
      //validate row
        for (int i =0;i<row;i++){
            unordered_set<char>s1;
         
            for (int j=0;j<cols;j++){

                   if(board[i][j]=='.'){
                    continue;
                }
                  
                if(s1.find(board[i][j]) != s1.end()){
                    return false;
                }
                else{
                    s1.insert(board[i][j]);
                }
            }
        }

        //validate cols
        for (int i =0;i<cols;i++){
            unordered_set<char>s1;
            for (int j=0;j<row;j++){

                if(board[j][i]=='.'){
                    continue;
                }
                  
                if(s1.find(board[j][i]) != s1.end()){
                    return false;
                }
                else{
                    s1.insert(board[j][i]);
                }
            }
        }

        for(int sr=0; sr<row ; sr+=3){
            int er=sr+2;
            for(int sc=0;sc<cols;sc+=3){
               int  ec=sc+2;
            
                if(!validatebox(board,sr,er,sc,ec)){
                    return false;
                }
                
            
            
            }   



        }
        return true;
        
    }
};