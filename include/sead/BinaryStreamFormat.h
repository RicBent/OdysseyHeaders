#pragma once

namespace sead { namespace BinaryStreamFormat {

readU8(sead::StreamSrc*, sead::Endian::Types);
readU16(sead::StreamSrc*, sead::Endian::Types);
readU32(sead::StreamSrc*, sead::Endian::Types);
readU64(sead::StreamSrc*, sead::Endian::Types);
readS8(sead::StreamSrc*, sead::Endian::Types);
readS16(sead::StreamSrc*, sead::Endian::Types);
readS32(sead::StreamSrc*, sead::Endian::Types);
readS64(sead::StreamSrc*, sead::Endian::Types);
readF32(sead::StreamSrc*, sead::Endian::Types);
readBit(sead::StreamSrc*, void*, unsigned int);
readString(sead::StreamSrc*, sead::BufferedSafeStringBase<char>*, unsigned int);
readMemBlock(sead::StreamSrc*, void*, unsigned int);
writeU8(sead::StreamSrc*, sead::Endian::Types, unsigned char);
writeU16(sead::StreamSrc*, sead::Endian::Types, unsigned short);
writeU32(sead::StreamSrc*, sead::Endian::Types, unsigned int);
writeU64(sead::StreamSrc*, sead::Endian::Types, unsigned long);
writeS8(sead::StreamSrc*, sead::Endian::Types, signed char);
writeS16(sead::StreamSrc*, sead::Endian::Types, short);
writeS32(sead::StreamSrc*, sead::Endian::Types, int);
writeS64(sead::StreamSrc*, sead::Endian::Types, long);
writeF32(sead::StreamSrc*, sead::Endian::Types, float);
writeBit(sead::StreamSrc*, void const*, unsigned int);
writeString(sead::StreamSrc*, sead::SafeStringBase<char> const&, unsigned int);
writeMemBlock(sead::StreamSrc*, void const*, unsigned int);
rewind(sead::StreamSrc*);
skip(sead::StreamSrc*, unsigned int);
writeDecorationText(sead::StreamSrc*, sead::SafeStringBase<char> const&);
writeNullChar(sead::StreamSrc*);
flush(sead::StreamSrc*);

} } 
