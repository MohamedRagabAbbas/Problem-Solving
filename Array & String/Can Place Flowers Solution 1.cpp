class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int zeros = 0;
        int counter = 0;
        if(flowerbed[0]==0) zeros++;
        for(int i=0;i<flowerbed.size();i++)
        {
            if(flowerbed[i]==0)
            {
                zeros++;
                 if(i==flowerbed.size()-1)
                 {
                    zeros++;
                    if(zeros>=3)
                        {
                            if(zeros%2 !=0)
                            {
                                int d = zeros / 2;
                                counter+=d;
                            }
                             else
                            {
                            zeros--;
                            int d = zeros / 2;
                            counter+=d;
                            }  
                        }
                    zeros++;
                 }
            }
            else
            {
                if(zeros>=3)
                {
                    
                    if(zeros%2 !=0)
                    {
                        int d = zeros / 2;
                        counter+=d;
                    }
                    else
                    {
                        zeros--;
                        int d = zeros / 2;
                        counter+=d;
                    }  
                }
                zeros = 0; 
            }
        }
        return (counter >= n);
    }
};s