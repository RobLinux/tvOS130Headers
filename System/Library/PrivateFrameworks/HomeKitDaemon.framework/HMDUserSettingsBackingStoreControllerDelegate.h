/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID;


@protocol HMDUserSettingsBackingStoreControllerDelegate <NSObject>
@property (readonly) NSUUID * userUUID; 
@property (readonly) BOOL isRunningOnHomeOwnersDevice; 
@property (readonly) BOOL isCurrentUser; 
@required
-(BOOL)isCurrentUser;
-(NSUUID *)userUUID;
-(BOOL)isRunningOnHomeOwnersDevice;
-(id)zoneNameForBackingStoreController:(id)arg1;
-(id)backingStoreController:(id)arg1 createParticipantManagerForCloudZone:(id)arg2;
-(void)didStartBackingStoreController:(id)arg1;

@end

