/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Security.framework/XPCServices/TrustedPeersHelper.xpc/TrustedPeersHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrustedPeersHelper/TrustedPeersHelper-Structs.h>
#import <TrustedPeersHelper/NSCopying.h>

@interface CKKSBaseAESSIVKey : NSObject <NSCopying> {

	unsigned char key[80];
	unsigned long long size;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithBytes:(char*)arg1 len:(unsigned long long)arg2 ;
-(id)initWithBase64:(id)arg1 ;
-(void)zeroKey;
@end

