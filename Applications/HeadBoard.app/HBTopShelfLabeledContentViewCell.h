/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:11 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoard/HeadBoard-Structs.h>
#import <HeadBoard/HBTopShelfImageStackCollectionViewCell.h>

@protocol OS_dispatch_source;
@class NSObject, UIColor, _TVProgressView, UILabel, UIImageView, UIView, NSDate, NSString, NSURL, NSNumber, TVImageProxy;

@interface HBTopShelfLabeledContentViewCell : HBTopShelfImageStackCollectionViewCell {

	NSObject*<OS_dispatch_source> _expirationTimerSource;
	UIColor* _defaultUnhighlightedColor;
	_TVProgressView* _progressView;
	UILabel* _topRightTextLabel;
	UILabel* _playbackTitleLabel;
	UILabel* _playbackSubtitleLabel;
	UIImageView* _topRightImageView;
	UIView* _overlayView;
	NSDate* _expirationDate;
	NSString* _topRightText;
	NSURL* _topRightImageURL;
	NSNumber* _playbackPercentage;
	NSString* _playbackTitle;
	NSString* _playbackSubtitle;
	NSString* _capturedTitle;
	UIColor* _capturedHighlightedColor;
	UIColor* _capturedUnhighlightedColor;
	TVImageProxy* _topRightImageProxy;

}

@property (nonatomic,copy) NSString * capturedTitle;                            //@synthesize capturedTitle=_capturedTitle - In the implementation block
@property (nonatomic,retain) UIColor * capturedHighlightedColor;                //@synthesize capturedHighlightedColor=_capturedHighlightedColor - In the implementation block
@property (nonatomic,retain) UIColor * capturedUnhighlightedColor;              //@synthesize capturedUnhighlightedColor=_capturedUnhighlightedColor - In the implementation block
@property (nonatomic,retain) TVImageProxy * topRightImageProxy;                 //@synthesize topRightImageProxy=_topRightImageProxy - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                           //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSString * topRightText;                           //@synthesize topRightText=_topRightText - In the implementation block
@property (nonatomic,retain) NSURL * topRightImageURL;                          //@synthesize topRightImageURL=_topRightImageURL - In the implementation block
@property (nonatomic,retain) NSNumber * playbackPercentage;                     //@synthesize playbackPercentage=_playbackPercentage - In the implementation block
@property (nonatomic,retain) NSString * playbackTitle;                          //@synthesize playbackTitle=_playbackTitle - In the implementation block
@property (nonatomic,retain) NSString * playbackSubtitle;                       //@synthesize playbackSubtitle=_playbackSubtitle - In the implementation block
-(void)dealloc;
-(id)title;
-(void)setTitle:(id)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlightedTextColor:(id)arg1 ;
-(id)highlightedTextColor;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(NSNumber *)playbackPercentage;
-(NSString *)playbackSubtitle;
-(NSString *)playbackTitle;
-(NSString *)topRightText;
-(NSURL *)topRightImageURL;
-(void)setPlaybackPercentage:(NSNumber *)arg1 ;
-(void)setPlaybackSubtitle:(NSString *)arg1 ;
-(void)setPlaybackTitle:(NSString *)arg1 ;
-(void)setTopRightText:(NSString *)arg1 ;
-(void)setTopRightImageURL:(NSURL *)arg1 ;
-(id)_animatedTitleLabel;
-(double)_maxTitleWidthWithFocus:(BOOL)arg1 ;
-(Class)_labelClass;
-(void)setUnhighlightedTextColor:(id)arg1 ;
-(id)unhighlightedTextColor;
-(void)_updateTitleExpirationAppearance;
-(NSString *)capturedTitle;
-(void)setCapturedTitle:(NSString *)arg1 ;
-(UIColor *)capturedHighlightedColor;
-(void)setCapturedHighlightedColor:(UIColor *)arg1 ;
-(UIColor *)capturedUnhighlightedColor;
-(void)setCapturedUnhighlightedColor:(UIColor *)arg1 ;
-(void)_updateOverlayView;
-(TVImageProxy *)topRightImageProxy;
-(void)setTopRightImageProxy:(TVImageProxy *)arg1 ;
@end

