/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXAutoScrollerDelegate;
#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXAutoScroller : NSObject {

	SCD_Struct_PX37 _delegateRespondsTo;
	BOOL __repeating;
	NSObject* _scrollView;
	id<PXAutoScrollerDelegate> _delegate;
	double __margin;
	double __maximumSpeed;
	double __lastUpdateTimestamp;
	CGPoint __autoscrollDirection;

}

@property (nonatomic,readonly) double _margin;                                                          //@synthesize _margin=__margin - In the implementation block
@property (nonatomic,readonly) double _maximumSpeed;                                                    //@synthesize _maximumSpeed=__maximumSpeed - In the implementation block
@property (assign,setter=_setAutoscrollDirection:,nonatomic) CGPoint _autoscrollDirection;              //@synthesize _autoscrollDirection=__autoscrollDirection - In the implementation block
@property (assign,setter=_setRepeating:,getter=_isRepeating,nonatomic) BOOL _repeating;                 //@synthesize _repeating=__repeating - In the implementation block
@property (assign,setter=_setLastUpdateTimestamp:,nonatomic) double _lastUpdateTimestamp;               //@synthesize _lastUpdateTimestamp=__lastUpdateTimestamp - In the implementation block
@property (nonatomic,readonly) NSObject*<PXAnonymousScrollView> scrollView;                             //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) id<PXAutoScrollerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PXAutoScrollerDelegate>)delegate;
-(void)setDelegate:(id<PXAutoScrollerDelegate>)arg1 ;
-(void)stop;
-(BOOL)_isRepeating;
-(NSObject*<PXAnonymousScrollView>)scrollView;
-(void)updateWithTimestamp:(double)arg1 ;
-(double)_lastUpdateTimestamp;
-(id)initWithTargetScrollView:(NSObject*)arg1 ;
-(void)updateWithUserInteractionLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(CGRect)visibleRectForScrollView:(NSObject*)arg1 ;
-(void)startRepeating;
-(void)stopRepeating;
-(BOOL)autoscrollWithOffset:(CGPoint)arg1 ;
-(void)_setAutoscrollDirection:(CGPoint)arg1 ;
-(void)_setRepeating:(BOOL)arg1 ;
-(double)_margin;
-(double)_maximumSpeed;
-(CGPoint)_autoscrollDirection;
-(void)_setLastUpdateTimestamp:(double)arg1 ;
@end
