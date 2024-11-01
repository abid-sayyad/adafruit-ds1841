// SPDX-License-Identifier: GPL-2.0-or-later
/*
 * Device driver for Maxim ds1841 digital poterntiometer I2C
 *
 * Datasheet: https://www.analog.com/en/products/ds1841
 *
 * DEVID	#Wipers		#Positions	Resistor Options (KOhm)
 * DS1841	1		128		3.7, 22
 */

#include <linux/module.h>
#include <linux/device.h>
#include <linux/kernel.h>
#include <linux/delay.h>
#include <linux/slab.h>
