/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/NSSecureCoding.h>

@interface CKAccountInfo : NSObject <NSSecureCoding> {

	BOOL _hasValidCredentials;
	long long _accountStatus;
	long long _accountPartition;
	long long _deviceToDeviceEncryptionAvailability;

}

@property (assign,nonatomic) BOOL supportsDeviceToDeviceEncryption; 
@property (assign,nonatomic) long long deviceToDeviceEncryptionAvailability;              //@synthesize deviceToDeviceEncryptionAvailability=_deviceToDeviceEncryptionAvailability - In the implementation block
@property (assign,nonatomic) long long accountStatus;                                     //@synthesize accountStatus=_accountStatus - In the implementation block
@property (assign,nonatomic) long long accountPartition;                                  //@synthesize accountPartition=_accountPartition - In the implementation block
@property (assign,nonatomic) BOOL hasValidCredentials;                                    //@synthesize hasValidCredentials=_hasValidCredentials - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)accountStatus;
-(id)CKPropertiesDescription;
-(long long)accountPartition;
-(long long)deviceToDeviceEncryptionAvailability;
-(BOOL)hasValidCredentials;
-(void)setDeviceToDeviceEncryptionAvailability:(long long)arg1 ;
-(void)setSupportsDeviceToDeviceEncryption:(BOOL)arg1 ;
-(BOOL)supportsDeviceToDeviceEncryption;
-(void)setAccountStatus:(long long)arg1 ;
-(void)setAccountPartition:(long long)arg1 ;
-(void)setHasValidCredentials:(BOOL)arg1 ;
@end
