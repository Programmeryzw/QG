#include "Basic.hlsli"

// ÏñËØ×ÅÉ«Æ÷(2D)
float4 PS_2D(VertexPosHTex pIn) : SV_Target
{
	g_Tex1.Sample(g_SamLinear1, pIn.Tex);
    return g_Tex.Sample(g_SamLinear, pIn.Tex);
}