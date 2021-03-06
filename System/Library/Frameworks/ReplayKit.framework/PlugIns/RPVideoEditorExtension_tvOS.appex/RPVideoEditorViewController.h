/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/PlugIns/RPVideoEditorExtension_tvOS.appex/RPVideoEditorExtension_tvOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RPVideoEditorExtension_tvOS/RPVideoEditorExtension_tvOS-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <RPVideoEditorExtension_tvOS/AVPlayerViewControllerDelegate.h>
#import <RPVideoEditorExtension_tvOS/AVPlayerViewControllerDelegatePrivate.h>

@class NSURL, NSString, AVPlayer, AVPlayerLayer, AVPlayerItem, AVURLAsset, AVPlayerViewController;

@interface RPVideoEditorViewController : UIViewController <UIViewControllerTransitioningDelegate, AVPlayerViewControllerDelegate, AVPlayerViewControllerDelegatePrivate> {

	id _delegate;
	NSURL* _fileAttachmentURL;
	NSString* _overrideShareMessage;
	NSURL* _videoURL;
	AVPlayer* _avPlayer;
	AVPlayerLayer* _avPlayerLayer;
	AVPlayerItem* _avPlayerItem;
	AVURLAsset* _avAsset;
	NSString* _applicationName;
	NSString* _bundleIdentifier;
	AVPlayerViewController* _avPlayerViewController;

}

@property (nonatomic,retain) NSURL * videoURL;                                             //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,retain) AVPlayer * avPlayer;                                          //@synthesize avPlayer=_avPlayer - In the implementation block
@property (nonatomic,retain) AVPlayerLayer * avPlayerLayer;                                //@synthesize avPlayerLayer=_avPlayerLayer - In the implementation block
@property (nonatomic,retain) AVPlayerItem * avPlayerItem;                                  //@synthesize avPlayerItem=_avPlayerItem - In the implementation block
@property (nonatomic,retain) AVURLAsset * avAsset;                                         //@synthesize avAsset=_avAsset - In the implementation block
@property (nonatomic,retain) NSString * applicationName;                                   //@synthesize applicationName=_applicationName - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * avPlayerViewController;              //@synthesize avPlayerViewController=_avPlayerViewController - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * fileAttachmentURL;                                    //@synthesize fileAttachmentURL=_fileAttachmentURL - In the implementation block
@property (nonatomic,retain) NSString * overrideShareMessage;                              //@synthesize overrideShareMessage=_overrideShareMessage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setApplicationName:(NSString *)arg1 ;
-(NSString *)applicationName;
-(void)viewDidLoad;
-(NSURL *)videoURL;
-(void)setVideoURL:(NSURL *)arg1 ;
-(AVURLAsset *)avAsset;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(AVPlayer *)avPlayer;
-(void)dismissPlayerViewController:(id)arg1 ;
-(void)setAvPlayer:(AVPlayer *)arg1 ;
-(AVPlayerViewController *)avPlayerViewController;
-(AVPlayerItem *)avPlayerItem;
-(void)setAvPlayerViewController:(AVPlayerViewController *)arg1 ;
-(AVPlayerLayer *)avPlayerLayer;
-(void)setAvAsset:(AVURLAsset *)arg1 ;
-(void)setAvPlayerItem:(AVPlayerItem *)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 URL:(id)arg2 applicationName:(id)arg3 ;
-(NSURL *)fileAttachmentURL;
-(void)setFileAttachmentURL:(NSURL *)arg1 ;
-(NSString *)overrideShareMessage;
-(void)setOverrideShareMessage:(NSString *)arg1 ;
-(void)setAvPlayerLayer:(AVPlayerLayer *)arg1 ;
@end

