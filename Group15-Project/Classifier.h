// PROG71030 - Final Project
// By: Sebastian Ibanez, Kiana Safavi Baygi

#include"Data.h"
#pragma once

using namespace std;

class Classifier
{
	virtual void testing() = 0;
	virtual void classify() = 0;
};