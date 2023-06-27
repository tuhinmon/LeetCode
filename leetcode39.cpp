//Power of Two in advance version
 bool isPowerOfTwo(int n) {
        // // love babbar consept 
        // // approch ->>>>1
        // int ans =0; 
        // for(int i =0;i<=30;i++){
        //     ans = pow(2,i);
        //     if(ans==n){
        //         return true;
        //     }

        // }
        // return false;

        // sceond approach in leetcode solutions
        // approach ->>>>>2
        int i=0;int flag =0;
        while(pow(2,i)<=n){
            if(pow(2,i)==n){
                flag++;
            }
            i++;

        }
        if(flag==1){
            return true;
        }
        else{
            return false;
        }

        
    }
