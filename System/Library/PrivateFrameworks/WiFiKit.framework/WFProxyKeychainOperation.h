/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKit/WFOperation.h>

@class NSString;

@interface WFProxyKeychainOperation : WFOperation {

	NSString* _password;
	long long _type;
	NSString* _host;
	NSString* _username;
	NSString* _port;

}

@property (assign) long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * password;              //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * host;                  //@synthesize host=_host - In the implementation block
@property (nonatomic,copy) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * port;                  //@synthesize port=_port - In the implementation block
+(id)removePasswordOperationForHost:(id)arg1 port:(id)arg2 username:(id)arg3 ;
+(id)savePassswordOperationForHost:(id)arg1 port:(id)arg2 username:(id)arg3 password:(id)arg4 ;
+(id)getPasswordOperationForHost:(id)arg1 port:(id)arg2 username:(id)arg3 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)host;
-(NSString *)port;
-(NSString *)password;
-(void)start;
-(void)setPort:(NSString *)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(id)initWithHost:(id)arg1 port:(id)arg2 username:(id)arg3 password:(id)arg4 type:(long long)arg5 ;
-(id)_credentialsForProtectionSpace:(id)arg1 ;
@end

