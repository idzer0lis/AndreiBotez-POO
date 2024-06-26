#pragma once

using namespace System;

ref class LoyaltyScheme
{
public:
    LoyaltyScheme();
    void EarnPointsOnAmount(double amountSpent);
    void RedeemPoints(int points);
    int GetPoints();

private:
    int totalPoints;
};
