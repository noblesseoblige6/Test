#pragma once

using namespace acLib;
using namespace acLib::DX12;
using namespace std;

class RenderPassForward : public RenderPass
{
public:
    RenderPassForward( ID3D12Device* pDevice );
    ~RenderPassForward();

    virtual void Construct( ID3D12Device* pDevice );

    virtual shared_ptr<DescriptorHeap> CreateDescHeap( ID3D12Device* pDevice );
    virtual shared_ptr<RootSignature> CreateRootSinature( ID3D12Device* pDevice );
    virtual shared_ptr<PipelineState> CreatePipelineState( ID3D12Device* pDevice, shared_ptr<RootSignature> pRootSignature, shared_ptr<Node> pNode = nullptr );
};
