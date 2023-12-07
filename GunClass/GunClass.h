// author: Евгений Афанасьев
#pragma once
#include <iostream>
#include <string>
using namespace std;


class GunClass {

private:
    string Name; // Название оружия
    int Damage;  // Урон 
    int ArmorPenetration; // Пробитие брони
    int EffectiveRange; // эффективная дистанция атаки
public:
    // стандартные значения
    GunClass();
    // Выводит всю информацию ввиде строки
    string ToString() const;
    // Установка Названия
    void SetName(int a);
    // Установка Урона
    void SetDamage(int a);
    // Установка БронеПробитие
    void SetArmorPenetration(string a);
    // Установка Эффективной зоны
    void SetEffectiveRange(char a);
    // возврат значения имени
    string GetName() const;
    // возврат значения Урона
    int GetDamage() const;
    // возврат значения БронеПробитие
    int GetArmorPenetration() const;
    // возврат значения Эффективной зоны
    int GetEffectiveRange() const;
};