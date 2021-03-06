/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Siri/Siri-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SRTranscriptViewDelegate;
@class SRTranscriptContentView, UIView, UICollectionView;

@interface SRTranscriptView : UIView {

	SRTranscriptContentView* _contentView;
	BOOL _contentSizeIsSet;
	UIView* _fullScreenEffectContainerView;
	id<SRTranscriptViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SRTranscriptViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView; 
@property (nonatomic,retain) UIView * suggestionsView; 
@property (assign,nonatomic) double topMargin; 
@property (assign,nonatomic) double bottomMargin; 
-(void)dealloc;
-(id<SRTranscriptViewDelegate>)delegate;
-(void)setDelegate:(id<SRTranscriptViewDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTopMargin:(double)arg1 ;
-(void)setBottomMargin:(double)arg1 ;
-(UICollectionView *)collectionView;
-(void)layoutSubviews;
-(double)bottomMargin;
-(double)topMargin;
-(void)setTopKeylineHidden:(BOOL)arg1 ;
-(void)showFullScreenEffect:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 collectionView:(id)arg2 delegate:(id)arg3 ;
-(void)setSuggestionsView:(UIView *)arg1 ;
-(void)setBottomKeylineHidden:(BOOL)arg1 ;
-(UIView *)suggestionsView;
@end

