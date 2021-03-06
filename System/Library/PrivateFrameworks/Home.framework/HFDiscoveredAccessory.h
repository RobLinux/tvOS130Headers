/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFHomeKitObject.h>

@class NSUUID, NSString, HMAccessory, SFDevice, NSDate, NSError;

@interface HFDiscoveredAccessory : NSObject <HFHomeKitObject> {

	NSUUID* _accessoryUUID;
	NSString* _accessoryName;
	HMAccessory* _accessory;
	SFDevice* _sharingDevice;
	NSString* _manufacturerName;
	NSDate* _discoveryDate;
	unsigned long long _status;
	NSError* _error;
	unsigned long long _certificationStatus;

}

@property (nonatomic,retain) HMAccessory * accessory;                             //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,copy) NSString * accessoryName;                              //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,copy) NSString * manufacturerName;                           //@synthesize manufacturerName=_manufacturerName - In the implementation block
@property (assign,nonatomic) unsigned long long certificationStatus;              //@synthesize certificationStatus=_certificationStatus - In the implementation block
@property (nonatomic,readonly) SFDevice * sharingDevice;                          //@synthesize sharingDevice=_sharingDevice - In the implementation block
@property (nonatomic,readonly) NSUUID * accessoryUUID;                            //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (nonatomic,readonly) NSDate * discoveryDate;                            //@synthesize discoveryDate=_discoveryDate - In the implementation block
@property (nonatomic,readonly) unsigned long long status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSError * error;                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL requiresSetupCode; 
@property (nonatomic,readonly) BOOL requiresSoftwareUpdate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier; 
-(NSString *)description;
-(id)init;
-(NSError *)error;
-(NSUUID *)uniqueIdentifier;
-(unsigned long long)status;
-(void)setAccessoryName:(NSString *)arg1 ;
-(NSString *)accessoryName;
-(NSString *)manufacturerName;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(NSUUID *)accessoryUUID;
-(void)setManufacturerName:(NSString *)arg1 ;
-(NSDate *)discoveryDate;
-(unsigned long long)certificationStatus;
-(void)setCertificationStatus:(unsigned long long)arg1 ;
-(id)initWithAccessory:(id)arg1 ;
-(BOOL)requiresSetupCode;
-(void)updateStatus:(unsigned long long)arg1 error:(id)arg2 ;
-(id)_descriptionForStatus:(unsigned long long)arg1 ;
-(SFDevice *)sharingDevice;
-(id)initWithSharingDevice:(id)arg1 ;
-(id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2 ;
-(BOOL)requiresSoftwareUpdate;
-(id)identify;
@end

