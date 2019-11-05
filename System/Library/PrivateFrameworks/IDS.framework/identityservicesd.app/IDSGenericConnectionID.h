/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/NSCopying.h>

@class NSString;

@interface IDSGenericConnectionID : NSObject <NSCopying> {

	NSString* _account;
	NSString* _service;
	NSString* _name;
	unsigned long long _hash;

}

@property (nonatomic,copy,readonly) NSString * account;              //@synthesize account=_account - In the implementation block
@property (nonatomic,copy,readonly) NSString * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                 //@synthesize name=_name - In the implementation block
+(id)idWithAccount:(id)arg1 service:(id)arg2 name:(id)arg3 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)service;
-(NSString *)account;
-(id)initWithAccount:(id)arg1 service:(id)arg2 name:(id)arg3 ;
-(id)serviceConnectorServiceForAccount;
@end

