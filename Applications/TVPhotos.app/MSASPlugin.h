/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:00:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVPhotos.app/TVPhotos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSASPlugin <NSObject>
@optional
+(id)MSASPersonIDsForPollingTriggeredByPushNotification;
+(void)didFindDeletedAlbumWithGUID:(id)arg1 inviterAddress:(id)arg2;
+(void)didFindNewAlbum:(id)arg1;

@required
+(id)delegatePluginForPersonID:(id)arg1;

@end

