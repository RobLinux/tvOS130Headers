/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@interface OFUIWindowDraggingGestureRecognizer : UIGestureRecognizer {

	BOOL _allowDragging;
	CGPoint _initialPoint;

}

@property (nonatomic,readonly) CGPoint translation; 
@property (nonatomic,readonly) CGPoint initialPoint;              //@synthesize initialPoint=_initialPoint - In the implementation block
-(void)reset;
-(CGPoint)translation;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelDragging;
-(void)beginDragging;
-(void)_beginDraggingIfNecessary;
-(void)_stopDraggingIfNecessary:(BOOL)arg1 ;
-(CGPoint)initialPoint;
@end
