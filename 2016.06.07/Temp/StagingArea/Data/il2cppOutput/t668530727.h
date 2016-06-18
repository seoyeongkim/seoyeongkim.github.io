#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3766580690;
struct Type_t;

#include "Type_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t668530727  : public Type_t
{
public:
	t3766580690 * f7;
	Type_t * f8;

public:
	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t668530727, f7)); }
	inline t3766580690 * fg7() const { return f7; }
	inline t3766580690 ** fag7() { return &f7; }
	inline void fs7(t3766580690 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t668530727, f8)); }
	inline Type_t * fg8() const { return f8; }
	inline Type_t ** fag8() { return &f8; }
	inline void fs8(Type_t * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
