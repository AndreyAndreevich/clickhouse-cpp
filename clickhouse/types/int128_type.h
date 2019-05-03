#pragma once

namespace clickhouse {

#ifdef _MSC_VER
using int128_t = int64_t;
#else
using int128_t = __int128;
#endif

}