/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/ActionKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSArray, UILabel, UIImageView;

@interface WFCameraFlashButton : UIControl {

	BOOL _expanded;
	BOOL _needsHiding;
	NSArray* _labels;
	UILabel* _selectedLabel;
	UIImageView* _flashView;

}

@property (nonatomic,retain) NSArray * labels;                            //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) UILabel * selectedLabel;                     //@synthesize selectedLabel=_selectedLabel - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * flashView;              //@synthesize flashView=_flashView - In the implementation block
@property (assign,nonatomic) BOOL expanded;                               //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) BOOL needsHiding;                            //@synthesize needsHiding=_needsHiding - In the implementation block
@property (assign,nonatomic) long long flashMode; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(long long)flashMode;
-(NSArray *)labels;
-(void)setLabels:(NSArray *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(UIImageView *)flashView;
-(void)setFlashView:(UIImageView *)arg1 ;
-(UILabel *)selectedLabel;
-(void)setSelectedLabel:(UILabel *)arg1 ;
-(BOOL)needsHiding;
-(void)setNeedsHiding:(BOOL)arg1 ;
@end

