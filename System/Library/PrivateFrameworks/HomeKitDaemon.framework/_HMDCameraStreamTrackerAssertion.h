/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDCameraStreamTracker, HMDCameraStreamSessionID;

@interface _HMDCameraStreamTrackerAssertion : HMFObject {

	HMDCameraStreamTracker* _streamTracker;
	HMDCameraStreamSessionID* _streamSessionID;

}

@property (nonatomic,__weak,readonly) HMDCameraStreamTracker * streamTracker;              //@synthesize streamTracker=_streamTracker - In the implementation block
@property (nonatomic,readonly) HMDCameraStreamSessionID * streamSessionID;                 //@synthesize streamSessionID=_streamSessionID - In the implementation block
-(void)dealloc;
-(HMDCameraStreamSessionID *)streamSessionID;
-(HMDCameraStreamTracker *)streamTracker;
-(id)initWithStreamTracker:(id)arg1 streamIdentifier:(id)arg2 ;
@end

