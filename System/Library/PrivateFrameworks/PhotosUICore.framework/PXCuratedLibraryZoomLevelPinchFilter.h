/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PXInitialHysteresisNumberFilter, PXChangeDirectionNumberFilter;

@interface PXCuratedLibraryZoomLevelPinchFilter : NSObject {

	BOOL _didHandleInitialPinch;
	PXInitialHysteresisNumberFilter* _initialDirectionFilter;
	PXChangeDirectionNumberFilter* _scaleDirectionFilter;
	double _lastDirection;
	BOOL _isTrackingPinch;

}

@property (nonatomic,readonly) BOOL isTrackingPinch;              //@synthesize isTrackingPinch=_isTrackingPinch - In the implementation block
-(id)init;
-(void)reset;
-(void)filterPinchGestureWithScale:(double)arg1 initialPinchHandler:(/*^block*/id)arg2 subsequentDirectionChangeHandler:(/*^block*/id)arg3 ;
-(BOOL)isTrackingPinch;
@end

