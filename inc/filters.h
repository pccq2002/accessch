#ifndef __filters_h
#define __filters_h

typedef ULONG VERDICT, *PVERDICT;
#define VERDICT_NOT_FILTERED        0x0000
#define VERDICT_DENY                0x0001
#define VERDICT_ASK                 0x0002
#define VERDICT_CACHE1              0x0100

#include <pshpack8.h>

// send message communication  
typedef struct _REPLY_RESULT
{
    VERDICT             m_Flags;
} REPLY_RESULT, *PREPLY_RESULT;

#include <poppack.h>

#endif // __filters_h