/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class UIViewController;

@interface TVPMusicNowPlayingPresentationOperation : NSOperation {

	BOOL _isExecuting;
	BOOL _isFinished;
	BOOL _animated;
	UIViewController* _presentingViewController;
	UIViewController* _presentedViewController;

}

@property (nonatomic,readonly) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * presentedViewController;               //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (getter=isAnimated,nonatomic,readonly) BOOL animated;                          //@synthesize animated=_animated - In the implementation block
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(UIViewController *)presentingViewController;
-(void)_finish;
-(UIViewController *)presentedViewController;
-(BOOL)isAnimated;
-(id)initWithPresentingViewController:(id)arg1 presentedViewController:(id)arg2 animated:(BOOL)arg3 ;
@end

