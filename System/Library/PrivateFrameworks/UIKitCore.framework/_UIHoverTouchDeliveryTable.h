/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, UITouch, NSSet;

@interface _UIHoverTouchDeliveryTable : NSObject {

	NSMutableSet* _beginningGestureRecognizers;
	NSMutableSet* _updatingGestureRecognizers;
	NSMutableSet* _exitingGestureRecognizers;
	NSMutableSet* _ignoredGestureRecognizers;
	UITouch* _touch;

}

@property (nonatomic,readonly) UITouch * touch;                         //@synthesize touch=_touch - In the implementation block
@property (nonatomic,readonly) NSSet * gestureRecognizers; 
-(UITouch *)touch;
-(void)removeGestureRecognizer:(id)arg1 ;
-(NSSet *)gestureRecognizers;
-(id)initWithTouch:(id)arg1 ;
-(long long)updateGestureRecognizerForDelivery:(id)arg1 ;
-(void)updateForEvent:(id)arg1 forcingHitTest:(BOOL)arg2 ;
@end

