#include<stdio.h>
#include"menu.h"

double calculate_profit(double balance, double rate)
{
    if ( balance <= .0 ){
        //printf("Error your balance reached 0 level! balance = %d\n", (int)balance);
        return 0;
    }
    return balance / 100 * rate;
}


int main(void)
{
    double balance, total_profit = 0, credit, loan, interest, total_debt, remaining_debt, monthly_outcome = 0;
    int month;
    const double credit_card_mandatory_pay_rate = .04; 


    do
    {
        char ret;
        ;
        if ((ret = display_menu()) == '1')
            {

            }
        else
            return 0;
    } while (1);
    

    printf("Asagidaki verileri sirasiyla girin:\n1-kk cekilecek borc miktari(TL)\n2-komisyon orani(%%)\n3-vade(ay)\n4-para piyasasi aylik getiri(%%)\n");

    scanf("%lf%lf%d%lf", &credit, &loan, &month, &interest);

    balance = credit;
    total_debt = remaining_debt = balance * (1 + loan/100);
    monthly_outcome = total_debt/month;

    printf("one month profit for %f is %f\n total debt is %f\n outcome per month is %f\n", balance, calculate_profit(balance, interest), remaining_debt, monthly_outcome );
 

    for(int i = 0; i < month; i++){
        int profit = calculate_profit(balance, interest);
        total_profit += profit;
        remaining_debt -= monthly_outcome;
        if ((balance = balance - monthly_outcome + profit) <= 0)
        {
            printf("Possible loss at month %d!!, reached the <0 balance level = %.2f", month, balance);

        } 
    }
        


    printf("%.2f TL kredi karti cekimi icin\n\
        kar = %.2f\n\
        kalan borc = %.2f\n\
        ppf kazanilan = %.2f\n", credit, balance, remaining_debt, total_profit);

}