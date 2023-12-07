// author: ������� ���������
#pragma once
#include <iostream>
#include <string>
using namespace std;


class GunClass {

private:
    string Name; // �������� ������
    int Damage;  // ���� 
    int ArmorPenetration; // �������� �����
    int EffectiveRange; // ����������� ��������� �����
public:
    // ����������� ��������
    GunClass();
    // ������� ��� ���������� ����� ������
    string ToString() const;
    // ��������� ��������
    void SetName(int a);
    // ��������� �����
    void SetDamage(int a);
    // ��������� �������������
    void SetArmorPenetration(string a);
    // ��������� ����������� ����
    void SetEffectiveRange(char a);
    // ������� �������� �����
    string GetName() const;
    // ������� �������� �����
    int GetDamage() const;
    // ������� �������� �������������
    int GetArmorPenetration() const;
    // ������� �������� ����������� ����
    int GetEffectiveRange() const;
};