//power of three in three method
 bool isPowerOfThree(int n) {
        // approach ->>>> 1
        // T.C =0(logn);
        //S.C = 0(1);


        // if(n<=0)return false;
        // if(n==1)return true;
        // if(n%3!=0)return false;        
        // return isPowerOfThree(n/3);



        // approach ->>>>>2
        //T.C = 0(n);
        // S.C=o(1);
        // for(int i=0;i<=30;i++){
        //     if(pow(3,i)==n){
        //         return true;
        //     }
        // }
        // return false;


        // approach ->>>>>3
        //T.C=0(n);
        // S.C =0(1);
        int i=0;
        int flag =0;
        while(pow(3,i)<=n){
            if(pow(3,i)==n){
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
