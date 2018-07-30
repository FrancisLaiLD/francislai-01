#include "hdr/UserProfileComponent.h"

UserProfileComponent::UserProfileComponent(QObject *parent) : QObject(parent)
{

}

int UserProfileComponent::id() const
{
    return m_id;
}

void UserProfileComponent::setId(int id)
{
    if(m_id != id)
    {
        m_id = id;
        emit idChanged();
    }
}

int UserProfileComponent::age() const
{
    return m_age;
}

void UserProfileComponent::setAge(int age)
{
    if (m_age != age)
    {
        m_age = age;
        emit ageChanged();
    }
}

QString UserProfileComponent::name() const
{
    return m_name;
}

void UserProfileComponent::setName(const QString &name)
{
    if (m_name != name)
    {
        m_name = name;
        emit nameChanged();
    }
}

QString UserProfileComponent::dob() const
{
    return m_dob;
}

void UserProfileComponent::setDob(const QString &dob)
{
    if (m_dob != dob)
    {
        m_dob = dob;
        emit dobChanged();
    }
}

QString UserProfileComponent::dateEstablish() const
{
    return m_dateEstablish;
}

void UserProfileComponent::setDateEstablish(const QString &dateEstablish)
{
    if (m_dateEstablish != dateEstablish)
    {
        m_dateEstablish = dateEstablish;
        emit dateEstablishChanged();
    }
}

QString UserProfileComponent::dateExpert() const
{
    return m_dateExpert;
}

void UserProfileComponent::setDateExpert(const QString &dateExpert)
{
    if (m_dateExpert != dateExpert)
    {
        m_dateExpert = dateExpert;
        emit dateExpertChanged();
    }
}

QString UserProfileComponent::password() const
{
    return m_password;
}

void UserProfileComponent::setPassword(const QString &password)
{
    if (m_password != password)
    {
        m_password = password;
        emit passwordChanged();
    }
}

QString UserProfileComponent::userIcon() const
{
    return m_userIcon;
}

void UserProfileComponent::setUserIcon(const QString &userIcon)
{
    if (m_userIcon != userIcon)
    {
        m_userIcon = userIcon;
        emit userIconChanged();
    }
}

bool UserProfileComponent::loginState() const
{
    return m_loginState;
}

void UserProfileComponent::setLoginState(bool loginState)
{
    if (m_loginState != loginState)
    {
        m_loginState = loginState;
        emit loginStateChanged();
    }
}