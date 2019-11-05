/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/NSCopying.h>
#import <HomeKitDaemon/HMDTLVProtocol.h>

@class NSData, NSString;

@interface HMDNetworkRouterCredential : NSObject <NSCopying, HMDTLVProtocol> {

	NSData* _macAddress;
	NSData* _psk;

}

@property (nonatomic,retain) NSData * macAddress;                   //@synthesize macAddress=_macAddress - In the implementation block
@property (nonatomic,retain) NSData * psk;                          //@synthesize psk=_psk - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(NSData *)macAddress;
-(NSData *)psk;
-(void)setMacAddress:(NSData *)arg1 ;
-(void)setPsk:(NSData *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithMacAddress:(id)arg1 psk:(id)arg2 ;
@end

