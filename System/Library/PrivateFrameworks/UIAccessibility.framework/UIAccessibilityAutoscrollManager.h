/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIScrollView;

@interface UIAccessibilityAutoscrollManager : NSObject {

	BOOL _autoscrolling;
	UIScrollView* _scrollView;
	unsigned long long _scrollDirection;
	double _autoscrollSpeed;

}

@property (assign,getter=isAutoscrolling,nonatomic) BOOL autoscrolling;              //@synthesize autoscrolling=_autoscrolling - In the implementation block
@property (assign,nonatomic) unsigned long long scrollDirection;                     //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (assign,nonatomic) double autoscrollSpeed;                                 //@synthesize autoscrollSpeed=_autoscrollSpeed - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                              //@synthesize scrollView=_scrollView - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)pause;
-(void)scrollToTop;
-(UIScrollView *)scrollView;
-(void)autoscrollInDirection:(unsigned long long)arg1 ;
-(BOOL)isAutoscrolling;
-(void)scrollToBottom;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setScrollDirection:(unsigned long long)arg1 ;
-(unsigned long long)availableAutoscrollDirections;
-(void)incrementAutoscrollSpeed;
-(void)decrementAutoscrollSpeed;
-(void)setAutoscrollSpeed:(double)arg1 ;
-(void)_autoscroll;
-(void)setAutoscrolling:(BOOL)arg1 ;
-(unsigned long long)scrollDirection;
-(double)autoscrollSpeed;
@end

