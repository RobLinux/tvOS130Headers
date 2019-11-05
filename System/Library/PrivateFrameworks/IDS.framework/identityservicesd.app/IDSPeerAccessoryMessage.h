/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSPeerMessage.h>
#import <identityservicesd/NSCopying.h>

@class NSData;

@interface IDSPeerAccessoryMessage : IDSPeerMessage <NSCopying> {

	NSData* _accessToken;

}

@property (copy) NSData * accessToken;              //@synthesize accessToken=_accessToken - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)messageBody;
-(id)requiredKeys;
-(void)setAccessToken:(NSData *)arg1 ;
-(NSData *)accessToken;
@end

