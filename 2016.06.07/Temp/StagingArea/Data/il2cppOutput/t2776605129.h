#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2974286096;
struct t1366199518;

#include "t774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2776605129  : public t774292115
{
public:
	t2974286096* f2;
	t1366199518 * f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2776605129, f2)); }
	inline t2974286096* fg2() const { return f2; }
	inline t2974286096** fag2() { return &f2; }
	inline void fs2(t2974286096* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2776605129, f3)); }
	inline t1366199518 * fg3() const { return f3; }
	inline t1366199518 ** fag3() { return &f3; }
	inline void fs3(t1366199518 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
