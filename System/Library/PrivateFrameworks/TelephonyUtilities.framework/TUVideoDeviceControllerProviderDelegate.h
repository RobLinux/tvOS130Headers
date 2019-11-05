/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUVideoDeviceControllerProviderDelegate <AVConferencePreviewClientDelegate>
@required
-(void)didStartPreviewForProvider:(id)arg1;
-(void)didStopPreviewForProvider:(id)arg1;
-(void)captureDevicesChangedForProvider:(id)arg1;
-(void)provider:(id)arg1 cameraDidBecomeAvailableForUniqueID:(id)arg2;
-(void)provider:(id)arg1 didChangeLocalVideoAttributes:(id)arg2;
-(void)provider:(id)arg1 didReceiveErrorFromCameraUniqueID:(id)arg2 error:(id)arg3;
-(void)provider:(id)arg1 didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg2;
-(void)provider:(id)arg1 cameraZoomAvailabilityDidChange:(BOOL)arg2;

@end

