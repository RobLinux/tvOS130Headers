/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Security.framework/XPCServices/TrustedPeersHelper.xpc/TrustedPeersHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrustedPeersHelper/TrustedPeersHelper-Structs.h>
#import <TrustedPeersHelper/CKKSBaseAESSIVKey.h>

@interface CKKSAESSIVKey : CKKSBaseAESSIVKey
+(id)randomKey:(id*)arg1 ;
-(id)init;
-(id)initWithBytes:(char*)arg1 len:(unsigned long long)arg2 ;
-(id)initWithBase64:(id)arg1 ;
-(id)wrapAESKey:(id)arg1 error:(id*)arg2 ;
-(id)unwrapAESKey:(id)arg1 error:(id*)arg2 ;
-(id)encryptData:(id)arg1 authenticatedData:(id)arg2 error:(id*)arg3 ;
-(id)decryptData:(id)arg1 authenticatedData:(id)arg2 error:(id*)arg3 ;
-(BOOL)doSIV:(const ccmode_siv*)arg1 nonce:(id)arg2 text:(id)arg3 buffer:(char*)arg4 bufferLength:(unsigned long long)arg5 authenticatedData:(id)arg6 error:(id*)arg7 ;
@end

