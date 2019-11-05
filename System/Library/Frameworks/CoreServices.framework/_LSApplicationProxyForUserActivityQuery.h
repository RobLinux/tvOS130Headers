/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/_LSBundleQuery.h>

@class NSString;

@interface _LSApplicationProxyForUserActivityQuery : _LSBundleQuery {

	NSString* _domainName;
	NSString* _activityType;

}

@property (nonatomic,copy,readonly) NSString * domainName;                //@synthesize domainName=_domainName - In the implementation block
@property (nonatomic,copy,readonly) NSString * activityType;              //@synthesize activityType=_activityType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)queryWithActivityType:(id)arg1 ;
+(id)queryWithDomainName:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)activityType;
-(NSString *)domainName;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_requiresDatabaseMappingEntitlement;
@end

