/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:07:55 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVAirPlay.app/TVAirPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol TVAirPlayPinSession, TVAirPlayMediaViewControllerDelegate;
@class TVAirPlayInfoSession, TVAirPlayPresentationSession, TVAirPlayURLSession, TVAirPlayAPRKVideoSession, TVAirPlayPINViewController, UIAlertController, _TVAirPlayVideoPlayerViewController, TVAirPlayPresentationViewController, TVAirPlayAPRKViewController;

@interface TVAirPlayMediaViewController : UIViewController {

	BOOL _dismissing;
	id<TVAirPlayPinSession> _pinSession;
	TVAirPlayInfoSession* _dialogInfoSession;
	TVAirPlayPresentationSession* _presentationSession;
	TVAirPlayURLSession* _videoPlaybackSession;
	TVAirPlayAPRKVideoSession* _APRKVideoSession;
	id<TVAirPlayMediaViewControllerDelegate> _delegate;
	TVAirPlayPINViewController* _pinViewController;
	UIAlertController* _dialogViewController;
	_TVAirPlayVideoPlayerViewController* _videoPlayerViewController;
	TVAirPlayPresentationViewController* _presentationViewController;
	TVAirPlayAPRKViewController* _aprkViewController;

}

@property (assign,nonatomic) BOOL dismissing;                                                               //@synthesize dismissing=_dismissing - In the implementation block
@property (nonatomic,retain) TVAirPlayPINViewController * pinViewController;                                //@synthesize pinViewController=_pinViewController - In the implementation block
@property (nonatomic,retain) UIAlertController * dialogViewController;                                      //@synthesize dialogViewController=_dialogViewController - In the implementation block
@property (nonatomic,retain) _TVAirPlayVideoPlayerViewController * videoPlayerViewController;               //@synthesize videoPlayerViewController=_videoPlayerViewController - In the implementation block
@property (nonatomic,retain) TVAirPlayPresentationViewController * presentationViewController;              //@synthesize presentationViewController=_presentationViewController - In the implementation block
@property (nonatomic,retain) TVAirPlayAPRKViewController * aprkViewController;                              //@synthesize aprkViewController=_aprkViewController - In the implementation block
@property (nonatomic,retain) id<TVAirPlayPinSession> pinSession;                                            //@synthesize pinSession=_pinSession - In the implementation block
@property (nonatomic,retain) TVAirPlayInfoSession * dialogInfoSession;                                      //@synthesize dialogInfoSession=_dialogInfoSession - In the implementation block
@property (nonatomic,retain) TVAirPlayPresentationSession * presentationSession;                            //@synthesize presentationSession=_presentationSession - In the implementation block
@property (nonatomic,retain) TVAirPlayURLSession * videoPlaybackSession;                                    //@synthesize videoPlaybackSession=_videoPlaybackSession - In the implementation block
@property (nonatomic,retain) TVAirPlayAPRKVideoSession * APRKVideoSession;                                  //@synthesize APRKVideoSession=_APRKVideoSession - In the implementation block
@property (assign,nonatomic,__weak) id<TVAirPlayMediaViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(id<TVAirPlayMediaViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TVAirPlayMediaViewControllerDelegate>)arg1 ;
-(void)dismiss;
-(id)preferredFocusEnvironments;
-(TVAirPlayPINViewController *)pinViewController;
-(void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 ;
-(void)setPresentationViewController:(TVAirPlayPresentationViewController *)arg1 ;
-(TVAirPlayPresentationViewController *)presentationViewController;
-(void)viewServiceBeginPresentationWithOptions:(id)arg1 ;
-(void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(_TVAirPlayVideoPlayerViewController *)videoPlayerViewController;
-(void)setVideoPlayerViewController:(_TVAirPlayVideoPlayerViewController *)arg1 ;
-(BOOL)dismissing;
-(void)setPinSession:(id<TVAirPlayPinSession>)arg1 ;
-(void)setDialogInfoSession:(TVAirPlayInfoSession *)arg1 ;
-(void)setPresentationSession:(TVAirPlayPresentationSession *)arg1 ;
-(void)setVideoPlaybackSession:(TVAirPlayURLSession *)arg1 ;
-(void)setAPRKVideoSession:(TVAirPlayAPRKVideoSession *)arg1 ;
-(void)setDismissing:(BOOL)arg1 ;
-(id<TVAirPlayPinSession>)pinSession;
-(TVAirPlayInfoSession *)dialogInfoSession;
-(TVAirPlayPresentationSession *)presentationSession;
-(TVAirPlayURLSession *)videoPlaybackSession;
-(TVAirPlayAPRKVideoSession *)APRKVideoSession;
-(void)setPinViewController:(TVAirPlayPINViewController *)arg1 ;
-(UIAlertController *)dialogViewController;
-(void)setDialogViewController:(UIAlertController *)arg1 ;
-(TVAirPlayAPRKViewController *)aprkViewController;
-(void)setAprkViewController:(TVAirPlayAPRKViewController *)arg1 ;
@end

