/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, UIView, UIAirDropNode, UIVisualEffectView, NSArray, _UIAirDropProgressView;

@interface UIAirDropGroupActivityCell : UICollectionViewCell {

	BOOL _stateBeingRestored;
	BOOL _disabled;
	UILabel* _nameLabel;
	UIView* _titleSlotView;
	UIView* _subtitleSlotView;
	UIView* _displayNameSlotView;
	UIView* _imageSlotView;
	UIView* _transportSlotView;
	UIAirDropNode* _node;
	double _progress;
	UIVisualEffectView* _vibrantTitleView;
	UIVisualEffectView* _vibrantSubtitleView;
	UILabel* _secondLabel;
	NSArray* _secondLabelVisibleConstraintsArray;
	UILabel* _labelForPositioning;
	_UIAirDropProgressView* _circleProgressView;
	NSArray* _regularConstraints;
	NSArray* _largeTextConstraints;

}

@property (nonatomic,retain) UIVisualEffectView * vibrantTitleView;                     //@synthesize vibrantTitleView=_vibrantTitleView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * vibrantSubtitleView;                  //@synthesize vibrantSubtitleView=_vibrantSubtitleView - In the implementation block
@property (nonatomic,retain) UIView * titleSlotView;                                    //@synthesize titleSlotView=_titleSlotView - In the implementation block
@property (nonatomic,retain) UIView * subtitleSlotView;                                 //@synthesize subtitleSlotView=_subtitleSlotView - In the implementation block
@property (nonatomic,retain) UIView * displayNameSlotView;                              //@synthesize displayNameSlotView=_displayNameSlotView - In the implementation block
@property (nonatomic,retain) UIView * imageSlotView;                                    //@synthesize imageSlotView=_imageSlotView - In the implementation block
@property (nonatomic,retain) UIView * transportSlotView;                                //@synthesize transportSlotView=_transportSlotView - In the implementation block
@property (nonatomic,retain) UILabel * secondLabel;                                     //@synthesize secondLabel=_secondLabel - In the implementation block
@property (nonatomic,retain) NSArray * secondLabelVisibleConstraintsArray;              //@synthesize secondLabelVisibleConstraintsArray=_secondLabelVisibleConstraintsArray - In the implementation block
@property (nonatomic,retain) UILabel * labelForPositioning;                             //@synthesize labelForPositioning=_labelForPositioning - In the implementation block
@property (nonatomic,retain) _UIAirDropProgressView * circleProgressView;               //@synthesize circleProgressView=_circleProgressView - In the implementation block
@property (nonatomic,retain) NSArray * regularConstraints;                              //@synthesize regularConstraints=_regularConstraints - In the implementation block
@property (nonatomic,retain) NSArray * largeTextConstraints;                            //@synthesize largeTextConstraints=_largeTextConstraints - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                       //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UIAirDropNode * node;                                      //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) double progress;                                           //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL stateBeingRestored;                                   //@synthesize stateBeingRestored=_stateBeingRestored - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                           //@synthesize disabled=_disabled - In the implementation block
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(void)prepareForReuse;
-(UIAirDropNode *)node;
-(void)setSelected:(BOOL)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isDisabled;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)setNode:(UIAirDropNode *)arg1 ;
-(UIVisualEffectView *)vibrantTitleView;
-(void)setSecondLabel:(UILabel *)arg1 ;
-(UILabel *)secondLabel;
-(void)setLabelForPositioning:(UILabel *)arg1 ;
-(UILabel *)labelForPositioning;
-(void)setImageSlotView:(UIView *)arg1 ;
-(UIView *)imageSlotView;
-(void)setTitleSlotView:(UIView *)arg1 ;
-(UIView *)titleSlotView;
-(void)setDisplayNameSlotView:(UIView *)arg1 ;
-(UIView *)displayNameSlotView;
-(void)setSubtitleSlotView:(UIView *)arg1 ;
-(UIView *)subtitleSlotView;
-(void)setCircleProgressView:(_UIAirDropProgressView *)arg1 ;
-(void)setTransportSlotView:(UIView *)arg1 ;
-(UIView *)transportSlotView;
-(_UIAirDropProgressView *)circleProgressView;
-(void)setupConstraintsYukon;
-(void)setLargeTextConstraints:(NSArray *)arg1 ;
-(void)setRegularConstraints:(NSArray *)arg1 ;
-(NSArray *)largeTextConstraints;
-(NSArray *)regularConstraints;
-(void)_updateForCurrentSizeCategory;
-(void)updateDarkening;
-(BOOL)stateBeingRestored;
-(void)setStateBeingRestored:(BOOL)arg1 ;
-(void)setVibrantTitleView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)vibrantSubtitleView;
-(void)setVibrantSubtitleView:(UIVisualEffectView *)arg1 ;
-(NSArray *)secondLabelVisibleConstraintsArray;
-(void)setSecondLabelVisibleConstraintsArray:(NSArray *)arg1 ;
@end

