/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Security/NSSecureCoding.h>

@interface OTOperationConfiguration : NSObject <NSSecureCoding> {

	BOOL _discretionaryNetwork;
	BOOL _useCachedAccountStatus;
	unsigned long long _timeoutWaitForCKAccount;
	long long _qualityOfService;

}

@property (assign,nonatomic) unsigned long long timeoutWaitForCKAccount;              //@synthesize timeoutWaitForCKAccount=_timeoutWaitForCKAccount - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                              //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) BOOL discretionaryNetwork;                               //@synthesize discretionaryNetwork=_discretionaryNetwork - In the implementation block
@property (assign,nonatomic) BOOL useCachedAccountStatus;                             //@synthesize useCachedAccountStatus=_useCachedAccountStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(unsigned long long)timeoutWaitForCKAccount;
-(void)setTimeoutWaitForCKAccount:(unsigned long long)arg1 ;
-(BOOL)discretionaryNetwork;
-(void)setDiscretionaryNetwork:(BOOL)arg1 ;
-(BOOL)useCachedAccountStatus;
-(void)setUseCachedAccountStatus:(BOOL)arg1 ;
@end

