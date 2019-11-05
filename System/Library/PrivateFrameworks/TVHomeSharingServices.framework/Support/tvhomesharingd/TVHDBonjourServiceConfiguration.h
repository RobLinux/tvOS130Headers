/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/Support/tvhomesharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <tvhomesharingd/tvhomesharingd-Structs.h>
#import <tvhomesharingd/NSCopying.h>

@class NSString;

@interface TVHDBonjourServiceConfiguration : NSObject <NSCopying> {

	NSString* _serviceName;
	NSString* _serviceType;
	NSString* _serviceDomain;

}

@property (nonatomic,copy) NSString * serviceName;                //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSString * serviceDomain;              //@synthesize serviceDomain=_serviceDomain - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)serviceType;
-(NSString *)serviceDomain;
-(void)setServiceDomain:(NSString *)arg1 ;
@end

