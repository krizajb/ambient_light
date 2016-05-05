#pragma once

#define RAINMETER	// Used mainly for debugging/reporting purpose

#define DELETE_AND_CLEAR(ptr) \
	if ( nullptr != ptr)  { delete ptr; ptr = nullptr; } \

#define UNUSED(ptr) (void) ptr;

const int NOT_SET_INT = -1;

// Serial communication parameters
const char Init( 'I' );
const char Share( 'S' );
const char Comma( ',' );
const char On( 'n' );
const char Off( 'f' );

// Brightness values
const int MIN = 0;
const int MAX = 255;
const double OFF = 0.0112;

// Status of the controller and led strip
enum Status
{
	UNDEFINED	= ( 1u << 0 ),	// Status undefined
	LED_OFF		= ( 1u << 1 ),	// Led strip is turned off 
	LED_ON		= ( 1u << 2 ),	// Led strip is turned on 
	DEVICE_OFF	= ( 1u << 3 ),	// Device is turned off 
	DEVICE_ON	= ( 1u << 4 ),	// Device is turned on 
};