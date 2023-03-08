#include <iostream>
#include <string>

using namespace std;
int balance = 0;
int minute = 0;
int megabyte = 0;
int message = 0;
int debt= 0;
int flexi=0;
int mobile_number;
string debt_number;
// This code is made by Abdi Kumsa
// check balance
// recharge
// Go to the Ethio Gebeta.
void welcome ()
{
    cout << "****** Welcome to ethio Gebeta ****** " << endl;
    cout << "1. Packages  " << endl;
    cout << "2. Hourly/Daily unlimited pack " << endl;
    cout << "3. Asham Tele" << endl;
    cout << "4. Additional Services " << endl;
    cout << "5. Language Change " << endl;
    cout << "6. My service " << endl;
    cout << "****** Have a nice time ****** " << endl;
}
void packages ()
{
    cout << "****** Packages ****** " << endl;
    cout << "1. One Birr Package " << endl;
    cout << "2. Voice Package  " << endl;
    cout << "3. Internet  " << endl;
    cout << "4. Voice plus data " << endl;
    cout << "5. Flexi Package " << endl;
    cout << "6. Unlimited Premium package " << endl;
    cout << "7. Long validity package  " << endl;
    cout << "8. International call package " << endl;
    cout << "9. Morning Package " << endl;
    cout << "10. SMS package " << endl;

    cout << "** Main Menu  " << endl;

}
void one_birr()
{
    cout << "****** one birr ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. 1 Birr 4min for 1 Hour " << endl;
    cout << "2. 1 Birr 20M for 1 Hour" << endl;
    cout << "3. 1 Birr 50 SMS for 1 Hour " << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void voice()
{
    cout << "****** voice ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Daily  " << endl;
    cout << "2. Weekly " << endl;
    cout << "3. Monthly " << endl;
    cout << "4. Night" << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void voice_daily ()
{
    cout << "****** daily voice ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 3 for 12 Min " << endl;
    cout << "2. Birr 5 for 20 Min" << endl;
    cout << "3. Birr 10 for 45 Min" << endl;
    cout << "# back  " << endl;
    cout << "** Main Menu  " << endl;
}
void voice_weekly ()
{
    cout << "****** voice weekly ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 15 for 70 Min " << endl;
    cout << "2. Birr 20 for 100 Min" << endl;
    cout << "3. Birr 25 for 130 Min" << endl;
    cout << "# back  " << endl;
    cout << "** Main Menu  " << endl;
}
void voice_monthly ()
{
    cout << "****** voice monthly ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 35 for 125 Min " << endl;
    cout << "2. Birr 50 for 185 Min " << endl;
    cout << "3. Birr 95 for 375 Min " << endl;
    cout << "4. Birr 120 for 500 Min " << endl;
    cout << "5. Birr 200 for 1000 Min " << endl;
    cout << "6. Birr 380 for 2000 Min " << endl;
    cout << "# back  " << endl;
    cout << "** Main Menu  " << endl;
}
void voice_night ()
{
    cout << "****** voice night ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 3 for 60 Min " << endl;
    cout << "2. Birr 6 for 140 Min" << endl;
    cout << "# back  " << endl;
    cout << "** Main Menu  " << endl;
}
void internet()
{
    cout << "****** Internet ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Daily  " << endl;
    cout << "2. Weekly " << endl;
    cout << "3. Monthly " << endl;
    cout << "4. Night" << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}

void internet_daily ()
{
    cout << "****** Internet Daily ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 3 for 35 Mb " << endl;
    cout << "2. Birr 5 for 75 Mb" << endl;
    cout << "3. Birr 12 for 200 Mb" << endl;
    cout << "4. Birr 25 for 500 Mb" << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void internet_weekly ()
{
    cout << "****** Internet Weekly ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 24 for 300 Mb" << endl;
    cout << "2. Birr 38 for 600 Mb" << endl;
    cout << "3. Birr 56 for 1 Gb" << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void internet_monthly ()
{
    cout << "****** Internet Monthly ****** " << endl;
    cout << "1. Birr 35 for 500 Mb" << endl;
    cout << "2. Birr 60 for 1 Gb" << endl;
    cout << "3. Birr 105 for 2 Gb" << endl;
    cout << "4. Birr 200 for 4 Gb" << endl;
    cout << "5. Birr 420 for 10 Gb" << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void internet_night ()
{
    cout << "****** Internet night ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 3 for 70 Mb" << endl;
    cout << "2. Birr 5 for 160 Mb" << endl;
    cout << "3. Birr 7 for 300 Mb" << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void voice_plus_data()
{
    cout << "****** Voice Plus Data ****** " << endl;
    cout << "1. Daily  " << endl;
    cout << "2. Weekly " << endl;
    cout << "3. Monthly " << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void voice_plus_data_daily()
{
    cout << "****** Voice Plus Data Daily ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 12 for 12 MIN, 160 Mb, 10 SMS" << endl;
    cout << "2. Birr 3 for 28 MIN, 590 Mb, 10 SMS" << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void voice_plus_data_weekly()
{
    cout << "****** Voice Plus Data Weekly ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 50 for 70 MIN, 590 Mb, 20 SMS" << endl;
    cout << "2. Birr 76 for 100 MIN, 1 Gb, 20 SMS" << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void voice_plus_data_monthly()
{
    cout << "******  Voice plus data monthly ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 140 for 125 MIN, 2 Gb, SMS" << endl;
    cout << "2. Birr 200 for 375 MIN, 2 Gb, SMS" << endl;
    cout << "3. Birr 1663 for 1250 MIN, unlimited data , 50 SMS" << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void flexi_pack()
{
    cout << "****** Flexi package ****** " << endl;
    cout << "1. Daily  " << endl;
    cout << "2. Weekly " << endl;
    cout << "3. Monthly " << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void flexi_pack_daily ()
{
    cout << "****** Flexi package daily****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 15 for 390 Flexi Unit " << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void flexi_pack_weekly ()
{
    cout << "****** Flexi package weekly ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 50 for 1320 Flexi Unit " << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void flexi_pack_monthly ()
{
    cout << "****** Flexi package monthly****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 100 for 2280 Flexi Unit " << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void unlimited_pre()
{
    cout << "****** Unlimited Premimium ****** " << endl;
    cout << "1. Weekly " << endl;
    cout << "2. Monthly " << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void unlimited_pre_weekly ()
{
    cout << "****** Weekly Unlimited Premimium ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "Birr 300 for a week " << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void unlimited_pre_monthly ()
{

    cout << "****** Monthly Unlimited Premimium ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 999 for unlimted voice " << endl;
    cout << "2. Birr 999 for unlimted Internet " << endl;
    cout << "3. Birr 1700 for unlimted voice and Internet " << endl;
    cout << "4. Birr 2330 for unlimted voice, Data and SMS international 100 min and 50 SMS " << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void long_validity()
{
    cout << "****** Long Validity ****** " << endl;
    cout << "1. Quarterly package " << endl;
    cout << "2. yearly package " << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void long_validity_quarterly ()
{
    cout << "****** Long Validity quarterly ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 650 for 555 MIN and 12 GB and 150 SMS " << endl;
    cout << "2. Birr 860 for 1500 MIN and 12 GB and 150 SMS " << endl;
    cout << "3. Birr 2620 for 555 MIN and unlimited data and 150 SMS " << endl;
    cout << "4. Birr 3470 for unlimited voice and 12 GB and 150 SMS " << endl;
    cout << "5. Birr 4130 for unlimited voice, data and SMS " << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void long_validity_yearly ()
{
    cout << "****** Long Validity yearly ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 10200 for unlimited voice, data and SMS  " << endl;
    cout << "1. Birr 5995 for unlimited voice and SMS  " << endl;
    cout << "1. Birr 5995 for unlimited data and SMS  " << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void international_call()
{
    cout << "****** International Call ****** " << endl;
    cout << " International Call is Valid in selective countries alone " << endl;
    cout << "1. Destination 1 (only for 10 countries ) " << endl;
    cout << "2. Destination 2  (only for 11 countries )" << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void international_call_des_1 ()
{
    cout << "****** International Call Destination 1****** " << endl;
    cout << "1. Daily  " << endl;
    cout << "2. Weekly " << endl;
    cout << "3. Monthly " << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void international_call_des_1_daily ()
{
    cout << "****** International Call Destination 1 daily ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 29.90 for minutes " << endl;
}
void international_call_des_1_weekly ()
{
    cout << "****** International Call Destination 1 weekly ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 74.9 for 15 minutes " << endl;
}
void international_call_des_1_monthly ()
{
    cout << "****** International Call Destination 1 monthly ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 499 for 150 minutes " << endl;
}

void international_call_des_2 ()
{
    cout << "****** International Call Destination 2****** " << endl;
    cout << "1. Daily  " << endl;
    cout << "2. Weekly " << endl;
    cout << "3. Monthly " << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void international_call_des_2_daily ()
{
    cout << "****** International Call Destination 2 daily ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 37 for 5 minutes " << endl;
}
void international_call_des_2_weekly ()
{
    cout << "****** International Call Destination 2 weekly ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 104 for 15 minutes " << endl;
}
void international_call_des_2_monthly ()
{
    cout << "****** International Call Destination 2 monthly ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 1000 for 150 minutes " << endl;
}
void morning()
{
    cout << "****** Morning Package ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 2 for 8 min and 5 sms " << endl;
    cout << "2. Birr 2 for 25 MB and 5 sms " << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void sms()
{
    cout << "****** SMS Package ****** " << endl;
    cout << "1. Daily  " << endl;
    cout << "2. weekly " << endl;
    cout << "3. Monthly" << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void sms_daily ()
{
    cout << "****** SMS Package daily ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 2 for 35 SMS " << endl;
    cout << "2. Birr 3 for 55 SMS " << endl;
    cout << "2. Birr 5 for 100 SMS " << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void sms_weekly ()
{
    cout << "****** SMS Package weekly ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 10 for 200 SMS " << endl;
    cout << "2. Birr 15 for 350 SMS " << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void sms_monthly ()
{
    cout << "****** SMS Package monthly ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 30 for 800 SMS " << endl;
    cout << "2. Birr 50 for 1500 SMS " << endl;
    cout << "* back  " << endl;
    cout << "** Main Menu  " << endl;
}
void unlimited_pack ()
{
    cout << "****** Unlimited package  ****** " << endl;
    cout << "1. Hourly Unlimited Internet   " << endl;
    cout << "2. Daily Unlimited Internet  " << endl;
    cout << "3. Daily Unlimited Voice " << endl;

    cout << "** Main Menu  " << endl;
}
void unlimited_pack_hourly ()
{
    cout << "****** Unlimited package hourly Internet ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 12 for 1- hour "  << endl;
}
void unlimited_pack_daily_Internet ()
{
    cout << "****** Unlimited package daily Internet ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 55 for 1- day Internet "  << endl;
}
void unlimited_pack_daily_voice ()
{
    cout << "****** Unlimited package daily Voice ****** " << endl;
    cout << " Your current Balance is " << balance << endl;
    cout << "1. Birr 35 for 1- day voice  "  << endl;
}

void asham_tele ()
{
    cout << "****** Asham Tele ****** " << endl;
    cout << "1. Registration  " << endl;
    cout << "2. Point Transfer " << endl;
    cout << "3. Point Redeem  " << endl;
    cout << "4. Query Point and member level " << endl;
    cout << "5. Query Remaining Free Resource  " << endl;
    cout << "** Main Menu  " << endl;

}
void asham_tele_registration ()
{
    cout << "****** Asham Tele Registration ****** " << endl;
    cout << "You have successfully registered " << endl;
}
void asham_tele_point_transfer ()
{
    cout << "****** Asham Tele Transfer****** " << endl;
    cout << " You can't transfer point for you have 0 point and non member of Asham Tele " << endl;
}
void asham_tele_point_redeem ()
{
    cout << "****** Asham Tele point redeem ****** " << endl;
    cout << "Dear customer; your number level is loyal basic. You have 0 point " << endl;
}
void asham_tele_query_point ()
{
    cout << "****** Asham Tele query point ****** " << endl;
    cout << "Dear customer; your number level is loyal basic. You have 0 point " << endl;
}
void asham_tele_query_remaining ()
{
    cout << "****** Asham Tele query remaining****** " << endl;
    cout << "Dear customer; your remaining Asham tele point package from voice: 0 min, data: 0 MB, SMS : 0 item, flexi : 0. Thank you ethiotelcom " << endl;
}
void additional_services ()
{
    cout << "****** Additional Services ****** " << endl;
    cout << " Coming soon " << endl;
    cout << "** Main Menu  " << endl;

}
void language_change ()
{
    cout << "****** Change Language ****** " << endl;
    cout << "1. For Amharic " << endl;
    cout << "2. For English" << endl;
    cout << "3. Afaan Oromoof" << endl;
    cout << "4. For Tigrigna" << endl;
    cout << "5. For Somali" << endl;

    cout << "** Main Menu  " << endl;

}
void language_change_amharic ()
{
    cout << "****** Change Language to amharic ****** " << endl;
    cout << "Your request is successfully submitted. Thank you! " << endl;
}
void language_change_english ()
{
    cout << "****** Change Language English ****** " << endl;
    cout << "Your request is successfully submitted. Thank you! " << endl;
}
void language_change_afaan_oromoo ()
{
    cout << "****** Change Language to Afaan Oromoo****** " << endl;
    cout << "Your request is successfully submitted. Thank you! " << endl;
}
void language_change_tigrigna ()
{
    cout << "****** Change Language to tigrigna ****** " << endl;
    cout << "Your request is successfully submitted. Thank you! " << endl;
}
void language_change_somali ()
{
    cout << "****** Change Language to somali ****** " << endl;
    cout << "Your request is successfully submitted. Thank you! " << endl;
}
void my_service ()
{
    cout << "****** My service ****** " << endl;
    cout << "1. Unsubscribe " << endl;
    cout << "2. Transfer Package Resource " << endl;
    cout << "3. Package Resource Conversion " << endl;
    cout << "** Main Menu  " << endl;
}
void my_service_unsubscribe ()
{
    cout << "****** Unsubscribe My service ****** " << endl;
    cout << "Your request is not successfully sent. Please try again later " << endl;
}
void my_service_transfer ()
{
    cout << "****** Transfer Package Resource ****** " << endl;
    cout << " You don't have enough service to transfer " << endl;
}
void my_service_convert ()
{
    cout << "****** Package Resource coversion ****** " << endl;
    cout << " You don't have enough service to convert" << endl;
}
void intro_pack ()
{
    cout << "1. for your self " << endl;
    cout << "2. gift " << endl;
    cout << "* back " << endl;
}
void empty_balance ()
{
    cout << "Dear customer your current balance " << balance << " is below the requirement. Please recharge your phone " << endl;
    cout << "To ask for debt please type *810# and to exit please type other key " << endl;
}

int main()
{
    string ethiotelecom_number;
    cout << "Dear Customer please call *999# to get access to Ethio Gebeta and press comma after it  : " ;
    getline( cin, ethiotelecom_number, ',');
    string input;
    int major_input;
    int number;
    if (ethiotelecom_number=="*999#")
        {
            cout << "For whom are you going to buy the package " << endl;
            cout << "1. for my self " << endl;
            cout << "2. for gift " << endl;
            cin >> major_input;
            if (major_input == 1)
            {
                do
            {
                system ("cls");
                welcome ();
                cin >> number;
                if (number == 1)
                {

                    do
                    {
                      system ("cls");
                      packages ();
                    cin >> input;
                    if (input == "1")
                    {

                           one_birr();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 1)
                                {
                                    balance = balance - 1;
                                    minute = minute + 4;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if (input == "2")
                            {
                                if (balance>= 1)
                                {
                                    balance = balance - 1;
                                    megabyte = megabyte + 20;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " MB internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "3")
                            {
                                if (balance>= 1)
                                {
                                    balance = balance - 1;
                                    message = message + 50;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " sms package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else
                                cout << "Please insert valid number " << endl;


                    }
                    else if (input == "2")
                    {
                        do
                        {
                        voice();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            voice_daily ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 3)
                                {
                                    balance = balance - 3;
                                    minute = minute + 12;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 5)
                                {
                                    balance = balance - 5;
                                    minute = minute + 20;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 10)
                                {
                                    balance = balance - 10;
                                    minute = minute + 45;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            voice_weekly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 15)
                                {
                                    balance = balance - 15;
                                    minute = minute + 70;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 20)
                                {
                                    balance = balance - 20;
                                    minute = minute + 100;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 25)
                                {
                                    balance = balance - 25;
                                    minute = minute + 130;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "3")
                        {
                            system ("cls");
                            voice_monthly ();
                            cin >> input ;
                            if (input == "1")
                            {
                                 if (balance>= 35)
                                {
                                    balance = balance - 35;
                                    minute = minute + 125;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 50)
                                {
                                    balance = balance - 50;
                                    minute = minute + 185;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 95)
                                {
                                    balance = balance - 95;
                                    minute = minute + 375;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "4")
                            {
                                 if (balance>= 120)
                                {
                                    balance = balance - 120;
                                    minute = minute + 500;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "5")
                            {
                                 if (balance>= 200)
                                {
                                    balance = balance - 200;
                                    minute = minute + 1000;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "6")
                            {
                                 if (balance>= 380)
                                {
                                    balance = balance - 380;
                                    minute = minute + 2000;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "4")
                        {
                            system ("cls");
                            voice_night ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 3)
                                {
                                    balance = balance - 3;
                                    minute = minute + 60;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 6)
                                {
                                    balance = balance - 6;
                                    minute = minute + 140;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }
                        }
                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                        } while (input == "#");

                    }
                    else if (input == "3")
                    {
                        do
                        {
                        internet ();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            internet_daily ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 3)
                                {
                                    balance = balance - 3;
                                    megabyte = megabyte + 35;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 5)
                                {
                                    balance = balance - 5;
                                    megabyte = megabyte + 75;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 12)
                                {
                                    balance = balance - 12;
                                    megabyte = megabyte + 200;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "4")
                            {
                                 if (balance>= 25)
                                {
                                    balance = balance - 25;
                                    megabyte = megabyte + 500;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            internet_weekly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 24)
                                {
                                    balance = balance - 24;
                                    megabyte = megabyte + 300;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 38)
                                {
                                    balance = balance - 38;
                                    megabyte = megabyte + 600 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 56)
                                {
                                    balance = balance - 56;
                                    megabyte = megabyte + 1 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " GB internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "3")
                        {
                            system ("cls");
                            internet_monthly ();
                            cin >> input ;
                            if (input == "1")
                            {
                                 if (balance>= 35)
                                {
                                    balance = balance - 35;
                                    megabyte = megabyte + 500 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 60)
                                {
                                    balance = balance - 60;
                                    megabyte = megabyte + 1;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " GB internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 105)
                                {
                                    balance = balance - 105;
                                    megabyte = megabyte + 2;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " GB internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "4")
                            {
                                 if (balance>= 200)
                                {
                                    balance = balance - 200;
                                    megabyte = megabyte + 4;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " GB internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "5")
                            {
                                 if (balance>= 420)
                                {
                                    balance = balance - 420;
                                    megabyte = megabyte + 10;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " GB internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "4")
                        {
                            system ("cls");
                            internet_night ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 3)
                                {
                                    balance = balance - 3;
                                    megabyte = megabyte + 70;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 5)
                                {
                                    balance = balance - 6;
                                    megabyte = megabyte + 160;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 7)
                                {
                                    balance = balance - 7;
                                    megabyte = megabyte + 300;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }
                        }
                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                        } while (input == "#");
                    }
                    else if (input == "4")
                    {
                        do
                        {
                        voice_plus_data ();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            voice_plus_data_daily ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 12)
                                {
                                    balance = balance - 3;
                                    minute = minute + 12;
                                    megabyte = megabyte + 160;
                                    message = message + 10 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << megabyte << " internet " << message << " sms packages  " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 33)
                                {
                                    balance = balance - 5;
                                    minute = minute + 28;
                                    megabyte = megabyte + 590;
                                    message = message + 10 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << megabyte << " internet " << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            voice_plus_data_weekly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 50)
                                {
                                    balance = balance - 50;
                                    minute = minute + 70;
                                    megabyte = megabyte + 590;
                                    message = message + 20 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << megabyte << " internet " << message << " sms packages " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 76)
                                {
                                    balance = balance - 20;
                                    minute = minute + 100;
                                    megabyte = megabyte + 1;
                                    message = message + 20 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << megabyte << " GB internet " << message << " sms packages " << endl;}
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "3")
                        {
                            system ("cls");
                            voice_plus_data_monthly ();
                            cin >> input ;
                            if (input == "1")
                            {
                                 if (balance>= 140)
                                {
                                    balance = balance - 140;
                                    minute = minute + 125;
                                    megabyte = megabyte + 2;
                                    message = message + 50 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << megabyte << "  GB internet " << message << " sms packages " << endl;
                                    }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 200)
                                {
                                    balance = balance - 200;
                                    minute = minute + 375;
                                    megabyte = megabyte + 2;
                                    message = message + 50 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << megabyte << "  GB internet " << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 1663)
                                {
                                    balance = balance - 1663;
                                    minute = minute + 1250;

                                    message = message + 10 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << " unlimited internet " << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }

                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                        } while (input == "#");
                    }
                    else if (input == "5")
                    {
                        do
                        {
                        flexi_pack ();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            flexi_pack_daily ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 15)
                                {
                                    balance = balance - 15;
                                    flexi = flexi + 390;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << flexi << " flexi packages  " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            flexi_pack_weekly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 50)
                                {
                                    balance = balance - 50;
                                    flexi = flexi + 1320;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " <<  flexi << " flexi packages " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "3")
                        {
                            system ("cls");
                            flexi_pack_monthly ();
                            cin >> input ;
                            if (input == "1")
                            {
                                 if (balance>= 100)
                                {
                                    flexi = flexi + 2280;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " <<  flexi << " flexi packages " << endl;
                                    }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                           else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }

                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                        } while (input == "#");
                    }
                    else if (input == "6")
                    {
                        do
                        {
                        unlimited_pre ();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            unlimited_pre_weekly ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 300)
                                {
                                    balance = balance - 300;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited premium Internet and sms packages  " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            unlimited_pre_monthly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 999)
                                {
                                    balance = balance - 999;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited voice packages " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if (input == "2")
                            {
                                 if (balance>= 999)
                                {
                                    balance = balance - 999;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited internet packages " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if (input == "3")
                            {
                                 if (balance>= 1700)
                                {
                                    balance = balance - 1700;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited voice and Internet packages " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if (input == "4")
                            {
                                 if (balance>= 2330)
                                {
                                    balance = balance - 2330;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited voice Internet and sms plus international 100 min and 50 sms " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                        } while (input == "#");
                    }
                    else if (input == "7")
                    {
                        do
                        {
                        long_validity ();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            long_validity_quarterly ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 650)
                                {
                                    balance = balance - 650;
                                    minute = minute + 555;
                                    megabyte = megabyte + 12;
                                    message = message + 150;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with" << minute << " voice " << megabyte << " GB internet " << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if (input == "2")
                            {
                                 if (balance>= 860 )
                                {
                                    balance = balance - 860;
                                    minute = minute + 1500;
                                    megabyte = megabyte + 12;
                                    message = message + 150;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with" << minute << " voice " << megabyte << " GB internet " << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                     else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if (input == "3")
                            {
                                 if (balance>= 2620)
                                {
                                    balance = balance - 2620;
                                    minute = minute + 555;

                                    message = message + 150;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with" << minute << " voice , unilimted internet " << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if (input == "4")
                            {
                                 if (balance>= 3470)
                                {
                                    balance = balance - 650;

                                    megabyte = megabyte + 12;
                                    message = message + 150;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited voice " << megabyte << " GB internet " << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if (input == "5")
                            {
                                 if (balance>= 4130)
                                {
                                    balance = balance - 650;


                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited voice , unlimited data and unlimited sms " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }
                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            long_validity_yearly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                if (balance>= 10200)
                                {
                                    balance = balance - 10200;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited voice, unlimited internet and unlimited sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if (input == "2")
                            {
                                 if (balance>= 5995)
                                {
                                    balance = balance - 5995;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited internet packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if (input == "3")
                            {
                                 if (balance>= 5995)
                                {
                                    balance = balance - 5995;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited Internet and sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");

                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }
                        }
                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                        } while (input == "#");
                    }
                    else if (input == "8")
                    {
                        do
                        {
                         international_call ();
                         cin >> input;
                         if (input == "1")
                          {
                                international_call_des_1 ();
                                cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            international_call_des_1_daily ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 29)
                                {
                                    balance = balance - 29;
                                    minute= minute + 5;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute packages  " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            international_call_des_1_weekly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 74)
                                {
                                    balance = balance - 74;
                                    minute = minute + 15;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " <<  minute << " minute packages " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "3")
                        {
                            system ("cls");
                            international_call_des_1_monthly ();
                            cin >> input ;
                            if (input == "1")
                            {
                                 if (balance>= 449)
                                {
                                    minute = minute + 150;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " <<  minute << " minute packages " << endl;
                                    }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                           else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }

                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                          }
                          else if (input == "2" )
                          {
                        international_call_des_2 ();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            international_call_des_2_daily ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 37)
                                {
                                    balance = balance - 37;
                                    minute = minute + 5;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute packages  " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            international_call_des_2_weekly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 104)
                                {
                                    balance = balance - 104;
                                    minute = minute + 15;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " <<  minute << " voice packages " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "3")
                        {
                            system ("cls");
                            international_call_des_2_monthly ();
                            cin >> input ;
                            if (input == "1")
                            {
                                 if (balance>= 999)
                                {
                                    minute = minute  + 150;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " <<  minute << " voice packages " << endl;
                                    }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                           else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }

                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }

                          }
                          else
                            cout << "Please insert valid number " << endl;

                        } while (input == "#");
                    }
                    else if (input == "9")
                    {
                        morning ();
                        cin >> input;

                            if (input == "1")
                            {
                                 if (balance>= 2)
                                {
                                    balance = balance - 2;
                                    minute = minute + 8;
                                    message = message + 5;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << message << "sms packages" << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if (input == "2")
                            {
                                if (balance>= 2)
                                {
                                    balance = balance - 2;
                                    megabyte = megabyte + 25;
                                    message = message + 5;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " MB internet" << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }

                            else
                                cout << "Please insert valid number " << endl;



                    }
                    else if (input == "10")
                    {

                        do
                        {
                        sms ();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            sms_daily ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 2)
                                {
                                    balance = balance - 2;
                                    message = message + 35;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " sms package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 3)
                                {
                                    balance = balance - 3;
                                    message = message + 55;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " sms package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 10)
                                {
                                    balance = balance - 5;
                                    message = message + 100;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " message package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            sms_weekly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 10)
                                {
                                    balance = balance - 10;
                                    message = message + 200 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " message package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 15)
                                {
                                    balance = balance - 15;
                                    message = message + 350;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " sms package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "3")
                        {
                            system ("cls");
                            sms_monthly ();
                            cin >> input ;
                            if (input == "1")
                            {
                                 if (balance>= 30)
                                {
                                    balance = balance - 30;
                                    message = message + 800;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " sms package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 50)
                                {
                                    balance = balance - 50;
                                    message = message + 1500 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " sms package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                        } while (input == "#");
                    }

                    } while (input == "*");

                }
                else if (number == 2)
                {
                    system ("cls");
                    do
                    {
                         unlimited_pack ();
                         cin >> input;

                    if (input=="1")
                    {
                       do
                       {
                        unlimited_pack_hourly ();
                        cin >> input;
                        if (input == "1")
                            {
                                 if (balance>= 12)
                                {
                                    balance = balance - 12;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with 1 hour Internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else
                                cout << " Please insert valid number " << endl;


                       } while ( input == "#");
                    }
                    else if (input == "2")
                    {

                        do
                       {
                        unlimited_pack_daily_Internet ();
                        cin >> input;
                        if (input == "1")
                            {
                                 if (balance>= 55)
                                {
                                    balance = balance - 55;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with 1 day Internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else
                                cout << " Please insert valid number " << endl;


                       } while ( input == "#");
                    }
                    else if (input == "3")
                    {

                        do
                       {
                        unlimited_pack_daily_voice ();
                        cin >> input;
                        if (input == "1")
                            {
                                 if (balance>= 35)
                                {
                                    balance = balance - 35;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with daily unlimited voice package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else
                                cout << " Please insert valid number " << endl;


                       } while ( input == "#");

                    }
                    else cout << "Please insert the correct value " << endl;
                    } while (input == "*");

                }
                else if (number == 3)
                {

                     do
                    {
                        system ("cls");
                        asham_tele ();
                    cin >> input;
                    if (input == "1")
                    {
                        asham_tele_registration ();
                        cin >> input;
                    }
                    else if (input == "2")
                    {
                        asham_tele_point_transfer ();
                        cin >> input;
                    }
                    else if (input == "3")
                    {
                        asham_tele_point_redeem ();
                        cin >> input;
                    }
                    else if (input == "4")
                    {
                        asham_tele_query_point ();
                        cin >> input;
                    }
                    else if (input == "5")
                    {
                        asham_tele_query_remaining ();
                        cin >> input;
                    }
                    else cout << "Please insert the correct value " << endl;
                    } while (input == "*");
                }
                else if (number == 4)
                {
                     additional_services ();
                    cin >> input;
                }
                else if (number == 5)
                {
                     do
                    {
                        system ("cls");
                     language_change ();
                    cin >> input;
                    if (input == "1")
                    {
                        language_change_amharic ();
                        cin >> input;
                    }
                    else if (input == "2")
                    {
                        language_change_english ();
                        cin >> input;
                    }
                    else if (input == "3")
                    {
                        language_change_afaan_oromoo ();
                        cin >> input;
                    }
                    else if (input == "4")
                    {
                        language_change_tigrigna ();
                        cin >> input;
                    }
                    else if (input == "5")
                    {
                        language_change_somali ();
                        cin >> input;
                    }
                    else cout << "Please insert the valid input " << endl;
                    } while (input == "*");
                }
                else if (number == 6)
                {

                     do
                    {
                        system ("cls");
                     my_service ();
                    cin >> input;
                    if (input == "1")
                    {
                        my_service_unsubscribe ();
                        cin >> input;
                    }
                    else if (input == "2")
                    {
                        my_service_transfer ();
                        cin >> input;
                    }
                    else if (input == "3")
                    {
                        my_service_convert ();
                        cin >> input;
                    }
                    } while (input == "*");
                }
            }
            while (input == "**");
            }
            else if (major_input == 2)
            {

                    cout << "Please insert the mobile number to which you wanted to send the package 'as 09--------' : " ;
                    cin >> mobile_number;
                    cout << "please verify the mobile number you entered " << mobile_number << endl;
                    cout << " 1. continue " << endl;
                    cout << " 2. change number " << endl;
                    cin >> input;
                    if (input == "1")
                    {
                        do
            {
                system ("cls");
                welcome ();
                cin >> number;
                if (number == 1)
                {

                    do
                    {
                      system ("cls");
                      packages ();
                    cin >> input;
                    if (input == "1")
                    {

                           one_birr();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 1)
                                {
                                    balance = balance - 1;
                                    minute = minute + 4;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if (input == "2")
                            {
                                if (balance>= 1)
                                {
                                    balance = balance - 1;
                                    megabyte = megabyte + 20;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " MB internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "3")
                            {
                                if (balance>= 1)
                                {
                                    balance = balance - 1;
                                    message = message + 50;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " sms package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else
                                cout << "Please insert valid number " << endl;


                    }
                    else if (input == "2")
                    {
                        do
                        {
                        voice();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            voice_daily ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 3)
                                {
                                    balance = balance - 3;
                                    minute = minute + 12;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 5)
                                {
                                    balance = balance - 5;
                                    minute = minute + 20;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 10)
                                {
                                    balance = balance - 10;
                                    minute = minute + 45;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            voice_weekly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 15)
                                {
                                    balance = balance - 15;
                                    minute = minute + 70;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 20)
                                {
                                    balance = balance - 20;
                                    minute = minute + 100;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 25)
                                {
                                    balance = balance - 25;
                                    minute = minute + 130;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "3")
                        {
                            system ("cls");
                            voice_monthly ();
                            cin >> input ;
                            if (input == "1")
                            {
                                 if (balance>= 35)
                                {
                                    balance = balance - 35;
                                    minute = minute + 125;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 50)
                                {
                                    balance = balance - 50;
                                    minute = minute + 185;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 95)
                                {
                                    balance = balance - 95;
                                    minute = minute + 375;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "4")
                            {
                                 if (balance>= 120)
                                {
                                    balance = balance - 120;
                                    minute = minute + 500;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "5")
                            {
                                 if (balance>= 200)
                                {
                                    balance = balance - 200;
                                    minute = minute + 1000;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "6")
                            {
                                 if (balance>= 380)
                                {
                                    balance = balance - 380;
                                    minute = minute + 2000;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "4")
                        {
                            system ("cls");
                            voice_night ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 3)
                                {
                                    balance = balance - 3;
                                    minute = minute + 60;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 6)
                                {
                                    balance = balance - 6;
                                    minute = minute + 140;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }
                        }
                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                        } while (input == "#");

                    }
                    else if (input == "3")
                    {
                        do
                        {
                        internet ();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            internet_daily ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 3)
                                {
                                    balance = balance - 3;
                                    megabyte = megabyte + 35;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 5)
                                {
                                    balance = balance - 5;
                                    megabyte = megabyte + 75;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 12)
                                {
                                    balance = balance - 12;
                                    megabyte = megabyte + 200;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "4")
                            {
                                 if (balance>= 25)
                                {
                                    balance = balance - 25;
                                    megabyte = megabyte + 500;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            internet_weekly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 24)
                                {
                                    balance = balance - 24;
                                    megabyte = megabyte + 300;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 38)
                                {
                                    balance = balance - 38;
                                    megabyte = megabyte + 600 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 56)
                                {
                                    balance = balance - 56;
                                    megabyte = megabyte + 1 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " GB internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "3")
                        {
                            system ("cls");
                            internet_monthly ();
                            cin >> input ;
                            if (input == "1")
                            {
                                 if (balance>= 35)
                                {
                                    balance = balance - 35;
                                    megabyte = megabyte + 500 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 60)
                                {
                                    balance = balance - 60;
                                    megabyte = megabyte + 1;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " GB internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 105)
                                {
                                    balance = balance - 105;
                                    megabyte = megabyte + 2;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " GB internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "4")
                            {
                                 if (balance>= 200)
                                {
                                    balance = balance - 200;
                                    megabyte = megabyte + 4;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " GB internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "5")
                            {
                                 if (balance>= 420)
                                {
                                    balance = balance - 420;
                                    megabyte = megabyte + 10;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " GB internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "4")
                        {
                            system ("cls");
                            internet_night ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 3)
                                {
                                    balance = balance - 3;
                                    megabyte = megabyte + 70;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 5)
                                {
                                    balance = balance - 6;
                                    megabyte = megabyte + 160;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 7)
                                {
                                    balance = balance - 7;
                                    megabyte = megabyte + 300;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }
                        }
                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                        } while (input == "#");
                    }
                    else if (input == "4")
                    {
                        do
                        {
                        voice_plus_data ();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            voice_plus_data_daily ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 12)
                                {
                                    balance = balance - 3;
                                    minute = minute + 12;
                                    megabyte = megabyte + 160;
                                    message = message + 10 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << megabyte << " internet " << message << " sms packages  " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 33)
                                {
                                    balance = balance - 5;
                                    minute = minute + 28;
                                    megabyte = megabyte + 590;
                                    message = message + 10 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << megabyte << " internet " << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            voice_plus_data_weekly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 50)
                                {
                                    balance = balance - 50;
                                    minute = minute + 70;
                                    megabyte = megabyte + 590;
                                    message = message + 20 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << megabyte << " internet " << message << " sms packages " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 76)
                                {
                                    balance = balance - 20;
                                    minute = minute + 100;
                                    megabyte = megabyte + 1;
                                    message = message + 20 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << megabyte << " GB internet " << message << " sms packages " << endl;}
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "3")
                        {
                            system ("cls");
                            voice_plus_data_monthly ();
                            cin >> input ;
                            if (input == "1")
                            {
                                 if (balance>= 140)
                                {
                                    balance = balance - 140;
                                    minute = minute + 125;
                                    megabyte = megabyte + 2;
                                    message = message + 50 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << megabyte << "  GB internet " << message << " sms packages " << endl;
                                    }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 200)
                                {
                                    balance = balance - 200;
                                    minute = minute + 375;
                                    megabyte = megabyte + 2;
                                    message = message + 50 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << megabyte << "  GB internet " << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 1663)
                                {
                                    balance = balance - 1663;
                                    minute = minute + 1250;

                                    message = message + 10 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << " unlimited internet " << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }

                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                        } while (input == "#");
                    }
                    else if (input == "5")
                    {
                        do
                        {
                        flexi_pack ();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            flexi_pack_daily ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 15)
                                {
                                    balance = balance - 15;
                                    flexi = flexi + 390;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << flexi << " flexi packages  " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            flexi_pack_weekly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 50)
                                {
                                    balance = balance - 50;
                                    flexi = flexi + 1320;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " <<  flexi << " flexi packages " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "3")
                        {
                            system ("cls");
                            flexi_pack_monthly ();
                            cin >> input ;
                            if (input == "1")
                            {
                                 if (balance>= 100)
                                {
                                    flexi = flexi + 2280;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " <<  flexi << " flexi packages " << endl;
                                    }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                           else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }

                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                        } while (input == "#");
                    }
                    else if (input == "6")
                    {
                        do
                        {
                        unlimited_pre ();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            unlimited_pre_weekly ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 300)
                                {
                                    balance = balance - 300;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited premium Internet and sms packages  " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            unlimited_pre_monthly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 999)
                                {
                                    balance = balance - 999;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited voice packages " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if (input == "2")
                            {
                                 if (balance>= 999)
                                {
                                    balance = balance - 999;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited internet packages " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if (input == "3")
                            {
                                 if (balance>= 1700)
                                {
                                    balance = balance - 1700;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited voice and Internet packages " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if (input == "4")
                            {
                                 if (balance>= 2330)
                                {
                                    balance = balance - 2330;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited voice Internet and sms plus international 100 min and 50 sms " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                        } while (input == "#");
                    }
                    else if (input == "7")
                    {
                        do
                        {
                        long_validity ();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            long_validity_quarterly ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 650)
                                {
                                    balance = balance - 650;
                                    minute = minute + 555;
                                    megabyte = megabyte + 12;
                                    message = message + 150;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with" << minute << " voice " << megabyte << " GB internet " << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if (input == "2")
                            {
                                 if (balance>= 860 )
                                {
                                    balance = balance - 860;
                                    minute = minute + 1500;
                                    megabyte = megabyte + 12;
                                    message = message + 150;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with" << minute << " voice " << megabyte << " GB internet " << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                     else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if (input == "3")
                            {
                                 if (balance>= 2620)
                                {
                                    balance = balance - 2620;
                                    minute = minute + 555;

                                    message = message + 150;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with" << minute << " voice , unilimted internet " << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if (input == "4")
                            {
                                 if (balance>= 3470)
                                {
                                    balance = balance - 650;

                                    megabyte = megabyte + 12;
                                    message = message + 150;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited voice " << megabyte << " GB internet " << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if (input == "5")
                            {
                                 if (balance>= 4130)
                                {
                                    balance = balance - 650;


                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited voice , unlimited data and unlimited sms " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }
                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            long_validity_yearly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                if (balance>= 10200)
                                {
                                    balance = balance - 10200;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited voice, unlimited internet and unlimited sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if (input == "2")
                            {
                                 if (balance>= 5995)
                                {
                                    balance = balance - 5995;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited internet packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if (input == "3")
                            {
                                 if (balance>= 5995)
                                {
                                    balance = balance - 5995;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited Internet and sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");

                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }
                        }
                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                        } while (input == "#");
                    }
                    else if (input == "8")
                    {
                        do
                        {
                         international_call ();
                         cin >> input;
                         if (input == "1")
                          {
                                international_call_des_1 ();
                                cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            international_call_des_1_daily ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 29)
                                {
                                    balance = balance - 29;
                                    minute= minute + 5;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute packages  " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            international_call_des_1_weekly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 74)
                                {
                                    balance = balance - 74;
                                    minute = minute + 15;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " <<  minute << " minute packages " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "3")
                        {
                            system ("cls");
                            international_call_des_1_monthly ();
                            cin >> input ;
                            if (input == "1")
                            {
                                 if (balance>= 449)
                                {
                                    minute = minute + 150;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " <<  minute << " minute packages " << endl;
                                    }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                           else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }

                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                          }
                          else if (input == "2" )
                          {
                        international_call_des_2 ();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            international_call_des_2_daily ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 37)
                                {
                                    balance = balance - 37;
                                    minute = minute + 5;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute packages  " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            international_call_des_2_weekly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 104)
                                {
                                    balance = balance - 104;
                                    minute = minute + 15;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " <<  minute << " voice packages " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "3")
                        {
                            system ("cls");
                            international_call_des_2_monthly ();
                            cin >> input ;
                            if (input == "1")
                            {
                                 if (balance>= 999)
                                {
                                    minute = minute  + 150;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " <<  minute << " voice packages " << endl;
                                    }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                           else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }

                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }

                          }
                          else
                            cout << "Please insert valid number " << endl;

                        } while (input == "#");
                    }
                    else if (input == "9")
                    {
                        morning ();
                        cin >> input;

                            if (input == "1")
                            {
                                 if (balance>= 2)
                                {
                                    balance = balance - 2;
                                    minute = minute + 8;
                                    message = message + 5;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << message << "sms packages" << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if (input == "2")
                            {
                                if (balance>= 2)
                                {
                                    balance = balance - 2;
                                    megabyte = megabyte + 25;
                                    message = message + 5;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " MB internet" << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }

                            else
                                cout << "Please insert valid number " << endl;



                    }
                    else if (input == "10")
                    {

                        do
                        {
                        sms ();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            sms_daily ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 2)
                                {
                                    balance = balance - 2;
                                    message = message + 35;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " sms package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 3)
                                {
                                    balance = balance - 3;
                                    message = message + 55;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " sms package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 10)
                                {
                                    balance = balance - 5;
                                    message = message + 100;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " message package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            sms_weekly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 10)
                                {
                                    balance = balance - 10;
                                    message = message + 200 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " message package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 15)
                                {
                                    balance = balance - 15;
                                    message = message + 350;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " sms package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "3")
                        {
                            system ("cls");
                            sms_monthly ();
                            cin >> input ;
                            if (input == "1")
                            {
                                 if (balance>= 30)
                                {
                                    balance = balance - 30;
                                    message = message + 800;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " sms package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 50)
                                {
                                    balance = balance - 50;
                                    message = message + 1500 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " sms package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                        } while (input == "#");
                    }

                    } while (input == "*");

                }
                else if (number == 2)
                {
                    system ("cls");
                    do
                    {
                         unlimited_pack ();
                         cin >> input;

                    if (input=="1")
                    {
                       do
                       {
                        unlimited_pack_hourly ();
                        cin >> input;
                        if (input == "1")
                            {
                                 if (balance>= 12)
                                {
                                    balance = balance - 12;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with 1 hour Internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else
                                cout << " Please insert valid number " << endl;


                       } while ( input == "#");
                    }
                    else if (input == "2")
                    {

                        do
                       {
                        unlimited_pack_daily_Internet ();
                        cin >> input;
                        if (input == "1")
                            {
                                 if (balance>= 55)
                                {
                                    balance = balance - 55;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with 1 day Internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else
                                cout << " Please insert valid number " << endl;


                       } while ( input == "#");
                    }
                    else if (input == "3")
                    {

                        do
                       {
                        unlimited_pack_daily_voice ();
                        cin >> input;
                        if (input == "1")
                            {
                                 if (balance>= 35)
                                {
                                    balance = balance - 35;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with daily unlimited voice package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else
                                cout << " Please insert valid number " << endl;


                       } while ( input == "#");

                    }
                    else cout << "Please insert the correct value " << endl;
                    } while (input == "*");

                }
                else if (number == 3)
                {

                     do
                    {
                        system ("cls");
                        asham_tele ();
                    cin >> input;
                    if (input == "1")
                    {
                        asham_tele_registration ();
                        cin >> input;
                    }
                    else if (input == "2")
                    {
                        asham_tele_point_transfer ();
                        cin >> input;
                    }
                    else if (input == "3")
                    {
                        asham_tele_point_redeem ();
                        cin >> input;
                    }
                    else if (input == "4")
                    {
                        asham_tele_query_point ();
                        cin >> input;
                    }
                    else if (input == "5")
                    {
                        asham_tele_query_remaining ();
                        cin >> input;
                    }
                    else cout << "Please insert the correct value " << endl;
                    } while (input == "*");
                }
                else if (number == 4)
                {
                     additional_services ();
                    cin >> input;
                }
                else if (number == 5)
                {
                     do
                    {
                        system ("cls");
                     language_change ();
                    cin >> input;
                    if (input == "1")
                    {
                        language_change_amharic ();
                        cin >> input;
                    }
                    else if (input == "2")
                    {
                        language_change_english ();
                        cin >> input;
                    }
                    else if (input == "3")
                    {
                        language_change_afaan_oromoo ();
                        cin >> input;
                    }
                    else if (input == "4")
                    {
                        language_change_tigrigna ();
                        cin >> input;
                    }
                    else if (input == "5")
                    {
                        language_change_somali ();
                        cin >> input;
                    }
                    else cout << "Please insert the valid input " << endl;
                    } while (input == "*");
                }
                else if (number == 6)
                {

                     do
                    {
                        system ("cls");
                     my_service ();
                    cin >> input;
                    if (input == "1")
                    {
                        my_service_unsubscribe ();
                        cin >> input;
                    }
                    else if (input == "2")
                    {
                        my_service_transfer ();
                        cin >> input;
                    }
                    else if (input == "3")
                    {
                        my_service_convert ();
                        cin >> input;
                    }
                    } while (input == "*");
                }
            }
            while (input == "**");
                    }
                    else if ( input == "2")
                    {
                        cout << "Please re enter the mobile number to which you want to send package as '09--------': ";
                        cin >> mobile_number;
                        cout << "This" << mobile_number << "is the mobile number to which you are going to send package " << endl;
                        do
            {
                system ("cls");
                welcome ();
                cin >> number;
                if (number == 1)
                {

                    do
                    {
                      system ("cls");
                      packages ();
                    cin >> input;
                    if (input == "1")
                    {

                           one_birr();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 1)
                                {
                                    balance = balance - 1;
                                    minute = minute + 4;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if (input == "2")
                            {
                                if (balance>= 1)
                                {
                                    balance = balance - 1;
                                    megabyte = megabyte + 20;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " MB internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "3")
                            {
                                if (balance>= 1)
                                {
                                    balance = balance - 1;
                                    message = message + 50;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " sms package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else
                                cout << "Please insert valid number " << endl;


                    }
                    else if (input == "2")
                    {
                        do
                        {
                        voice();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            voice_daily ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 3)
                                {
                                    balance = balance - 3;
                                    minute = minute + 12;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 5)
                                {
                                    balance = balance - 5;
                                    minute = minute + 20;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 10)
                                {
                                    balance = balance - 10;
                                    minute = minute + 45;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            voice_weekly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 15)
                                {
                                    balance = balance - 15;
                                    minute = minute + 70;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 20)
                                {
                                    balance = balance - 20;
                                    minute = minute + 100;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 25)
                                {
                                    balance = balance - 25;
                                    minute = minute + 130;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "3")
                        {
                            system ("cls");
                            voice_monthly ();
                            cin >> input ;
                            if (input == "1")
                            {
                                 if (balance>= 35)
                                {
                                    balance = balance - 35;
                                    minute = minute + 125;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 50)
                                {
                                    balance = balance - 50;
                                    minute = minute + 185;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 95)
                                {
                                    balance = balance - 95;
                                    minute = minute + 375;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "4")
                            {
                                 if (balance>= 120)
                                {
                                    balance = balance - 120;
                                    minute = minute + 500;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "5")
                            {
                                 if (balance>= 200)
                                {
                                    balance = balance - 200;
                                    minute = minute + 1000;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "6")
                            {
                                 if (balance>= 380)
                                {
                                    balance = balance - 380;
                                    minute = minute + 2000;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "4")
                        {
                            system ("cls");
                            voice_night ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 3)
                                {
                                    balance = balance - 3;
                                    minute = minute + 60;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 6)
                                {
                                    balance = balance - 6;
                                    minute = minute + 140;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }
                        }
                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                        } while (input == "#");

                    }
                    else if (input == "3")
                    {
                        do
                        {
                        internet ();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            internet_daily ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 3)
                                {
                                    balance = balance - 3;
                                    megabyte = megabyte + 35;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 5)
                                {
                                    balance = balance - 5;
                                    megabyte = megabyte + 75;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 12)
                                {
                                    balance = balance - 12;
                                    megabyte = megabyte + 200;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "4")
                            {
                                 if (balance>= 25)
                                {
                                    balance = balance - 25;
                                    megabyte = megabyte + 500;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            internet_weekly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 24)
                                {
                                    balance = balance - 24;
                                    megabyte = megabyte + 300;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 38)
                                {
                                    balance = balance - 38;
                                    megabyte = megabyte + 600 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 56)
                                {
                                    balance = balance - 56;
                                    megabyte = megabyte + 1 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " GB internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "3")
                        {
                            system ("cls");
                            internet_monthly ();
                            cin >> input ;
                            if (input == "1")
                            {
                                 if (balance>= 35)
                                {
                                    balance = balance - 35;
                                    megabyte = megabyte + 500 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 60)
                                {
                                    balance = balance - 60;
                                    megabyte = megabyte + 1;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " GB internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 105)
                                {
                                    balance = balance - 105;
                                    megabyte = megabyte + 2;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " GB internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "4")
                            {
                                 if (balance>= 200)
                                {
                                    balance = balance - 200;
                                    megabyte = megabyte + 4;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " GB internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "5")
                            {
                                 if (balance>= 420)
                                {
                                    balance = balance - 420;
                                    megabyte = megabyte + 10;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " GB internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "4")
                        {
                            system ("cls");
                            internet_night ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 3)
                                {
                                    balance = balance - 3;
                                    megabyte = megabyte + 70;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 5)
                                {
                                    balance = balance - 6;
                                    megabyte = megabyte + 160;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 7)
                                {
                                    balance = balance - 7;
                                    megabyte = megabyte + 300;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }
                        }
                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                        } while (input == "#");
                    }
                    else if (input == "4")
                    {
                        do
                        {
                        voice_plus_data ();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            voice_plus_data_daily ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 12)
                                {
                                    balance = balance - 3;
                                    minute = minute + 12;
                                    megabyte = megabyte + 160;
                                    message = message + 10 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << megabyte << " internet " << message << " sms packages  " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 33)
                                {
                                    balance = balance - 5;
                                    minute = minute + 28;
                                    megabyte = megabyte + 590;
                                    message = message + 10 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << megabyte << " internet " << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            voice_plus_data_weekly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 50)
                                {
                                    balance = balance - 50;
                                    minute = minute + 70;
                                    megabyte = megabyte + 590;
                                    message = message + 20 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << megabyte << " internet " << message << " sms packages " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 76)
                                {
                                    balance = balance - 20;
                                    minute = minute + 100;
                                    megabyte = megabyte + 1;
                                    message = message + 20 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << megabyte << " GB internet " << message << " sms packages " << endl;}
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "3")
                        {
                            system ("cls");
                            voice_plus_data_monthly ();
                            cin >> input ;
                            if (input == "1")
                            {
                                 if (balance>= 140)
                                {
                                    balance = balance - 140;
                                    minute = minute + 125;
                                    megabyte = megabyte + 2;
                                    message = message + 50 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << megabyte << "  GB internet " << message << " sms packages " << endl;
                                    }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 200)
                                {
                                    balance = balance - 200;
                                    minute = minute + 375;
                                    megabyte = megabyte + 2;
                                    message = message + 50 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << megabyte << "  GB internet " << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 1663)
                                {
                                    balance = balance - 1663;
                                    minute = minute + 1250;

                                    message = message + 10 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << " unlimited internet " << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }

                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                        } while (input == "#");
                    }
                    else if (input == "5")
                    {
                        do
                        {
                        flexi_pack ();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            flexi_pack_daily ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 15)
                                {
                                    balance = balance - 15;
                                    flexi = flexi + 390;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << flexi << " flexi packages  " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            flexi_pack_weekly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 50)
                                {
                                    balance = balance - 50;
                                    flexi = flexi + 1320;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " <<  flexi << " flexi packages " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "3")
                        {
                            system ("cls");
                            flexi_pack_monthly ();
                            cin >> input ;
                            if (input == "1")
                            {
                                 if (balance>= 100)
                                {
                                    flexi = flexi + 2280;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " <<  flexi << " flexi packages " << endl;
                                    }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                           else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }

                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                        } while (input == "#");
                    }
                    else if (input == "6")
                    {
                        do
                        {
                        unlimited_pre ();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            unlimited_pre_weekly ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 300)
                                {
                                    balance = balance - 300;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited premium Internet and sms packages  " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            unlimited_pre_monthly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 999)
                                {
                                    balance = balance - 999;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited voice packages " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if (input == "2")
                            {
                                 if (balance>= 999)
                                {
                                    balance = balance - 999;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited internet packages " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if (input == "3")
                            {
                                 if (balance>= 1700)
                                {
                                    balance = balance - 1700;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited voice and Internet packages " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if (input == "4")
                            {
                                 if (balance>= 2330)
                                {
                                    balance = balance - 2330;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited voice Internet and sms plus international 100 min and 50 sms " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                        } while (input == "#");
                    }
                    else if (input == "7")
                    {
                        do
                        {
                        long_validity ();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            long_validity_quarterly ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 650)
                                {
                                    balance = balance - 650;
                                    minute = minute + 555;
                                    megabyte = megabyte + 12;
                                    message = message + 150;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with" << minute << " voice " << megabyte << " GB internet " << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if (input == "2")
                            {
                                 if (balance>= 860 )
                                {
                                    balance = balance - 860;
                                    minute = minute + 1500;
                                    megabyte = megabyte + 12;
                                    message = message + 150;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with" << minute << " voice " << megabyte << " GB internet " << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                     else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if (input == "3")
                            {
                                 if (balance>= 2620)
                                {
                                    balance = balance - 2620;
                                    minute = minute + 555;

                                    message = message + 150;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with" << minute << " voice , unilimted internet " << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if (input == "4")
                            {
                                 if (balance>= 3470)
                                {
                                    balance = balance - 650;

                                    megabyte = megabyte + 12;
                                    message = message + 150;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited voice " << megabyte << " GB internet " << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if (input == "5")
                            {
                                 if (balance>= 4130)
                                {
                                    balance = balance - 650;


                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited voice , unlimited data and unlimited sms " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }
                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            long_validity_yearly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                if (balance>= 10200)
                                {
                                    balance = balance - 10200;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited voice, unlimited internet and unlimited sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if (input == "2")
                            {
                                 if (balance>= 5995)
                                {
                                    balance = balance - 5995;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited internet packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if (input == "3")
                            {
                                 if (balance>= 5995)
                                {
                                    balance = balance - 5995;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with unlimited Internet and sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");

                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }
                        }
                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                        } while (input == "#");
                    }
                    else if (input == "8")
                    {
                        do
                        {
                         international_call ();
                         cin >> input;
                         if (input == "1")
                          {
                                international_call_des_1 ();
                                cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            international_call_des_1_daily ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 29)
                                {
                                    balance = balance - 29;
                                    minute= minute + 5;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute packages  " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            international_call_des_1_weekly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 74)
                                {
                                    balance = balance - 74;
                                    minute = minute + 15;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " <<  minute << " minute packages " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "3")
                        {
                            system ("cls");
                            international_call_des_1_monthly ();
                            cin >> input ;
                            if (input == "1")
                            {
                                 if (balance>= 449)
                                {
                                    minute = minute + 150;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " <<  minute << " minute packages " << endl;
                                    }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                           else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }

                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                          }
                          else if (input == "2" )
                          {
                        international_call_des_2 ();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            international_call_des_2_daily ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 37)
                                {
                                    balance = balance - 37;
                                    minute = minute + 5;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute packages  " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }

                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            international_call_des_2_weekly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 104)
                                {
                                    balance = balance - 104;
                                    minute = minute + 15;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " <<  minute << " voice packages " << endl;   }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "3")
                        {
                            system ("cls");
                            international_call_des_2_monthly ();
                            cin >> input ;
                            if (input == "1")
                            {
                                 if (balance>= 999)
                                {
                                    minute = minute  + 150;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " <<  minute << " voice packages " << endl;
                                    }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                           else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }

                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }

                          }
                          else
                            cout << "Please insert valid number " << endl;

                        } while (input == "#");
                    }
                    else if (input == "9")
                    {
                        morning ();
                        cin >> input;

                            if (input == "1")
                            {
                                 if (balance>= 2)
                                {
                                    balance = balance - 2;
                                    minute = minute + 8;
                                    message = message + 5;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << minute << " minute " << message << "sms packages" << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if (input == "2")
                            {
                                if (balance>= 2)
                                {
                                    balance = balance - 2;
                                    megabyte = megabyte + 25;
                                    message = message + 5;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << megabyte << " MB internet" << message << " sms packages " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }

                            else
                                cout << "Please insert valid number " << endl;



                    }
                    else if (input == "10")
                    {

                        do
                        {
                        sms ();
                        cin >> input;
                        if (input == "1")
                        {
                            system ("cls");
                            sms_daily ();
                            cin >> input;
                            if (input == "1")
                            {
                                 if (balance>= 2)
                                {
                                    balance = balance - 2;
                                    message = message + 35;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " sms package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 3)
                                {
                                    balance = balance - 3;
                                    message = message + 55;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " sms package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else if ( input == "3")
                            {
                                 if (balance>= 10)
                                {
                                    balance = balance - 5;
                                    message = message + 100;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " message package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "2")
                        {
                            system ("cls");
                            sms_weekly ();
                            cin >> input ;
                             if (input == "1")
                            {
                                 if (balance>= 10)
                                {
                                    balance = balance - 10;
                                    message = message + 200 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " message package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 15)
                                {
                                    balance = balance - 15;
                                    message = message + 350;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " sms package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else if ( input == "3")
                        {
                            system ("cls");
                            sms_monthly ();
                            cin >> input ;
                            if (input == "1")
                            {
                                 if (balance>= 30)
                                {
                                    balance = balance - 30;
                                    message = message + 800;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " sms package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else if ( input == "2")
                            {
                                 if (balance>= 50)
                                {
                                    balance = balance - 50;
                                    message = message + 1500 ;
                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with " << message << " sms package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }
                            }
                            else
                            {
                            cout << "Please insert the valid number " << endl;
                            }

                        }
                        else
                        {
                            cout << "Please insert valid number " << endl;
                        }
                        } while (input == "#");
                    }

                    } while (input == "*");

                }
                else if (number == 2)
                {
                    system ("cls");
                    do
                    {
                         unlimited_pack ();
                         cin >> input;

                    if (input=="1")
                    {
                       do
                       {
                        unlimited_pack_hourly ();
                        cin >> input;
                        if (input == "1")
                            {
                                 if (balance>= 12)
                                {
                                    balance = balance - 12;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with 1 hour Internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else
                                cout << " Please insert valid number " << endl;


                       } while ( input == "#");
                    }
                    else if (input == "2")
                    {

                        do
                       {
                        unlimited_pack_daily_Internet ();
                        cin >> input;
                        if (input == "1")
                            {
                                 if (balance>= 55)
                                {
                                    balance = balance - 55;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with 1 day Internet package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else
                                cout << " Please insert valid number " << endl;


                       } while ( input == "#");
                    }
                    else if (input == "3")
                    {

                        do
                       {
                        unlimited_pack_daily_voice ();
                        cin >> input;
                        if (input == "1")
                            {
                                 if (balance>= 35)
                                {
                                    balance = balance - 35;

                                    cout << "Dear customer you have successfully bought the package " << endl;
                                    cout << "Your current balance is " << balance << " with daily unlimited voice package " << endl;
                                }
                                else
                                {
                                    system ("cls");
                                    empty_balance ();
                                    cin >> debt_number;
                                    if (debt_number == "*810#")
                                    {
                                        if (debt==0)
                                        {
                                            cout << "Please insert the amount of money you want to debt " << endl;
                                            cin >> debt;
                                            balance = balance+debt;
                                            cout << "type * to get back to the previous page " << endl;
                                            cout << " type ** to get back to the main page " << endl;
                                            cin >> input;
                                        }
                                        else
                                        {
                                            cout << "Please pay your current debt " << endl;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Please recharge and come back later " << endl;
                                    }
                                }

                            }
                            else
                                cout << " Please insert valid number " << endl;


                       } while ( input == "#");

                    }
                    else cout << "Please insert the correct value " << endl;
                    } while (input == "*");

                }
                else if (number == 3)
                {

                     do
                    {
                        system ("cls");
                        asham_tele ();
                    cin >> input;
                    if (input == "1")
                    {
                        asham_tele_registration ();
                        cin >> input;
                    }
                    else if (input == "2")
                    {
                        asham_tele_point_transfer ();
                        cin >> input;
                    }
                    else if (input == "3")
                    {
                        asham_tele_point_redeem ();
                        cin >> input;
                    }
                    else if (input == "4")
                    {
                        asham_tele_query_point ();
                        cin >> input;
                    }
                    else if (input == "5")
                    {
                        asham_tele_query_remaining ();
                        cin >> input;
                    }
                    else cout << "Please insert the correct value " << endl;
                    } while (input == "*");
                }
                else if (number == 4)
                {
                     additional_services ();
                    cin >> input;
                }
                else if (number == 5)
                {
                     do
                    {
                        system ("cls");
                     language_change ();
                    cin >> input;
                    if (input == "1")
                    {
                        language_change_amharic ();
                        cin >> input;
                    }
                    else if (input == "2")
                    {
                        language_change_english ();
                        cin >> input;
                    }
                    else if (input == "3")
                    {
                        language_change_afaan_oromoo ();
                        cin >> input;
                    }
                    else if (input == "4")
                    {
                        language_change_tigrigna ();
                        cin >> input;
                    }
                    else if (input == "5")
                    {
                        language_change_somali ();
                        cin >> input;
                    }
                    else cout << "Please insert the valid input " << endl;
                    } while (input == "*");
                }
                else if (number == 6)
                {

                     do
                    {
                        system ("cls");
                     my_service ();
                    cin >> input;
                    if (input == "1")
                    {
                        my_service_unsubscribe ();
                        cin >> input;
                    }
                    else if (input == "2")
                    {
                        my_service_transfer ();
                        cin >> input;
                    }
                    else if (input == "3")
                    {
                        my_service_convert ();
                        cin >> input;
                    }
                    } while (input == "*");
                }
            }
            while (input == "**");

                    }
                    else
                        cout << "you inserted invalid number " << endl;

            }
            else cout << "please insert the valid input " << endl;

        }
    else
        cout << "Please check the number you have called and the comma sign " << endl;

}











































