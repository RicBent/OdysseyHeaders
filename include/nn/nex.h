#pragma once

namespace nn { namespace nex {

_QLOG(nn::nex::EventLog::LogLevel, char const*, ...);
operator+(nn::nex::String const&, char const*);
operator<<(nn::nex::StringStream&, nn::nex::DateTime const&);
PrintErrorCode(nn::nex::EventLog::LogLevel, nn::nex::qResult, nn::nex::StringStream&);
operator+(char const*, nn::nex::String const&);
GetThreadName();
operator<<(nn::nex::StringStream&, nn::nex::qResult const&);
hex(nn::nex::StringStream&);
CopyStringHelper(char*, char const*, unsigned long);
CopyStringHelper(wchar_t*, wchar_t const*, unsigned long);
CopyStringHelper(wchar_t*, char const*, unsigned long);
CopyStringHelper(char*, wchar_t const*, unsigned long);
CopyStringHelper(char16_t*, char const*, unsigned long);
CopyStringHelper(char*, char16_t const*, unsigned long);
CopyStringWithAlloc(char**, char const*);
CopyStringWithAlloc(wchar_t**, char const*);
CopyStringWithAlloc(char**, wchar_t const*);
CopyStringWithAlloc(wchar_t**, wchar_t const*);
CopyStringWithAlloc(char16_t**, char const*);
CopyStringWithAlloc(char**, char16_t const*);
CopyStringWithAlloc(char16_t**, wchar_t const*);
CopyStringWithAlloc(wchar_t**, char16_t const*);
operator+(nn::nex::String const&, nn::nex::String const&);
operator<<(nn::nex::StringStream&, nn::nex::String const&);
Utf8ToUnicode(char const*, wchar_t*, unsigned long);
GetNeededWideCharBufferSize(char const*);
UnicodeToUtf8(wchar_t const*, char*, unsigned long);
GetNeededUtf8BufferSize(wchar_t const*);
Utf8ToUnicode(char const*, char16_t*, unsigned long);
UnicodeToUtf8(char16_t const*, char*, unsigned long);
GetNeededUtf8BufferSize(char16_t const*);
zerohex(nn::nex::StringStream&);
noshowbase(nn::nex::StringStream&);
dec(nn::nex::StringStream&);
endl(nn::nex::StringStream&);
showbase(nn::nex::StringStream&);
boolalpha(nn::nex::StringStream&);
noboolalpha(nn::nex::StringStream&);
operator<<(nn::nex::StringStream&, nn::nex::Time const&);
operator<<(nn::nex::StringStream&, nn::nex::Variant const&);
operator<<(nn::nex::StringStream&, nn::nex::SignatureBytes const&);
InvokeCallbackOnSuccess(nn::nex::CallContext*, nn::nex::UserContext const*);
InvokeCallbackOnCompletion(nn::nex::CallContext*, nn::nex::UserContext const*);
StrUpper(char*);
StrLower(char*);
StrDup(char const*);
StringSplit(nn::nex::String const&, char);
operator<<(nn::nex::StringStream&, nn::nex::HTTPURL const&);
operator<<(nn::nex::StringStream&, nn::nex::StationURL const&);
PacketHistoryChainPurge(nn::nex::qChain<nn::nex::Packet*, nn::nex::ChainPolicyHistoryPacket<nn::nex::Packet*> >*);
CalcSignatureAddressHelper(nn::nex::Packet const*, nn::nex::Stream::Type, nn::nex::SignatureBytes&);
CalcSignatureRandomHelper(nn::nex::SignatureBytes&, nn::nex::RandomNumberGenerator*, nn::nex::CriticalSection*);
PacketHistoryChainDequeue(nn::nex::qChain<nn::nex::Packet*, nn::nex::ChainPolicyHistoryPacket<nn::nex::Packet*> >*, nn::nex::qChain<nn::nex::Packet*, nn::nex::ChainPolicyHistoryPacket<nn::nex::Packet*> >::iterator);
PacketHistoryChainQueueFront(nn::nex::qChain<nn::nex::Packet*, nn::nex::ChainPolicyHistoryPacket<nn::nex::Packet*> >*, nn::nex::PacketOut*);
CreateBunldingStreamFromHistoryPacketQueue(nn::nex::qChain<nn::nex::Packet*, nn::nex::ChainPolicyHistoryPacket<nn::nex::Packet*> >*, nn::nex::PacketOut*, nn::nex::Time, unsigned long, nn::nex::ByteStream*, nn::nex::Stream::Type);
InsertToHistoryPacketQueue(nn::nex::qChain<nn::nex::Packet*, nn::nex::ChainPolicyHistoryPacket<nn::nex::Packet*> >*, nn::nex::PacketQueue*);
FindSubstringNoCase<char>(char const*, char const*, unsigned long);
operator<<(nn::nex::StringStream&, nn::nex::InetAddress const&);
operator<<(nn::nex::StringStream&, nn::nex::IOCompletionContext const&);
operator<<(nn::nex::StringStream&, nn::nex::Socket&);
GetNifmCurrentPrimalyIpAddress(nn::nex::InetAddress*);
CurlMallocCallback(unsigned long);
CurlFreeCallback(void*);
CurlReallocCallback(void*, unsigned long);
CurlCallocCallback(unsigned long, unsigned long);
CurlStrdupCallback(char const*);
CurlGlobalInitMem();
SigloNetInit();
CurlGlobalCleanup();
SigloNetTerm();
SigloNetIsConnected();
operator<<(nn::nex::StringStream&, nn::nex::NotificationEvent const&);
operator<<(nn::nex::StringStream&, nn::nex::UserMessage const&);
operator<<(nn::nex::StringStream&, nn::nex::MessageRecipient const&);
SecureStreamConnectionFilter(nn::nex::UserContext const&, nn::nex::Buffer*, nn::nex::Buffer*, nn::nex::EndPoint*);
g_ddlDataStore;
g_ddlOnlineCore;
g_ddlSTLExt;
g_ddlAuthenticationFoundation;
g_ddlHealthService;
g_ddlNintendoProtocolFoundation;
g_ddlProtocolFoundation;
g_ddlSecureConnectionService;
g_ddlAccountManagementService;
g_ddlRanking;
g_ddlUtility;
g_ddlNintendoAuthentication;

} } 