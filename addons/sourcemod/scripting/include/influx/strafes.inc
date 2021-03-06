#if defined _influx_strafes_included
    #endinput
#endif
#define _influx_strafes_included


#define INFLUX_LIB_STRAFES          "influx_strafes"


native int Influx_GetClientStrafeCount( int client );


public SharedPlugin __pl_influx_strafes =
{
    name = INFLUX_LIB_STRAFES,
    file = INFLUX_LIB_STRAFES...".smx",
#if defined REQUIRE_PLUGIN
    required = 1
#else
    required = 0
#endif
};

#if !defined REQUIRE_PLUGIN
public void __pl_influx_strafes_SetNTVOptional()
{
    MarkNativeAsOptional( "Influx_GetClientStrafeCount" );
}
#endif