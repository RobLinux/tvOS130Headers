/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFAppRequest.h>

@class NSNumber;

@interface DMFInstallAppRequest : DMFAppRequest {

	BOOL _allowFreePurchases;
	unsigned long long _licenseType;
	NSNumber* _accountIdentifier;

}

@property (assign,nonatomic) unsigned long long licenseType;              //@synthesize licenseType=_licenseType - In the implementation block
@property (assign,nonatomic) BOOL allowFreePurchases;                     //@synthesize allowFreePurchases=_allowFreePurchases - In the implementation block
@property (nonatomic,copy) NSNumber * accountIdentifier;                  //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)accountIdentifier;
-(unsigned long long)licenseType;
-(BOOL)allowFreePurchases;
-(void)setLicenseType:(unsigned long long)arg1 ;
-(void)setAllowFreePurchases:(BOOL)arg1 ;
@end

