/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <itunesstored/itunesstored-Structs.h>
@class NSString, NSData;

@interface XPCClient : NSObject {

	NSString* _clientID;
	NSData* _auditTokenData;
	NSString* _clientVersion;
	int _pid;
	NSString* _userAgent;
	NSString* _clientIDHeader;

}

@property (readonly) NSData * auditTokenData; 
@property (readonly) NSString * clientID; 
@property (readonly) NSString * clientVersion; 
@property (readonly) NSString * clientIDHeader;              //@synthesize clientIDHeader=_clientIDHeader - In the implementation block
@property (readonly) NSString * userAgent; 
+(id)clientIDForConnection:(id)arg1 ;
+(id)_copyExecutablePathForConnection:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithConnection:(id)arg1 ;
-(NSString *)clientID;
-(NSString *)userAgent;
-(id)initWithApplicationID:(id)arg1 ;
-(NSString *)clientVersion;
-(NSData *)auditTokenData;
-(void)_setPropertiesUsingBundle:(CFBundleRef)arg1 ;
-(void)_setupUserAgent;
-(void)addClientEntityToDatabase:(id)arg1 ;
-(NSString *)clientIDHeader;
@end

