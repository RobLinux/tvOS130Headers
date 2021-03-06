/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMDMediaSystem, HMDAccessory, HMDHome, HMDAccessorySettingTarget, NSUUID, NSString;

@interface HMDAccessorySettingContainer : NSObject {

	HMDMediaSystem* _mediaSystem;
	HMDAccessory* _accessory;

}

@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                        //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,__weak,readonly) HMDHome * home; 
@property (nonatomic,__weak,readonly) HMDAccessorySettingTarget * target; 
@property (nonatomic,__weak,readonly) HMDMediaSystem * mediaSystem;                    //@synthesize mediaSystem=_mediaSystem - In the implementation block
@property (nonatomic,readonly) NSUUID * parentUUID; 
@property (nonatomic,readonly) NSString * name; 
-(NSString *)name;
-(id)description;
-(HMDAccessorySettingTarget *)target;
-(HMDHome *)home;
-(NSUUID *)parentUUID;
-(HMDAccessory *)accessory;
-(HMDMediaSystem *)mediaSystem;
-(id)initWithAccessory:(id)arg1 mediaSystem:(id)arg2 ;
-(void)auditRootSettingsGroup:(unsigned long long)arg1 ;
-(BOOL)isMediaSystemContainer;
@end

