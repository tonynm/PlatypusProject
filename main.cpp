#include <iostream>
#include <stdlib.h>
#include "Platypus.h"

using namespace std;


int main()
{
    Platypus Tony;
    Platypus TonyM('M',1.0,0,'M');
    Platypus Tony1('F',1.0,0,'R');
    Platypus Tony2('F',0.0,0,'R');
    Platypus Newborn('F',0.0,0,'R');
    int reply;
    int reply2;
    int reply3;
    int looper = 0;
    short increment = 0;
    while(looper == 0)
    {
        cout << "What would you like to do? Please select one of the numbers:\n"
        << "1. Make a new Platypus\n" << "2. Print the stats of a Platypus\n" << "3. Age a Platypus\n"
        << "4. Choose two Platypuses to fight each other\n" << "5. Feed a Platypus\n" << "6. Hatch a newborn Platypus\n" << "7. Quit the simulator\n" << endl;
        cin >> reply;
        cout << endl;

        if(reply == 1) /** Option 1: Allows the user to make a new Platypus **/
        {
            if(Tony2.getWeight() != 0.0)
            {
                cerr << "Too many Platypuses created\n" << endl;
            }
            else if(Tony2.getWeight() == 0.0)
            {
                Tony2.read(cin,cout);
                cout << endl;
            }
        }

        else if(reply == 2) /** Option 2: Prints the stats of the five Platypuses: default constructor, explicit-value constructors, the newborn Platypus, and the user made Platypus **/
        {
            cout << "Which Platypus's stats would you like to view? Please select one of the numbers:\n"
            << "1. The default Platypus that is dead\n";

            if(Tony1.getAlive() == false && TonyM.getAlive() == true && Newborn.getAlive() == true) /** Male = alive; Female = dead; Newborn = alive **/
            {
                cout << "2. The default male Platypus that is alive\n" << "3. The default female Platypus that is alive (Now dead)\n"
                << "4. The newborn Platypus\n" << "5. The Platypus you created\n" << endl;
            }
            else if(Tony1.getAlive() == false && TonyM.getAlive() == true && Newborn.getAlive() == false) /** Male = alive; Female = dead; Newborn = dead **/
            {
                cout << "2. The default male Platypus that is alive\n" << "3. The default female Platypus that is alive (Now dead)\n"
                << "4. The newborn Platypus (Now dead)\n" << "5. The Platypus you created\n" << endl;
            }
            else if(Tony1.getAlive() == false && TonyM.getAlive() == false && Newborn.getAlive() == false) /** Male = dead; Female = dead; Newborn = dead **/
            {
                cout << "2. The default male Platypus that is alive (Now dead)\n" << "3. The default female Platypus that is alive (Now dead)\n"
                << "4. The newborn Platypus (Now dead)\n" << "5. The Platypus you created\n" << endl;
            }
            else if(Tony1.getAlive() == true && TonyM.getAlive() == false && Newborn.getAlive() == true) /** Male = dead; Female = alive; Newborn = alive **/
            {
                cout << "2. The default male Platypus that is alive (Now dead)\n" << "3. The default female Platypus that is alive\n"
                << "4. The newborn Platypus\n" << "5. The Platypus you created\n" << endl;
            }
            else if(Tony1.getAlive() == true && TonyM.getAlive() == false && Newborn.getAlive() == false) /** Male = dead; Female = alive; Newborn = dead **/
            {
                cout << "2. The default male Platypus that is alive (Now dead)\n" << "3. The default female Platypus that is alive\n"
                << "4. The newborn Platypus (Now dead)\n" << "5. The Platypus you created\n" << endl;
            }
            else if(Tony1.getAlive() == true && TonyM.getAlive() == true && Newborn.getAlive() == true) /** Male = alive; Female = alive; Newborn = alive **/
            {
                cout << "2. The default male Platypus that is alive\n" << "3. The default female Platypus that is alive\n"
                << "4. The newborn Platypus\n" << "5. The Platypus you created\n" << endl;
            }
            else if(Tony1.getAlive() == true && TonyM.getAlive() == true && Newborn.getAlive() == false) /** Male = alive; Female = alive; Newborn = dead **/
            {
                cout << "2. The default male Platypus that is alive\n" << "3. The default female Platypus that is alive\n"
                << "4. The newborn Platypus (Now dead)\n" << "5. The Platypus you created\n" << endl;
            }
            else if(Tony1.getAlive() == false && TonyM.getAlive() == false && Newborn.getAlive() == true) /** Male = dead; Female = dead; Newborn = alive **/
            {
                cout << "2. The default male Platypus that is alive (Now dead)\n" << "3. The default female Platypus that is alive (Now dead)\n"
                << "4. The newborn Platypus (Now dead)\n" << "5. The Platypus you created\n" << endl;
            }

            cin >> reply2;
            cout << endl;

            if(reply2 == 1) /** Displays default constructor Platypus **/
            {
                cout << Tony << endl;
                cout << endl;
            }
            else if(reply2 == 2) /** Displays the explicit-value constructor male Platypus **/
            {
                cout << TonyM << endl;
                cout << endl;
            }
            else if(reply2 == 3) /** Displays the explicit-value constructor female Platypus **/
            {
                cout << Tony1 << endl;
                cout << endl;
            }
            else if(reply2 == 4) /** Displays the newborn Platypus **/
            {
                if(Newborn.getWeight() == 0.0)
                {
                    cout << "You have not hatched a Platypus yet" << endl;
                    cout << endl;
                }
                else
                {
                    cout << Newborn << endl;
                    cout << endl;
                }
            }
            else if(reply2 == 5) /** Displays the user made Platypus **/
            {
                if(Tony2.getWeight() == 0.0)
                {
                    cout << "You have not created a Platypus yet" << endl;
                    cout << endl;
                }
                else
                {
                    cout << Tony2 << endl;
                    cout << endl;
                }
            }
            else
            {
                cout << "Invalid input number\n" << endl;
            }

        }

        else if(reply == 3) /** Option 3: Increases the age of one of the four available Platypuses by a user inputted value **/
        {
            cout << "***WARNING***\n" << "***AGING A PLATYPUS HAS THE CHANCE FOR IT TO DIE AND FOR IT TO BECOME MUTATED***\n\n" << "Which Platypus would you like to age?\n"
            << "1. The default Platypus that is dead\n";

            if(Tony1.getAlive() == false && TonyM.getAlive() == true && Newborn.getAlive() == true) /** Male = alive; Female = dead; Newborn = alive **/
            {
                cout << "2. The default male Platypus that is alive\n" << "3. The default female Platypus that is alive (Now dead)\n"
                << "4. The newborn Platypus\n" << "5. The Platypus you created\n" << endl;
            }
            else if(Tony1.getAlive() == false && TonyM.getAlive() == true && Newborn.getAlive() == false) /** Male = alive; Female = dead; Newborn = dead **/
            {
                cout << "2. The default male Platypus that is alive\n" << "3. The default female Platypus that is alive (Now dead)\n"
                << "4. The newborn Platypus (Now dead)\n" << "5. The Platypus you created\n" << endl;
            }
            else if(Tony1.getAlive() == false && TonyM.getAlive() == false && Newborn.getAlive() == false) /** Male = dead; Female = dead; Newborn = dead **/
            {
                cout << "2. The default male Platypus that is alive (Now dead)\n" << "3. The default female Platypus that is alive (Now dead)\n"
                << "4. The newborn Platypus (Now dead)\n" << "5. The Platypus you created\n" << endl;
            }
            else if(Tony1.getAlive() == true && TonyM.getAlive() == false && Newborn.getAlive() == true) /** Male = dead; Female = alive; Newborn = alive **/
            {
                cout << "2. The default male Platypus that is alive (Now dead)\n" << "3. The default female Platypus that is alive\n"
                << "4. The newborn Platypus\n" << "5. The Platypus you created\n" << endl;
            }
            else if(Tony1.getAlive() == true && TonyM.getAlive() == false && Newborn.getAlive() == false) /** Male = dead; Female = alive; Newborn = dead **/
            {
                cout << "2. The default male Platypus that is alive (Now dead)\n" << "3. The default female Platypus that is alive\n"
                << "4. The newborn Platypus (Now dead)\n" << "5. The Platypus you created\n" << endl;
            }
            else if(Tony1.getAlive() == true && TonyM.getAlive() == true && Newborn.getAlive() == true) /** Male = alive; Female = alive; Newborn = alive **/
            {
                cout << "2. The default male Platypus that is alive\n" << "3. The default female Platypus that is alive\n"
                << "4. The newborn Platypus\n" << "5. The Platypus you created\n" << endl;
            }
            else if(Tony1.getAlive() == true && TonyM.getAlive() == true && Newborn.getAlive() == false) /** Male = alive; Female = alive; Newborn = dead **/
            {
                cout << "2. The default male Platypus that is alive\n" << "3. The default female Platypus that is alive\n"
                << "4. The newborn Platypus (Now dead)\n" << "5. The Platypus you created\n" << endl;
            }
            else if(Tony1.getAlive() == false && TonyM.getAlive() == false && Newborn.getAlive() == true) /** Male = dead; Female = dead; Newborn = alive **/
            {
                cout << "2. The default male Platypus that is alive (Now dead)\n" << "3. The default female Platypus that is alive (Now dead)\n"
                << "4. The newborn Platypus (Now dead)\n" << "5. The Platypus you created\n" << endl;
            }

            cin >> reply2;
            cout << endl;
            if(reply2 == 1) /** Age the default constructor Platypus **/
            {
                cout << "How much would you like to age it by? (Aging by months)\n" << endl;
                cin >> increment;
                cout << endl;
                Tony.age_me(increment);
            }
            else if(reply2 == 2) /** Age the explicit-value constructor male Platypus **/
            {
                cout << "How much would you like to age it by? (Aging by months\n" << endl;
                cin >> increment;
                cout << endl;
                TonyM.age_me(increment);
            }
            else if(reply2 == 3) /** Age the explicit-value constructor female Platypus **/
            {
                cout << "How much would you like to age it by? (Aging by months)\n" << endl;
                cin >> increment;
                cout << endl;
                Tony1.age_me(increment);
            }
            else if(reply2 == 4) /** Age the newborn Platypus **/
            {
                if(Newborn.getWeight() == 0.0)
                {
                    cout << "You have not hatched a newborn Platypus yet" << endl;
                    cout << endl;
                }
                else
                {
                    cout << "How much would you like to age it by? (Aging by months)\n" << endl;
                    cin >> increment;
                    cout << endl;
                    Newborn.age_me(increment);
                }
            }
            else if(reply2 == 5) /** Age the user made Platypus **/
            {
                if(Tony2.getWeight() == 0.0)
                {
                    cout << "You have not created a Platypus yet" << endl;
                }
                else
                {
                    cout << "How much would you like to age it by? (Aging by months)\n" << endl;
                    cin >> increment;
                    cout << endl;
                    Tony2.age_me(increment);
                }
            }
            else
            {
                cout << "Invalid input number\n" << endl;
            }

        }

        else if(reply == 4) /** Option 4: Make two Platypuses fight **/
        {
            cout << "Choose a Platypus as the first combatant\n" << "1. Default male Platypus\n"
            << "2. Default female Platypus\n" << "3. Newborn Platypus\n" << "4. The Platypus you made\n" << endl;
            cin >> reply2;
            cout << endl;
            if(reply2 == 1) /** Chooses the explicit-value constructor male Platypus as the first combatant **/
            {
                if(TonyM.getAlive() == true) /** Checks to see if the explicit-value constructor male Platypus is alive **/
                {
                    cout << "Choose another Platypus as the second combatant\n" << "1. Default female Platypus\n"
                    << "2. Newborn Platypus\n" << "3. The Platypus you made\n" << endl;
                    cin >> reply3;
                    cout << endl;
                    if(reply3 == 1) /** Chooses the explicit-value constructor female Platypus as the second combatant **/
                    {
                        if(Tony1.getAlive() == true) /** Checks to see if the second combatant is alive **/
                        {
                            TonyM.fight(Tony1);
                        }
                        else
                        {
                            cout << Tony1.getName() << " is dead. She can't fight. \n" << endl;
                        }

                    }
                    else if(reply3 == 2) /** Chooses the newborn Platypus as the second combatant **/
                    {
                        if(Newborn.getAlive() == true)
                        {
                            if(Newborn.getWeight() != 0.0)
                            {
                                TonyM.fight(Newborn);
                            }
                            else if(Newborn.getWeight() == 0.0)
                            {
                                cout << Newborn.getName() << "You have not hatched a newborn Platypus yet\n" << endl;
                            }
                        }
                        else
                        {
                            cout << Newborn.getName() << " is dead. It can't fight.\n" << endl;
                        }
                    }
                    else if(reply3 == 3) /** Chooses the user made Platypus as the second combatant **/
                    {
                        if(Tony2.getAlive() == true) /** Checks to see if the second combatant is alive **/
                        {
                            if(Tony2.getWeight() != 0.0)
                            {
                                TonyM.fight(Tony2);
                            }
                            else if(Tony2.getWeight() == 0.0)
                            {
                                cout << "You have not created a Platypus yet\n" << endl;
                            }
                        }
                        else
                        {
                            cout << Tony2.getName() << " is dead. He or she can't fight.\n" << endl;
                        }
                    }
                }
                else
                {
                    cout << TonyM.getName() << " is dead. He can't fight.\n" << endl;
                }
            }
            else if(reply2 == 2) /** Chooses the explicit-value constructor female Platypus as the first combatant **/
            {
                if(Tony1.getAlive() == true) /** Checks to see if the explicit-value constructor female Platypus is alive **/
                {
                    cout << "Choose another Platypus as the second combatant\n" << "1. Default male Platypus\n"
                    << "2. The newborn Platypus\n" << "3. The Platypus you made\n" << endl;
                    cin >> reply3;
                    cout << endl;
                    if(reply3 == 1) /** Chooses the explicit-value constructor male Platypus as the second combatant **/
                    {
                        if(TonyM.getAlive() == true) /** Checks to see if the second combatant is alive **/
                        {
                            Tony1.fight(TonyM);
                        }
                        else
                        {
                            cout << TonyM.getName() << " is dead. He can't fight.\n" << endl;
                        }

                    }
                    else if(reply3 == 2) /** Chooses the newborn Platypus as the second combatant **/
                    {
                        if(Newborn.getAlive() == true)
                        {
                            if(Newborn.getWeight() != 0.0)
                            {
                                Tony1.fight(Newborn);
                            }
                            else
                            {
                                cout << Newborn.getName() << "You have not hatched a newborn Platypus yet\n" << endl;
                            }
                        }
                        else
                        {
                            cout << Newborn.getName() << " is dead. He can't fight.\n" << endl;
                        }
                    }
                    else if(reply3 == 3) /** Chooses the user made Platypus as the second combatant **/
                    {
                        if(Tony2.getAlive() == true) /** Checks to see if the second combatant is alive **/
                        {
                            if(Tony2.getWeight() != 0.0)
                            {
                                Tony1.fight(Tony2);
                            }
                            else
                            {
                                cout << "You have not created a Platypus yet\n" << endl;
                            }
                        }
                        else
                        {
                            cout << Tony2.getName() << " is dead. He or she can't fight.\n" << endl;
                        }
                    }
                }
                else
                {
                    cout << Tony1.getName() << " is dead. She can't fight.\n" << endl;
                }
            }
            else if(reply2 == 3) /** Chooses the newborn Platypus as the first combatant **/
            {
                if(Newborn.getWeight() != 0.0)
                {
                    if(Newborn.getAlive() == true)
                    {
                        cout << "Choose another Platypus as the second combatant\n" << "1. Default male Platypus\n"
                        << "2. Default female Platypus\n" << "3. The Platypus you made\n" << endl;
                        cin >> reply3;
                        cout << endl;
                        if(reply3 == 1) /** Chooses the explicit-value constructor male Platypus as the second combatant **/
                        {
                            if(TonyM.getAlive() == true) /** Checks to see if the second combatant is alive **/
                            {
                                Newborn.fight(TonyM);
                            }
                            else
                            {
                                cout << TonyM.getName() << " is dead. He can't fight.\n" << endl;
                            }
                        }
                        else if(reply3 == 2) /** Chooses the explicit-value constructor female constructor as the second combatant **/
                        {
                            if(Tony1.getAlive() == true) /** Checks to see if the second combatant is alive **/
                            {
                                Newborn.fight(Tony1);
                            }
                            else
                            {
                                cout << Tony1.getName() << " is dead. She can't fight.\n" << endl;
                            }
                        }
                        else if(reply3 == 3) /** Chooses the user made Platypus as the second combatant **/
                        {
                            if(Tony2.getAlive() == true) /** Checks to see if the second combatant is alive **/
                            {
                                if(Tony2.getWeight() != 0.0)
                                {
                                    Newborn.fight(Tony2);
                                }
                                else
                                {
                                    cout << "You have not created a Platypus yet\n" << endl;
                                }
                            }
                            else
                            {
                                cout << Tony2.getName() << " is dead. He or she can't fight.\n" << endl;
                            }
                        }
                        else
                        {
                            cout << "Invalid input number\n" << endl;
                        }
                    }
                    else
                    {
                        cout << Newborn.getName() << " is dead. He or she can't fight.\n" << endl;
                    }
                }
                else if(Newborn.getWeight() == 0.0)
                {
                    cout << "You have not hatched a newborn Platypus yet\n" << endl;
                }
            }
            else if(reply2 == 4) /** Chooses the user made Platypus as the first combatant **/
            {
                if(Tony2.getWeight() != 0.0)
                {
                    if(Tony2.getAlive() == true) /** Checks to see if the user made Platypus is alive **/
                    {
                        cout << "Choose another Platypus as the second combatant\n" << "1. Default male Platypus\n"
                        << "2. Default female Platypus\n" << "3. The newborn Platypus\n" << endl;
                        cin >> reply3;
                        cout << endl;
                        if(reply3 == 1) /** Chooses the explicit-value constructor male constructor as the second combatant **/
                        {
                            if(TonyM.getAlive() == true) /** Checks to see if the second combatant is alive **/
                            {
                                Tony2.fight(TonyM);
                            }
                            else
                            {
                                cout << TonyM.getName() << " is dead. He can't fight.\n" << endl;
                            }
                        }
                        else if(reply3 == 2) /** Chooses the explicit-value constructor female constructor as the second combatant **/
                        {
                            if(Tony1.getAlive() == true) /** Checks to see if the second combatant is alive **/
                            {
                                Tony2.fight(Tony1);
                            }
                            else
                            {
                                cout << Tony1.getName() << " is dead. She can't fight.\n" << endl;
                            }
                        }
                        else if(reply3 == 3) /** Chooses the newborn Platypus as the second combatant **/
                        {
                            if(Newborn.getAlive() == true) /** Checks to see if the second combatant is alive **/
                            {
                                if(Newborn.getWeight() != 0.0)
                                {
                                    Tony2.fight(Newborn);
                                }
                                else if(Newborn.getWeight() == 0.0)
                                {
                                    cout << "You have not hatched a newborn Platypus yet\n" << endl;
                                }
                            }
                            else if(Newborn.getAlive() == false)
                            {
                                cout << Newborn.getName() << " is dead. It can't fight.\n" << endl;
                            }
                        }
                        else
                        {
                            cout << "Invalid input number\n" << endl;
                        }
                    }
                    else
                    {
                        cout << Tony2.getName() << " is dead. He or she can't fight.\n" << endl;
                    }
                }
                else if(Tony2.getWeight() == 0.0)
                {
                    cout << "You have not created a Platypus yet\n" << endl;
                }
            }
            else
            {
                cout << "Invalid input number\n" << endl;
            }
        }

        else if(reply == 5) /** Option 5: Feeds a Platypus **/
        {
            cout << "Choose a Platypus to feed\n" << "1. The default male Platypus\n" << "2. The default female Platypus\n"
            << "3. The newborn Platypus\n" << "4. The Platypus that you made\n" << endl;
            cin >> reply2;
            cout << endl;
            if(reply2 == 1)
            {
                if(TonyM.getAlive() == true)
                {
                    cout << "You have decided to feed the default male Platypus\n" << endl;
                    TonyM.eat();
                }
                else
                {
                    cout << "You have decided to feed the default male Platypus\n" << TonyM.getName()
                    << " is dead. A dead Platypus cannot eat.\n" << endl;
                }
            }
            else if(reply2 == 2)
            {
                if(Tony1.getAlive() == true)
                {
                    cout << "You have decided to feed the default female Platypus\n" << endl;
                    Tony1.eat();
                }
                else
                {
                    cout << "You have decided to feed the default female Platypus\n" << Tony1.getName()
                    << " is dead. A dead Platypus cannot eat.\n" << endl;
                }
            }
            else if(reply2 == 3)
            {
                if(Newborn.getAlive() == true)
                {
                    if(Newborn.getWeight() != 0.0)
                    {
                        cout << "You have decided to feed the newborn Platypus\n" << endl;
                        Newborn.eat();
                    }
                    else if(Tony2.getWeight() == 0.0)
                    {
                        cout << "You have not hatched a newborn Platypus yet\n" << endl;
                    }
                }
                else if(Newborn.getAlive() == false)
                {
                    cout << "You have decided to feed the newborn Platypus\n" << Newborn.getName()
                    << " is dead. A dead Platypus cannot eat. \n" << endl;
                }
            }
            else if(reply2 == 4)
            {
                if(Tony2.getAlive() == true)
                {
                    if(Tony2.getWeight() != 0.0)
                    {
                        cout << "You have decided to feed the Platypus you made\n" << endl;
                        Tony2.eat();
                    }
                    else if(Tony2.getWeight() == 0.0)
                    {
                        cout << "You have not created a Platypus yet\n" << endl;
                    }
                }
                else
                {
                    cout << "You have decided to feed the Platypus you made\n" << Tony2.getName()
                    << " is dead. A dead Platypus cannot eat.\n" << endl;
                }
            }

            else
            {
                cout << "Invalid input number\n" << endl;
            }

        }

        else if(reply == 6) /** Option 6: Hatch a newborn Platypus **/
        {
            Newborn.hatch();
        }

        else if(reply == 7) /** Option 7: Quits the simulator **/
        {
            cout << "Okay. Goodbye!\n" << endl;
            break;
        }
        else
        {
            cout << "Invalid input number\n" << endl;
        }

    }


    return 0;
}
