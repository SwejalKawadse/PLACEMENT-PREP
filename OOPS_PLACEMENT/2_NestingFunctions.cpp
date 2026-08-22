#include<bits/stdc++.h>
using namespace std;

class Transaction{
    private:
    int amount=100000;
    void check_balance(int transaction_amount){
        if(transaction_amount>amount) cout<<"Insufficient Balanace in the account."<<endl;
        else cout<<"Proceeding with the transactions : "<<endl;
    }

    public:
    int transaction_amount;
    void enter_the_amount_of_transaction_to_proceed(){
        cout<<"Enter the amount of transaction you want to proceed with : "<<endl;
        cin>>transaction_amount;
    }
    void Transaction_process();
};

 void Transaction :: Transaction_process(){


        check_balance(transaction_amount);

        if(transaction_amount<=amount){
         amount-=transaction_amount;
        }
    }

int main() {
    Transaction t1;
    t1.enter_the_amount_of_transaction_to_proceed();
    t1.Transaction_process();
return 0;
}