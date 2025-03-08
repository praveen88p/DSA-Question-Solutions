class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int whiteBlockCount = count(blocks.begin(), blocks.begin() + k, 'W');
          
           
            int minRecolors = whiteBlockCount;
          
            for (int i = k; i < blocks.size(); ++i) {
                whiteBlockCount += blocks[i] == 'W';
             
                whiteBlockCount -= blocks[i - k] == 'W';
              
               
                minRecolors = min(minRecolors, whiteBlockCount);}
                return minRecolors;
    
        }
    };