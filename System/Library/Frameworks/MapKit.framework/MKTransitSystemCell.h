/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class UIImageView, _MKUILabel, UIView, NSLayoutConstraint, NSString, UIImage;

@interface MKTransitSystemCell : MKCustomSeparatorTableViewCell {

	UIImageView* _shieldImageView;
	_MKUILabel* _systemLabel;
	UIView* _disclosureButton;
	NSLayoutConstraint* _imageToLabelConstraint;
	NSLayoutConstraint* _systemLabelToTopConstraint;
	NSLayoutConstraint* _systemLabelToBottomConstraint;
	BOOL _showDisclosureButton;
	BOOL _expanded;

}

@property (nonatomic,copy) NSString * systemName; 
@property (nonatomic,retain) UIImage * systemArtwork; 
@property (assign,nonatomic) BOOL showDisclosureButton;                    //@synthesize showDisclosureButton=_showDisclosureButton - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;              //@synthesize expanded=_expanded - In the implementation block
-(void)prepareForReuse;
-(NSString *)systemName;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)isExpanded;
-(void)infoCardThemeChanged;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)setShowDisclosureButton:(BOOL)arg1 ;
-(id)_disclosureButton;
-(CGAffineTransform)_transformForExpandedState:(BOOL)arg1 animating:(BOOL)arg2 ;
-(void)setExpanded:(BOOL)arg1 insideAnimation:(BOOL)arg2 ;
-(UIImage *)systemArtwork;
-(void)setSystemArtwork:(UIImage *)arg1 ;
-(void)setSystemName:(NSString *)arg1 ;
-(BOOL)showDisclosureButton;
@end

