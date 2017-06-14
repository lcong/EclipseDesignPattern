/*
 * HumanFactory.cpp
 *
 *  Created on: Jan 22, 2015
 *      Author: lcong
 */

#include "HumanFactory.h"
#include "Human.h"

CBlackHumanFactory::CBlackHumanFactory(void)
{
}

~CBlackHumanFactory::CBlackHumanFactory(void)
{
}

Human *CBlackHumanFactory::CreateHuman()
{
	return new CBlackHuman();

}

Human *CYelloHumanFactory::CreateHuman()
{
	return new CYellowHuman();

}

Human *CWhiteHumanFactory::CreateHuman()
{
	return new CWhiteHuman();

}

