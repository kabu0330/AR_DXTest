struct EngineVertex
{
	float4 POSITION : POSITION;
	float4 UV : TEXCOORD;
	float4 COLOR : COLOR;
};

struct VertexShaderOutPut
{
	float4 SVPOSITION : SV_POSITION; 
	float4 UV : TEXCOORD; 
	float4 COLOR : COLOR;
};

cbuffer FTransform : register(b0)
{
	float4 Scale;
	float4 Rotation;
	float4 Qut;
	float4 Location;
	
	float4 RelativeScale;
	float4 RelativeRotation;
	float4 RelativeQut;
	float4 RelativeLocation;

	float4 WorldScale;
	float4 WorldRotation;
	float4 WorldQuat;
	float4 WorldLocation;

	float4x4 ScaleMat;
	float4x4 RotationMat;
	float4x4 LocationMat;
	float4x4 RevolveMat;
	float4x4 ParentMat;
	float4x4 LocalWorld;
	float4x4 World;
	float4x4 View;
	float4x4 Projection;
	float4x4 WVP;
};

VertexShaderOutPut TileMap_VS(EngineVertex _Vertex)
{
	VertexShaderOutPut OutPut;
	
	OutPut.SVPOSITION = mul(_Vertex.POSITION, WVP);	
	OutPut.COLOR = _Vertex.COLOR;
	return OutPut;
}

cbuffer ResultColor : register(b0)
{
	float4 PlusColor;
	float4 MulColor;
};

float4 TileMap_PS(VertexShaderOutPut _Vertex) : SV_Target0
{
	//float4 Color = ImageTexture.Sample(ImageSampler, _Vertex.UV.xy);
	
	//if (0.0f >= Color.a)
	//{
	//	// �ȼ����̴����� �ƿ�ǲ ������ �ѱ��� �ʴ´�.
	//	clip(-1);
	//}
	
	//Color += PlusColor;
	//Color *= MulColor;
    return _Vertex.COLOR;
};
