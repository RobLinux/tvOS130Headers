/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol HMDSettingsControllerProtocol <HMFObject,AWDHMDSettingsControllerProtocol>
@property (readonly) NSArray * allObjectIdentifiers; 
@property (readonly) id<HMDSettingGroupProtocol> rootGroup; 
@required
-(void)encodeWithCoder:(id)arg1;
-(void)configure;
-(id<HMDSettingGroupProtocol>)rootGroup;
-(void)migrateSettingsWithCompletion:(/*^block*/id)arg1;
-(id)modelsToMakeSettings;
-(void)loadWithModels:(id)arg1;
-(NSArray *)allObjectIdentifiers;

@end

