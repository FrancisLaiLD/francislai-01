#include "hdr/WeatherComponent.h"

WeatherComponent::WeatherComponent(QObject *parent) : QObject(parent)
{

}

int WeatherComponent::proLocId() const
{
    return m_proLocId;
}

void WeatherComponent::setProLocId(int proLocId)
{
    if (m_proLocId != proLocId)
    {
        m_proLocId = proLocId;
        emit proLocIdChanged();
    }
}

QString WeatherComponent::proLocName() const
{
    return m_proLocName;
}

void WeatherComponent::setProLocName(const QString &proLocName)
{
    if (m_proLocName != proLocName)
    {
        m_proLocName = proLocName;
        emit proLocNameChanged();
    }
}

int WeatherComponent::proTemp() const
{
    return m_proTemp;
}

void WeatherComponent::setProTemp(int proTemp)
{
    if (m_proTemp != proTemp)
    {
        m_proTemp = proTemp;
        emit proTempChanged();
    }
}

int WeatherComponent::proWindVel() const
{
    return m_proWindVel;
}

void WeatherComponent::setProWindVel(int proWindVel)
{
    if (m_proWindVel != proWindVel)
    {
        m_proWindVel = proWindVel;
        emit proWindVelChanged();
    }
}

int WeatherComponent::proDry() const
{
    return m_proDry;
}

void WeatherComponent::setProDry(int proDry)
{
    if (m_proDry != proDry)
    {
        m_proDry = proDry;
        emit proDryChanged();
    }
}
