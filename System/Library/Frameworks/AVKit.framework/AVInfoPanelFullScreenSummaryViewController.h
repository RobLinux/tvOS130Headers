/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class AVFocusableScrollView, UILabel, UIVisualEffectView, NSString, AVPlayerController;

@interface AVInfoPanelFullScreenSummaryViewController : UIViewController {

	AVFocusableScrollView* _scrollView;
	UILabel* _textLabel;
	UIVisualEffectView* _backdropView;
	BOOL _shouldResumePlayback;
	NSString* _text;
	AVPlayerController* _playerController;

}

@property (nonatomic,copy) NSString * text;                                             //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL shouldResumePlayback;                                 //@synthesize shouldResumePlayback=_shouldResumePlayback - In the implementation block
@property (assign,nonatomic,__weak) AVPlayerController * playerController;              //@synthesize playerController=_playerController - In the implementation block
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(AVPlayerController *)playerController;
-(BOOL)shouldResumePlayback;
-(void)setShouldResumePlayback:(BOOL)arg1 ;
@end

