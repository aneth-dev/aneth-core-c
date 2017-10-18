#include "Number.h"

/*
@startuml
!include Object.c
namespace aeten {
	interface Number {
		+ long signedLongValue()
		+ int signedValue()
		+ unsigned unsignedValue()
		+ uint64_t unsignedLongValue()
		+ float floatValue()
		+ double doubleValue()
	}
}
@enduml
*/