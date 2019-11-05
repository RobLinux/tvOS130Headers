/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraSignificantEventBulletin.h>

@class NSArray, NSUUID;

@interface HMDCameraClipSignificantEventBulletin : HMDCameraSignificantEventBulletin {

	NSArray* _notificationUUIDs;
	NSUUID* _clipUUID;

}

@property (copy,readonly) NSUUID * clipUUID;                        //@synthesize clipUUID=_clipUUID - In the implementation block
@property (copy,readonly) NSArray * notificationUUIDs;              //@synthesize notificationUUIDs=_notificationUUIDs - In the implementation block
-(id)userInfo;
-(NSUUID *)clipUUID;
-(NSArray *)notificationUUIDs;
-(id)initWithNotificationUUIDs:(id)arg1 previewImageFilePathURL:(id)arg2 significantEvent:(unsigned long long)arg3 dateOfOccurrence:(id)arg4 camera:(id)arg5 home:(id)arg6 accessory:(id)arg7 recordingService:(id)arg8 clipUUID:(id)arg9 ;
@end

