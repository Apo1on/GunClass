// author: Евгений Афанасьев

#include "GunClass.h"
#include <iostream>
#include <string>
using namespace std;

// стандартные значения
        GunClass::GunClass()
        {
            Name = "Standart";
            Damage = 10;
            ArmorPenetration = 3;
            EffectiveRange = 50;
        }
        // Выводит всю информацию ввиде строки
        string GunClass::ToString() const
        {

        }
        // Установка Названия
        void GunClass::SetName(int a)
        {

        }
        // Установка Урона
        void GunClass::SetDamage(int a)
        {

        }
        // Установка БронеПробитие
        void GunClass::SetArmorPenetration(string a)
        {

        }
        // Установка Эффективной зоны
        void GunClass::SetEffectiveRange(char a)
        {

        }
        // возврат значения имени
        string GunClass::GetName() const
        {

        }
        // возврат значения Урона
        int GunClass::GetDamage() const
        {

        }
        // возврат значения БронеПробитие
        int GunClass::GetArmorPenetration() const
        {

        }
        // возврат значения Эффективной зоны
        int GunClass::GetEffectiveRange() const
        {

        }
        