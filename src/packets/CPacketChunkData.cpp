#include "packets/CPacketChunkData.hpp"

auto CPacketChunkData::GetData() -> std::vector<unsigned char>
{
    return std::vector<unsigned char>();
}
auto CPacketChunkData::FromPacketDecoder(PacketDecoder packet) -> void
{
}

auto CPacketChunkData::GetPacketId() -> int
{
    return EPacketNamePlayCB::ChunkData;
}