
#include "Human.hpp"

void                    Human::meleeAttack(std::string const & target)
{
        std::cout << "Melle Attack..\n" << target << " is on the ground\n";
}

void                    Human::rangedAttack(std::string const & target)
{
        std::cout << "Wait for me to get out muh bow and ar..aaAAAA\n" << target << " victorious.\n";
}

void                    Human::intimidatingShout(std::string const & target)
{
        std::cout << "Hey! You wanna hang out?\n" << target << " has gone into hiding to recover\n";
}

void            Human::action(std::string const & action_name, std::string const & target)
{
        std::string names[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
        void (Human::*func[])(std::string const&) = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
        int i;
        for (i = 0; i < 3; i++)
                if (names[i] == action_name)
                        break;
        if (i == 3)
                std::cout << "no attack found\n";
        else
                (this->*func[i])(target);
}



