/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AMPCoreUI.framework/AMPCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AMPCoreUI/AMPCoreUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol AMPUserNotificationContentDelegate;
@class AMSUserNotification, UILabel, UIImageView, AVPlayerViewController, NSString;

@interface AMPUserNotificationContentViewController : UIViewController {

	AMSUserNotification* _userNotification;
	id<AMPUserNotificationContentDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _textLabel;
	UIImageView* _imageView;
	AVPlayerViewController* _videoPlayerController;
	NSString* _audioSessionCategory;
	unsigned long long _audioSessionCategoryOptions;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                               //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                           //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) AVPlayerViewController * videoPlayerController;                    //@synthesize videoPlayerController=_videoPlayerController - In the implementation block
@property (nonatomic,retain) NSString * audioSessionCategory;                                     //@synthesize audioSessionCategory=_audioSessionCategory - In the implementation block
@property (assign,nonatomic) unsigned long long audioSessionCategoryOptions;                      //@synthesize audioSessionCategoryOptions=_audioSessionCategoryOptions - In the implementation block
@property (nonatomic,readonly) AMSUserNotification * userNotification;                            //@synthesize userNotification=_userNotification - In the implementation block
@property (assign,nonatomic,__weak) id<AMPUserNotificationContentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize expectedContentSize; 
-(id<AMPUserNotificationContentDelegate>)delegate;
-(void)setDelegate:(id<AMPUserNotificationContentDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(UILabel *)textLabel;
-(void)loadView;
-(UIImageView *)imageView;
-(AMSUserNotification *)userNotification;
-(UILabel *)titleLabel;
-(void)viewWillLayoutSubviews;
-(void)setAudioSessionCategoryOptions:(unsigned long long)arg1 ;
-(void)setAudioSessionCategory:(NSString *)arg1 ;
-(NSString *)audioSessionCategory;
-(unsigned long long)audioSessionCategoryOptions;
-(CGSize)expectedContentSize;
-(AVPlayerViewController *)videoPlayerController;
-(void)imageViewTapped:(id)arg1 ;
-(id)initWithNotification:(id)arg1 delegate:(id)arg2 ;
-(void)mediaPause;
@end

